#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum DataTableSkinsCommon.EMaterialSkinType
enum class EMaterialSkinType : uint8_t
{
	EMaterialSkinType__Material    = 0,
	EMaterialSkinType__InstanceDataMine = 1,
	EMaterialSkinType__FloatParam  = 2,
	EMaterialSkinType__VectorParam = 3,
	EMaterialSkinType__TextureParam = 4,
	EMaterialSkinType__EMaterialSkinType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DataTableSkinsCommon.DataTableInfo
// 0x0058
struct FDataTableInfo
{
	class UDataTable*                                  DataTable;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TablePriority;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagQuery                           SkinTagQuery;                                             // 0x0010(0x0048) (Edit, BlueprintVisible)
};

// ScriptStruct DataTableSkinsCommon.DynamicSkinTableMapEntry
// 0x0010
struct FDynamicSkinTableMapEntry
{
	class UDynamicSkinTable*                           Table;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.HardAssetTableRow
// 0x0090 (0x0098 - 0x0008)
struct FHardAssetTableRow : public FTableRowBase
{
	class UAnimationAsset*                             AnimationAsset;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AudioEvent;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USelectiveAkAudioEvent*                      SelectiveAudioEvent;                                      // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               PhysicsAsset;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          MaterialInterface;                                        // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Texture;                                                  // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      Bool;                                                     // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameField;                                                // 0x0074(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1C];                                      // 0x007C(0x001C) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.CachedRowsEntry
// 0x00A0
struct FCachedRowsEntry
{
	int                                                Priority;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FHardAssetTableRow                          Row;                                                      // 0x0008(0x0098)
};

// ScriptStruct DataTableSkinsCommon.SoftAssetTableRow
// 0x01D0 (0x01D8 - 0x0008)
struct FSoftAssetTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.AnimationAsset
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.AudioEvent
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.SelectiveAudioEvent
	unsigned char                                      UnknownData03[0x28];                                      // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.SkeletalMesh
	unsigned char                                      UnknownData04[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.PhysicsAsset
	unsigned char                                      UnknownData05[0x28];                                      // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.StaticMesh
	unsigned char                                      UnknownData06[0x28];                                      // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.ParticleSystem
	unsigned char                                      UnknownData07[0x28];                                      // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.MaterialInterface
	unsigned char                                      UnknownData08[0x28];                                      // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty DataTableSkinsCommon.SoftAssetTableRow.Texture
	unsigned char                                      UnknownData09[0x28];                                      // 0x0170(0x0028) UNKNOWN PROPERTY: SoftClassProperty DataTableSkinsCommon.SoftAssetTableRow.Class
	unsigned char                                      Bool;                                                     // 0x0198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                LinearColor;                                              // 0x01A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Int;                                                      // 0x01B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameField;                                                // 0x01B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1C];                                      // 0x01BC(0x001C) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.MaterialSkinInfo
// 0x001C
struct FMaterialSkinInfo
{
	struct FName                                       Prefix;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MaterialSlot;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	EMaterialSkinType                                  SkinType;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ParamName;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bValid;                                                   // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct DataTableSkinsCommon.SkinUpdateTickFunction
// 0x0008 (0x0030 - 0x0028)
struct FSkinUpdateTickFunction : public FTickFunction
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
