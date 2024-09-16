// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThumbnailToTextureTool/Public/ThumbnailToTextureSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThumbnailToTextureSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
THUMBNAILTOTEXTURETOOL_API UClass* Z_Construct_UClass_UThumbnailToTextureSettings();
THUMBNAILTOTEXTURETOOL_API UClass* Z_Construct_UClass_UThumbnailToTextureSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_ThumbnailToTextureTool();
// End Cross Module References

// Begin Class UThumbnailToTextureSettings
void UThumbnailToTextureSettings::StaticRegisterNativesUThumbnailToTextureSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UThumbnailToTextureSettings);
UClass* Z_Construct_UClass_UThumbnailToTextureSettings_NoRegister()
{
	return UThumbnailToTextureSettings::StaticClass();
}
struct Z_Construct_UClass_UThumbnailToTextureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ThumbnailToTextureSettings.h" },
		{ "ModuleRelativePath", "Public/ThumbnailToTextureSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTexture2DSaveDir_MetaData[] = {
		{ "Category", "Thumbnail To Texture Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The root of the directory in which to save the exported Texture2Ds. */" },
#endif
		{ "ContentDir", "" },
		{ "DisplayName", "Root Texture 2D Save Directory" },
		{ "ModuleRelativePath", "Public/ThumbnailToTextureSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The root of the directory in which to save the exported Texture2Ds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailPrefix_MetaData[] = {
		{ "Category", "Thumbnail To Texture Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The Prefix to append to the name of the exported Texture2Ds\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ThumbnailToTextureSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Prefix to append to the name of the exported Texture2Ds" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RootTexture2DSaveDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ThumbnailPrefix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UThumbnailToTextureSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UThumbnailToTextureSettings_Statics::NewProp_RootTexture2DSaveDir = { "RootTexture2DSaveDir", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThumbnailToTextureSettings, RootTexture2DSaveDir), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTexture2DSaveDir_MetaData), NewProp_RootTexture2DSaveDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UThumbnailToTextureSettings_Statics::NewProp_ThumbnailPrefix = { "ThumbnailPrefix", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UThumbnailToTextureSettings, ThumbnailPrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailPrefix_MetaData), NewProp_ThumbnailPrefix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UThumbnailToTextureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailToTextureSettings_Statics::NewProp_RootTexture2DSaveDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UThumbnailToTextureSettings_Statics::NewProp_ThumbnailPrefix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailToTextureSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UThumbnailToTextureSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ThumbnailToTextureTool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailToTextureSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UThumbnailToTextureSettings_Statics::ClassParams = {
	&UThumbnailToTextureSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UThumbnailToTextureSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailToTextureSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UThumbnailToTextureSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UThumbnailToTextureSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UThumbnailToTextureSettings()
{
	if (!Z_Registration_Info_UClass_UThumbnailToTextureSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UThumbnailToTextureSettings.OuterSingleton, Z_Construct_UClass_UThumbnailToTextureSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UThumbnailToTextureSettings.OuterSingleton;
}
template<> THUMBNAILTOTEXTURETOOL_API UClass* StaticClass<UThumbnailToTextureSettings>()
{
	return UThumbnailToTextureSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UThumbnailToTextureSettings);
UThumbnailToTextureSettings::~UThumbnailToTextureSettings() {}
// End Class UThumbnailToTextureSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_TPProject_Plugins_ThumbnailToTexture_Source_ThumbnailToTextureTool_Public_ThumbnailToTextureSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UThumbnailToTextureSettings, UThumbnailToTextureSettings::StaticClass, TEXT("UThumbnailToTextureSettings"), &Z_Registration_Info_UClass_UThumbnailToTextureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UThumbnailToTextureSettings), 4232317466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TPProject_Plugins_ThumbnailToTexture_Source_ThumbnailToTextureTool_Public_ThumbnailToTextureSettings_h_2339477362(TEXT("/Script/ThumbnailToTextureTool"),
	Z_CompiledInDeferFile_FID_TPProject_Plugins_ThumbnailToTexture_Source_ThumbnailToTextureTool_Public_ThumbnailToTextureSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TPProject_Plugins_ThumbnailToTexture_Source_ThumbnailToTextureTool_Public_ThumbnailToTextureSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
