// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemoProject/Public/Tile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTile() {}
// Cross Module References
	DEMOPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTileAbilities();
	UPackage* Z_Construct_UPackage__Script_DemoProject();
	DEMOPROJECT_API UClass* Z_Construct_UClass_ATile_NoRegister();
	DEMOPROJECT_API UClass* Z_Construct_UClass_ATile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FTileAbilities::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEMOPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FTileAbilities_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileAbilities, Z_Construct_UPackage__Script_DemoProject(), TEXT("TileAbilities"), sizeof(FTileAbilities), Get_Z_Construct_UScriptStruct_FTileAbilities_Hash());
	}
	return Singleton;
}
template<> DEMOPROJECT_API UScriptStruct* StaticStruct<FTileAbilities>()
{
	return FTileAbilities::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTileAbilities(FTileAbilities::StaticStruct, TEXT("/Script/DemoProject"), TEXT("TileAbilities"), false, nullptr, nullptr);
static struct FScriptStruct_DemoProject_StaticRegisterNativesFTileAbilities
{
	FScriptStruct_DemoProject_StaticRegisterNativesFTileAbilities()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TileAbilities")),new UScriptStruct::TCppStructOps<FTileAbilities>);
	}
} ScriptStruct_DemoProject_StaticRegisterNativesFTileAbilities;
	struct Z_Construct_UScriptStruct_FTileAbilities_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BombPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BombPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventSwapping_MetaData[];
#endif
		static void NewProp_bPreventSwapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventSwapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExplodes_MetaData[];
#endif
		static void NewProp_bExplodes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExplodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileAbilities_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileAbilities_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileAbilities>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_BombPower_MetaData[] = {
		{ "Category", "TileAbilities" },
		{ "ModuleRelativePath", "Public/Tile.h" },
		{ "ToolTip", "Power rating of a bomb. What this means is determined in GameMode code, and can consider what kind of bomb this is." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_BombPower = { "BombPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTileAbilities, BombPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_BombPower_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_BombPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bPreventSwapping_MetaData[] = {
		{ "Category", "TileAbilities" },
		{ "ModuleRelativePath", "Public/Tile.h" },
		{ "ToolTip", "Tile can't be selected as part of a normal swapping move." },
	};
#endif
	void Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bPreventSwapping_SetBit(void* Obj)
	{
		((FTileAbilities*)Obj)->bPreventSwapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bPreventSwapping = { "bPreventSwapping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTileAbilities), &Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bPreventSwapping_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bPreventSwapping_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bPreventSwapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bExplodes_MetaData[] = {
		{ "Category", "TileAbilities" },
		{ "ModuleRelativePath", "Public/Tile.h" },
		{ "ToolTip", "Tile explodes when selected (change this!)" },
	};
#endif
	void Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bExplodes_SetBit(void* Obj)
	{
		((FTileAbilities*)Obj)->bExplodes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bExplodes = { "bExplodes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FTileAbilities), &Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bExplodes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bExplodes_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bExplodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileAbilities_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_BombPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bPreventSwapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileAbilities_Statics::NewProp_bExplodes,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileAbilities_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
		nullptr,
		&NewStructOps,
		"TileAbilities",
		sizeof(FTileAbilities),
		alignof(FTileAbilities),
		Z_Construct_UScriptStruct_FTileAbilities_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTileAbilities_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileAbilities_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileAbilities_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileAbilities()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTileAbilities_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DemoProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TileAbilities"), sizeof(FTileAbilities), Get_Z_Construct_UScriptStruct_FTileAbilities_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTileAbilities_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTileAbilities_Hash() { return 2570165843U; }
	void ATile::StaticRegisterNativesATile()
	{
	}
	UClass* Z_Construct_UClass_ATile_NoRegister()
	{
		return ATile::StaticClass();
	}
	struct Z_Construct_UClass_ATile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GridAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Abilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileTypeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileTypeID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tile.h" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_GridAddress_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
		{ "ToolTip", "Location on the grid as a 1D key/value. To find neighbors, ask the grid." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_GridAddress = { "GridAddress", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, GridAddress), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_GridAddress_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_GridAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, Abilities), Z_Construct_UScriptStruct_FTileAbilities, METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_Abilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATile_Statics::NewProp_TileTypeID_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/Tile.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATile_Statics::NewProp_TileTypeID = { "TileTypeID", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATile, TileTypeID), METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::NewProp_TileTypeID_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::NewProp_TileTypeID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_GridAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATile_Statics::NewProp_TileTypeID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATile_Statics::ClassParams = {
		&ATile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATile_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATile, 1756996179);
	template<> DEMOPROJECT_API UClass* StaticClass<ATile>()
	{
		return ATile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATile(Z_Construct_UClass_ATile, &ATile::StaticClass, TEXT("/Script/DemoProject"), TEXT("ATile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
