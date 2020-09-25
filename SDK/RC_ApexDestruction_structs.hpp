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

// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ApexDestruction.FractureMaterial
// 0x0024
struct FFractureMaterial
{
	struct FVector2D                                   UVScale;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UVOffset;                                                 // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UAngle;                                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InteriorElementIndex;                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// 0x0004
struct FDestructibleChunkParameters
{
	unsigned char                                      bIsSupportChunk;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoNotFracture;                                           // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoNotDamage;                                             // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDoNotCrumble;                                            // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// 0x001C
struct FDestructibleDamageParameters
{
	float                                              DamageThreshold;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageSpread;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableImpactDamage;                                      // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactDamage;                                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DefaultImpactDamageDepth;                                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bCustomImpactResistance;                                  // 0x0014(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactResistance;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// 0x002C
struct FDestructibleDebrisParameters
{
	float                                              DebrisLifetimeMin;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisLifetimeMax;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMin;                                   // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DebrisMaxSeparationMax;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBox                                        ValidBounds;                                              // 0x0010(0x001C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// 0x0010
struct FDestructibleAdvancedParameters
{
	float                                              DamageCap;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ImpactVelocityThreshold;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxChunkSpeed;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FractureImpulseScale;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// 0x0014
struct FDestructibleSpecialHierarchyDepths
{
	int                                                SupportDepth;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MinimumFractureDepth;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bEnableDebris;                                            // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DebrisDepth;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                EssentialDepth;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// 0x0001
struct FDestructibleDepthParameters
{
	TEnumAsByte<EImpactDamageOverride>                 ImpactDamageOverride;                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// 0x0004
struct FDestructibleParametersFlag
{
	unsigned char                                      bAccumulateDamage : 1;                                    // 0x0000(0x0001) (Edit BITFIELD: 0101)
	unsigned char                                      bAssetDefinedSupport : 1;                                 // 0x0000(0x0001) (Edit BITFIELD: 0202)
	unsigned char                                      bWorldSupport : 1;                                        // 0x0000(0x0001) (Edit BITFIELD: 0404)
	unsigned char                                      bDebrisTimeout : 1;                                       // 0x0000(0x0001) (Edit BITFIELD: 0808)
	unsigned char                                      bDebrisMaxSeparation : 1;                                 // 0x0000(0x0001) (Edit BITFIELD: 1010)
	unsigned char                                      bCrumbleSmallestChunks : 1;                               // 0x0000(0x0001) (Edit BITFIELD: 2020)
	unsigned char                                      bAccurateRaycasts : 1;                                    // 0x0000(0x0001) (Edit BITFIELD: 4040)
	unsigned char                                      bUseValidBounds : 1;                                      // 0x0000(0x0001) (Edit BITFIELD: 8080)
	unsigned char                                      bFormExtendedStructures : 1;                              // 0x0001(0x0001) (Edit BITFIELD: 0101)
};

// ScriptStruct ApexDestruction.DestructibleParameters
// 0x0088
struct FDestructibleParameters
{
	struct FDestructibleDamageParameters               DamageParameters;                                         // 0x0000(0x001C) (Edit)
	struct FDestructibleDebrisParameters               DebrisParameters;                                         // 0x001C(0x002C) (Edit)
	struct FDestructibleAdvancedParameters             AdvancedParameters;                                       // 0x0048(0x0010) (Edit)
	struct FDestructibleSpecialHierarchyDepths         SpecialHierarchyDepths;                                   // 0x0058(0x0014) (Edit)
	TArray<struct FDestructibleDepthParameters>        DepthParameters;                                          // 0x0070(0x0010) (Edit, EditFixedSize, ZeroConstructor)
	struct FDestructibleParametersFlag                 Flags;                                                    // 0x0080(0x0004) (Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
