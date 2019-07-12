// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMOPROJECT_Tile_generated_h
#error "Tile.generated.h already included, missing '#pragma once' in Tile.h"
#endif
#define DEMOPROJECT_Tile_generated_h

#define DemoProject_Source_DemoProject_Public_Tile_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileAbilities_Statics; \
	DEMOPROJECT_API static class UScriptStruct* StaticStruct();


template<> DEMOPROJECT_API UScriptStruct* StaticStruct<struct FTileAbilities>();

#define DemoProject_Source_DemoProject_Public_Tile_h_51_RPC_WRAPPERS
#define DemoProject_Source_DemoProject_Public_Tile_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define DemoProject_Source_DemoProject_Public_Tile_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define DemoProject_Source_DemoProject_Public_Tile_h_51_INCLASS \
private: \
	static void StaticRegisterNativesATile(); \
	friend struct Z_Construct_UClass_ATile_Statics; \
public: \
	DECLARE_CLASS(ATile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(ATile)


#define DemoProject_Source_DemoProject_Public_Tile_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public:


#define DemoProject_Source_DemoProject_Public_Tile_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATile(ATile&&); \
	NO_API ATile(const ATile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATile)


#define DemoProject_Source_DemoProject_Public_Tile_h_51_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GridAddress() { return STRUCT_OFFSET(ATile, GridAddress); }


#define DemoProject_Source_DemoProject_Public_Tile_h_48_PROLOG
#define DemoProject_Source_DemoProject_Public_Tile_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_Public_Tile_h_51_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_Public_Tile_h_51_RPC_WRAPPERS \
	DemoProject_Source_DemoProject_Public_Tile_h_51_INCLASS \
	DemoProject_Source_DemoProject_Public_Tile_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemoProject_Source_DemoProject_Public_Tile_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_Public_Tile_h_51_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_Public_Tile_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_Public_Tile_h_51_INCLASS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_Public_Tile_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOPROJECT_API UClass* StaticClass<class ATile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemoProject_Source_DemoProject_Public_Tile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
