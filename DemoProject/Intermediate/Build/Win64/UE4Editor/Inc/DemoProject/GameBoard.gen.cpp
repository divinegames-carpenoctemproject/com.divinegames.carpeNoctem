// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DemoProject/Public/GameBoard.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameBoard() {}
// Cross Module References
	DEMOPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTileType();
	UPackage* Z_Construct_UPackage__Script_DemoProject();
	DEMOPROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTileAbilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEMOPROJECT_API UClass* Z_Construct_UClass_ATile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	DEMOPROJECT_API UClass* Z_Construct_UClass_AGameBoard_NoRegister();
	DEMOPROJECT_API UClass* Z_Construct_UClass_AGameBoard();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	DEMOPROJECT_API UFunction* Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset();
	DEMOPROJECT_API UFunction* Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DEMOPROJECT_API UFunction* Z_Construct_UFunction_AGameBoard_InitGameboard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
class UScriptStruct* FTileType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEMOPROJECT_API uint32 Get_Z_Construct_UScriptStruct_FTileType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileType, Z_Construct_UPackage__Script_DemoProject(), TEXT("TileType"), sizeof(FTileType), Get_Z_Construct_UScriptStruct_FTileType_Hash());
	}
	return Singleton;
}
template<> DEMOPROJECT_API UScriptStruct* StaticStruct<FTileType>()
{
	return FTileType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTileType(FTileType::StaticStruct, TEXT("/Script/DemoProject"), TEXT("TileType"), false, nullptr, nullptr);
static struct FScriptStruct_DemoProject_StaticRegisterNativesFTileType
{
	FScriptStruct_DemoProject_StaticRegisterNativesFTileType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TileType")),new UScriptStruct::TCppStructOps<FTileType>);
	}
} ScriptStruct_DemoProject_StaticRegisterNativesFTileType;
	struct Z_Construct_UScriptStruct_FTileType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Abilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TileMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Probability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Abilities_MetaData[] = {
		{ "Category", "TileType" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Abilities = { "Abilities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTileType, Abilities), Z_Construct_UScriptStruct_FTileAbilities, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Abilities_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Abilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_EffectColor_MetaData[] = {
		{ "Category", "TileType" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_EffectColor = { "EffectColor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTileType, EffectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_EffectColor_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_EffectColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileClass_MetaData[] = {
		{ "Category", "TileType" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileClass = { "TileClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTileType, TileClass), Z_Construct_UClass_ATile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileClass_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileMaterial_MetaData[] = {
		{ "Category", "TileType" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileMaterial = { "TileMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTileType, TileMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileMaterial_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Probability_MetaData[] = {
		{ "Category", "TileType" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTileType, Probability), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Probability_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Probability_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Abilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_EffectColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_TileMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileType_Statics::NewProp_Probability,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
		nullptr,
		&NewStructOps,
		"TileType",
		sizeof(FTileType),
		alignof(FTileType),
		Z_Construct_UScriptStruct_FTileType_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileType_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FTileType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTileType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DemoProject();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TileType"), sizeof(FTileType), Get_Z_Construct_UScriptStruct_FTileType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTileType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTileType_Hash() { return 1586457589U; }
	void AGameBoard::StaticRegisterNativesAGameBoard()
	{
		UClass* Class = AGameBoard::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGridAddressWithOffset", &AGameBoard::execGetGridAddressWithOffset },
			{ "GetLocationFromGridAddress", &AGameBoard::execGetLocationFromGridAddress },
			{ "InitGameboard", &AGameBoard::execInitGameboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics
	{
		struct GameBoard_eventGetGridAddressWithOffset_Parms
		{
			int32 InitialGridAddress;
			int32 XOffset;
			int32 YOffset;
			int32 ReturnGridAddress;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnGridAddress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_YOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_XOffset;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InitialGridAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameBoard_eventGetGridAddressWithOffset_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameBoard_eventGetGridAddressWithOffset_Parms), &Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_ReturnGridAddress = { "ReturnGridAddress", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameBoard_eventGetGridAddressWithOffset_Parms, ReturnGridAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_YOffset = { "YOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameBoard_eventGetGridAddressWithOffset_Parms, YOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_XOffset = { "XOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameBoard_eventGetGridAddressWithOffset_Parms, XOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_InitialGridAddress = { "InitialGridAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameBoard_eventGetGridAddressWithOffset_Parms, InitialGridAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_ReturnGridAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_YOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_XOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::NewProp_InitialGridAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
		{ "ToolTip", "Get a grid address relative to another grid address. Offset between addresses is measured in tiles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameBoard, nullptr, "GetGridAddressWithOffset", sizeof(GameBoard_eventGetGridAddressWithOffset_Parms), Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics
	{
		struct GameBoard_eventGetLocationFromGridAddress_Parms
		{
			int32 GridAddress;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GridAddress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameBoard_eventGetLocationFromGridAddress_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::NewProp_GridAddress = { "GridAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameBoard_eventGetLocationFromGridAddress_Parms, GridAddress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::NewProp_GridAddress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
		{ "ToolTip", "Get the world location for a given grid address." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameBoard, nullptr, "GetLocationFromGridAddress", sizeof(GameBoard_eventGetLocationFromGridAddress_Parms), Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGameBoard_InitGameboard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameBoard_InitGameboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
		{ "ToolTip", "Initialize the tiles on the grid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameBoard_InitGameboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameBoard, nullptr, "InitGameboard", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGameBoard_InitGameboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGameBoard_InitGameboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGameBoard_InitGameboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGameBoard_InitGameboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGameBoard_NoRegister()
	{
		return AGameBoard::StaticClass();
	}
	struct Z_Construct_UClass_AGameBoard_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameboardHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameboardHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameboardWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameboardWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumRunLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinimumRunLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TileLibrary;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TileLibrary_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameTiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameTiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameBoard_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DemoProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameBoard_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameBoard_GetGridAddressWithOffset, "GetGridAddressWithOffset" }, // 3187729309
		{ &Z_Construct_UFunction_AGameBoard_GetLocationFromGridAddress, "GetLocationFromGridAddress" }, // 224880683
		{ &Z_Construct_UFunction_AGameBoard_InitGameboard, "InitGameboard" }, // 473548429
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBoard_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameBoard.h" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardHeight_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
		{ "ToolTip", "The height of the grid." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardHeight = { "GameboardHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameBoard, GameboardHeight), METADATA_PARAMS(Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardWidth_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
		{ "ToolTip", "The width of the grid. Needed to calculate tile positions and neighbors." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardWidth = { "GameboardWidth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameBoard, GameboardWidth), METADATA_PARAMS(Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBoard_Statics::NewProp_MinimumRunLength_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
		{ "ToolTip", "Minimum number of matching tiles in a row needed to score." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_MinimumRunLength = { "MinimumRunLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameBoard, MinimumRunLength), METADATA_PARAMS(Z_Construct_UClass_AGameBoard_Statics::NewProp_MinimumRunLength_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::NewProp_MinimumRunLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBoard_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Tile" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
		{ "ToolTip", "The size of a space on the grid. Does not include borders or spacing between tiles." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameBoard, TileSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AGameBoard_Statics::NewProp_TileSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBoard_Statics::NewProp_TileLibrary_MetaData[] = {
		{ "Category", "GameBoard" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_TileLibrary = { "TileLibrary", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameBoard, TileLibrary), METADATA_PARAMS(Z_Construct_UClass_AGameBoard_Statics::NewProp_TileLibrary_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::NewProp_TileLibrary_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_TileLibrary_Inner = { "TileLibrary", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTileType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBoard_Statics::NewProp_GameTiles_MetaData[] = {
		{ "Category", "GameBoard" },
		{ "ModuleRelativePath", "Public/GameBoard.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_GameTiles = { "GameTiles", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameBoard, GameTiles), METADATA_PARAMS(Z_Construct_UClass_AGameBoard_Statics::NewProp_GameTiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::NewProp_GameTiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameBoard_Statics::NewProp_GameTiles_Inner = { "GameTiles", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameBoard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_GameboardWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_MinimumRunLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_TileSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_TileLibrary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_TileLibrary_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_GameTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBoard_Statics::NewProp_GameTiles_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameBoard_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameBoard>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameBoard_Statics::ClassParams = {
		&AGameBoard::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameBoard_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGameBoard_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGameBoard_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameBoard()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameBoard_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameBoard, 647231410);
	template<> DEMOPROJECT_API UClass* StaticClass<AGameBoard>()
	{
		return AGameBoard::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameBoard(Z_Construct_UClass_AGameBoard, &AGameBoard::StaticClass, TEXT("/Script/DemoProject"), TEXT("AGameBoard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameBoard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
