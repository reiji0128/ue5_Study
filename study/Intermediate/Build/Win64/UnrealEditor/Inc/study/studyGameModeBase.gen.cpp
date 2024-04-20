// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "study/studyGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodestudyGameModeBase() {}
// Cross Module References
	STUDY_API UClass* Z_Construct_UClass_AstudyGameModeBase_NoRegister();
	STUDY_API UClass* Z_Construct_UClass_AstudyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_study();
// End Cross Module References
	void AstudyGameModeBase::StaticRegisterNativesAstudyGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AstudyGameModeBase);
	UClass* Z_Construct_UClass_AstudyGameModeBase_NoRegister()
	{
		return AstudyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AstudyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AstudyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_study,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AstudyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "studyGameModeBase.h" },
		{ "ModuleRelativePath", "studyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AstudyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AstudyGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AstudyGameModeBase_Statics::ClassParams = {
		&AstudyGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AstudyGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AstudyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AstudyGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AstudyGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AstudyGameModeBase.OuterSingleton, Z_Construct_UClass_AstudyGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AstudyGameModeBase.OuterSingleton;
	}
	template<> STUDY_API UClass* StaticClass<AstudyGameModeBase>()
	{
		return AstudyGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AstudyGameModeBase);
	struct Z_CompiledInDeferFile_FID_study_Source_study_studyGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_study_Source_study_studyGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AstudyGameModeBase, AstudyGameModeBase::StaticClass, TEXT("AstudyGameModeBase"), &Z_Registration_Info_UClass_AstudyGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AstudyGameModeBase), 1957781037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_study_Source_study_studyGameModeBase_h_421254765(TEXT("/Script/study"),
		Z_CompiledInDeferFile_FID_study_Source_study_studyGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_study_Source_study_studyGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
