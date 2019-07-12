// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DEMOPROJECT_GameBoard_generated_h
#error "GameBoard.generated.h already included, missing '#pragma once' in GameBoard.h"
#endif
#define DEMOPROJECT_GameBoard_generated_h

#define DemoProject_Source_DemoProject_Public_GameBoard_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTileType_Statics; \
	DEMOPROJECT_API static class UScriptStruct* StaticStruct();


template<> DEMOPROJECT_API UScriptStruct* StaticStruct<struct FTileType>();

#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGridAddressWithOffset) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InitialGridAddress); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XOffset); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YOffset); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ReturnGridAddress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGridAddressWithOffset(Z_Param_InitialGridAddress,Z_Param_XOffset,Z_Param_YOffset,Z_Param_Out_ReturnGridAddress); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationFromGridAddress) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridAddress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationFromGridAddress(Z_Param_GridAddress); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitGameboard) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitGameboard(); \
		P_NATIVE_END; \
	}


#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGridAddressWithOffset) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_InitialGridAddress); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XOffset); \
		P_GET_PROPERTY(UIntProperty,Z_Param_YOffset); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ReturnGridAddress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetGridAddressWithOffset(Z_Param_InitialGridAddress,Z_Param_XOffset,Z_Param_YOffset,Z_Param_Out_ReturnGridAddress); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLocationFromGridAddress) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_GridAddress); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetLocationFromGridAddress(Z_Param_GridAddress); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitGameboard) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitGameboard(); \
		P_NATIVE_END; \
	}


#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameBoard(); \
	friend struct Z_Construct_UClass_AGameBoard_Statics; \
public: \
	DECLARE_CLASS(AGameBoard, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(AGameBoard)


#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_INCLASS \
private: \
	static void StaticRegisterNativesAGameBoard(); \
	friend struct Z_Construct_UClass_AGameBoard_Statics; \
public: \
	DECLARE_CLASS(AGameBoard, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DemoProject"), NO_API) \
	DECLARE_SERIALIZER(AGameBoard)


#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameBoard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameBoard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameBoard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameBoard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameBoard(AGameBoard&&); \
	NO_API AGameBoard(const AGameBoard&); \
public:


#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameBoard(AGameBoard&&); \
	NO_API AGameBoard(const AGameBoard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameBoard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameBoard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameBoard)


#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_PRIVATE_PROPERTY_OFFSET
#define DemoProject_Source_DemoProject_Public_GameBoard_h_31_PROLOG
#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_RPC_WRAPPERS \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_INCLASS \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DemoProject_Source_DemoProject_Public_GameBoard_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_PRIVATE_PROPERTY_OFFSET \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_INCLASS_NO_PURE_DECLS \
	DemoProject_Source_DemoProject_Public_GameBoard_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMOPROJECT_API UClass* StaticClass<class AGameBoard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DemoProject_Source_DemoProject_Public_GameBoard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
