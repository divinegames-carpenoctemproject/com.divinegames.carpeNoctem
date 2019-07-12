#pragma once
/* Tile.h */

/********************************************
	This header file is used to define
all the attributes realted to the class Tile.
*********************************************/

/* Further documentation required as we progress. */

/* Check if the header is already included */

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Tile.generated.h"


USTRUCT(BlueprintType)
struct FTileAbilities
{
	GENERATED_USTRUCT_BODY();

	bool CanExplode() { return bExplodes; }
	bool CanSwap() { return (!bPreventSwapping && !bExplodes); }

protected:
	/** Tile explodes when selected (change this!) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint32 bExplodes : 1;

	/** Tile can't be selected as part of a normal swapping move. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint32 bPreventSwapping : 1;

public:
	/** Power rating of a bomb. What this means is determined in GameMode code, and can consider what kind of bomb this is. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32 BombPower = 0;

	// Replace this when bitfields can have default member initializers
	FTileAbilities()
		: bExplodes(0)
		, bPreventSwapping(0)
	{
	}
};

UCLASS()
class DEMOPROJECT_API ATile : public AActor
{
	GENERATED_BODY()

private:
	int TLength;
	int TWidth;

public:
	UPROPERTY(BlueprintReadOnly)
	int32 TileTypeID;

	UPROPERTY(BlueprintReadOnly)
	FTileAbilities Abilities;

public:	
	// Sets default values for this actor's properties
	ATile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Location on the grid as a 1D key/value. To find neighbors, ask the grid. */
	UPROPERTY(BlueprintReadOnly, Category = Tile)
	int32 GridAddress;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetGridAddress(int32 NewLocation);
	int32 GetGridAddress() const;
};
