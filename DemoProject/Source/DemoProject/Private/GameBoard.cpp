// Fill out your copyright notice in the Description page of Project Settings.

#include "GameBoard.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AGameBoard::AGameBoard()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGameBoard::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGameBoard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 AGameBoard::SelectTileFromLibrary()
{
	float NormalizingFactor = 0;
	for (const FTileType& TileBase : TileLibrary)
	{
		NormalizingFactor += TileBase.Probability;
	}
	float TestNumber = FMath::FRandRange(0.0f, NormalizingFactor);
	float CompareTo = 0;
	for (int32 ArrayChecked = 0; ArrayChecked != TileLibrary.Num(); ArrayChecked++)
	{
		CompareTo += TileLibrary[ArrayChecked].Probability;
		if (TestNumber <= CompareTo)
		{
			return ArrayChecked;
		}
	}
	return 0;
}


ATile* AGameBoard::CreateTile(TSubclassOf<class ATile> TileToSpawn, class UMaterialInstanceConstant* TileMaterial, FVector SpawnLocation, int32 SpawnGridAddress, int32 TileTypeID)
{
	// If we have set something to spawn:
	if (TileToSpawn)
	{
		checkSlow(TileLibrary.IsValidIndex(TileTypeID));
		// Check for a valid World:
		UWorld* const World = GetWorld();
		if (World)
		{
			// Set the spawn parameters.
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			// Tiles never rotate
			FRotator SpawnRotation(0.0f, 0.0f, 0.0f);
			// Spawn the tile.
			ATile* const NewTile = World->SpawnActor<ATile>(TileToSpawn, SpawnLocation, SpawnRotation, SpawnParams);
			//NewTile->GetRenderComponent()->SetMobility(EComponentMobility::Movable);
			NewTile->TileTypeID = TileTypeID;
			NewTile->Abilities = TileLibrary[TileTypeID].Abilities;
			//NewTile->SetTileMaterial(TileMaterial);
			NewTile->SetGridAddress(SpawnGridAddress);
			GameTiles[SpawnGridAddress] = NewTile;
			return NewTile;
		}
	}
	return nullptr;
}

void AGameBoard::InitGameboard()
{
	GameTiles.Empty(GameboardWidth * GameboardHeight);
	GameTiles.AddZeroed(GameTiles.Max());
	FVector SpawnLocation;
	
	for (int32 Column = 0; Column < GameboardWidth; ++Column)
	{
		for (int32 Row = 0; Row < GameboardHeight; ++Row)
		{
			int32 TileID = SelectTileFromLibrary();
			int32 GridAddress;
			GetGridAddressWithOffset(0, Column, Row, GridAddress);
			SpawnLocation = GetLocationFromGridAddress(GridAddress);

			do
			{
				TileID = SelectTileFromLibrary();
				if ((Column >= MinimumRunLength - 1) || (Row >= MinimumRunLength - 1))
				{
					int32 TestAddress;
					int32 TileOffset;
					for (int32 Horizontal = 0; Horizontal < 2; ++Horizontal)
					{
						for (TileOffset = 1; TileOffset < MinimumRunLength; ++TileOffset)
						{
							if (!GetGridAddressWithOffset(0, Column - (Horizontal ? TileOffset : 0), Row - (Horizontal ? 0 : TileOffset), TestAddress) || (GetTileFromGridAddress(TestAddress)->TileTypeID != TileID))
							{
								// Not in a matching run, or off the edge of the map, so stop checking this axis.
								break;
							}
						}
						if (TileOffset == MinimumRunLength)
						{
							// We made it through the whole "check for matching run" loop. This tile completes a scoring run. Pick a new tile type and test again.
							break;
						}
					}
					if (TileOffset < MinimumRunLength)
					{
						// We didn't find a matching run in either direction, so we have a valid tile type.
						break;
					}
				}
				else
				{
					// This tile is too close to the edge to be worth checking.
					break;
				}
			} while (true);
			CreateTile(TileLibrary[TileID].TileClass, TileLibrary[TileID].TileMaterial, SpawnLocation, GridAddress, TileID);
		}
	}
}

ATile* AGameBoard::GetTileFromGridAddress(int32 GridAddress) const
{
	if (GameTiles.IsValidIndex(GridAddress))
	{
		return GameTiles[GridAddress];
	}
	return nullptr;
}

FVector AGameBoard::GetLocationFromGridAddress(int32 GridAddress) const
{
	FVector Center = GetActorLocation();
	FVector OutLocation = FVector(-(GameboardWidth * 0.5f) * TileSize.X + (TileSize.X * 0.5f), 0.0f, -(GameboardHeight * 0.5f) * TileSize.Y + (TileSize.Y * 0.5f));
	check(GameboardWidth > 0);
	OutLocation.X += TileSize.X * (float)(GridAddress % GameboardWidth);
	OutLocation.Z += TileSize.Y * (float)(GridAddress / GameboardWidth);
	OutLocation += Center;

	return OutLocation;
}

FVector AGameBoard::GetLocationFromGridAddressWithOffset(int32 GridAddress, int32 XOffsetInTiles, int32 YOffsetInTiles) const
{
	FVector OutLocation = GetLocationFromGridAddress(GridAddress);
	OutLocation.X += TileSize.X * (float)(XOffsetInTiles);
	OutLocation.Z += TileSize.Y * (float)(YOffsetInTiles);
	return OutLocation;
}

bool AGameBoard::GetGridAddressWithOffset(int32 InitialGridAddress, int32 XOffset, int32 YOffset, int32 &ReturnGridAddress) const
{
	int32 NewAxisValue;

	// Initialize to an invalid address.
	ReturnGridAddress = -1;

	// Check for going off the map in the X direction.
	check(GameboardWidth > 0);
	NewAxisValue = (InitialGridAddress % GameboardWidth) + XOffset;
	if (NewAxisValue != FMath::Clamp(NewAxisValue, 0, (GameboardWidth - 1)))
	{
		return false;
	}

	// Check for going off the map in the Y direction.
	NewAxisValue = (InitialGridAddress / GameboardWidth) + YOffset;
	if (NewAxisValue != FMath::Clamp(NewAxisValue, 0, (GameboardHeight - 1)))
	{
		return false;
	}

	ReturnGridAddress = (InitialGridAddress + XOffset + (YOffset * GameboardWidth));
	check(ReturnGridAddress >= 0);
	check(ReturnGridAddress < (GameboardWidth * GameboardHeight));
	return true;
}
