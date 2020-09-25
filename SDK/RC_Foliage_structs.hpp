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

// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform       = 0,
	EFoliageScaling__Free          = 1,
	EFoliageScaling__LockXY        = 2,
	EFoliageScaling__LockXZ        = 3,
	EFoliageScaling__LockYZ        = 4,
	EFoliageScaling__EFoliageScaling_MAX = 5
};


// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red   = 0,
	EVertexColorMaskChannel__Green = 1,
	EVertexColorMaskChannel__Blue  = 2,
	EVertexColorMaskChannel__Alpha = 3,
	EVertexColorMaskChannel__MAX_None = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX = 5
};


// Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5
};


// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	ESimulationQuery__None         = 0,
	ESimulationQuery__CollisionOverlap = 1,
	ESimulationQuery__ShadeOverlap = 2,
	ESimulationQuery__AnyOverlap   = 3,
	ESimulationQuery__ESimulationQuery_MAX = 4
};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap = 0,
	ESimulationOverlap__ShadeOverlap = 1,
	ESimulationOverlap__None       = 2,
	ESimulationOverlap__ESimulationOverlap_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Foliage.FoliageVertexColorChannelMask
// 0x000C
struct FFoliageVertexColorChannelMask
{
	unsigned char                                      UseMask : 1;                                              // 0x0000(0x0001) (Edit BITFIELD: 0101)
	float                                              MaskThreshold;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      InvertMask : 1;                                           // 0x0008(0x0001) (Edit BITFIELD: 0101)
};

// ScriptStruct Foliage.FoliageTypeObject
// 0x0020
struct FFoliageTypeObject
{
	class UObject*                                     FoliageTypeObject;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFoliageType*                                TypeInstance;                                             // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bIsAsset;                                                 // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      Type;                                                     // 0x0018(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// 0x0060
struct FProceduralFoliageInstance
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Rotation;                                                 // 0x0010(0x0010) (IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Age;                                                      // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	class UFoliageType*                                Type;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0040(0x0020) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
