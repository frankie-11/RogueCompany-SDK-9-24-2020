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

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x0008
struct FMaterialQualityOverrides
{
	unsigned char                                      bDiscardQualityDuringCook;                                // 0x0000(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bEnableOverride;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bForceFullyRough;                                         // 0x0002(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bForceNonMetal;                                           // 0x0003(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bForceDisableLMDirectionality;                            // 0x0004(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bForceLQReflections;                                      // 0x0005(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bDisableMaterialNormalCalculation;                        // 0x0006(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EMobileCSMQuality                                  MobileCSMQuality;                                         // 0x0007(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
