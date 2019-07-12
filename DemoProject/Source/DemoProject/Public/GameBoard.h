// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.h"
#include "GameBoard.generated.h"

USTRUCT(BlueprintType)
struct FTileType
{
	GENERATED_USTRUCT_BODY();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Probability = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMaterialInstanceConstant* TileMaterial = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class ATile> TileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FLinearColor EffectColor = FLinearColor::White;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FTileAbilities Abilities;
};

UCLASS()
class DEMOPROJECT_API AGameBoard : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGameBoard();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<ATile*> GameTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTileType> TileLibrary;

	/** The size of a space on the grid. Does not include borders or spacing between tiles. */
	UPROPERTY(EditAnywhere, Category = Tile)
	FVector2D TileSize;

	/** Minimum number of matching tiles in a row needed to score. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tile)
	int32 MinimumRunLength;

	/** The width of the grid. Needed to calculate tile positions and neighbors. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tile)
	int32 GameboardWidth;

	/** The height of the grid. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Tile)
	int32 GameboardHeight;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Initialize the tiles on the grid*/
	UFUNCTION(BlueprintCallable, Category = Initialization)
	void InitGameboard();

	/** Spawn a tile and associate it with a specific grid address. */
	ATile* CreateTile(TSubclassOf<class ATile> TileToSpawn, class UMaterialInstanceConstant* TileMaterial, FVector SpawnLocation, int32 SpawnGridAddress, int32 TileTypeID);

	/** Randomly select a type of tile from the grid's library, using the probability values on the tiles. */
	int32 SelectTileFromLibrary();

	/** Get the pointer to the tile at the specified grid address. */
	ATile* GetTileFromGridAddress(int32 GridAddress) const;

	/** Get the world location for a given grid address. */
	UFUNCTION(BlueprintCallable, Category = Tile)
	FVector GetLocationFromGridAddress(int32 GridAddress) const;

	/** Get the world location for a grid address relative to another grid address. Offset between addresses is measured in tiles. */
	FVector GetLocationFromGridAddressWithOffset(int32 GridAddress, int32 XOffsetInTiles, int32 YOffsetInTiles) const;
	
	/** Get a grid address relative to another grid address. Offset between addresses is measured in tiles. */
	UFUNCTION(BlueprintCallable, Category = Tile)
	bool GetGridAddressWithOffset(int32 InitialGridAddress, int32 XOffset, int32 YOffset, int32 &ReturnGridAddress) const;
};
