#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct KickTrendProfile.KickTrendProfile
// 0x001C
struct FKickTrendProfile
{
	int                                                StartingShotIndex_2_AF3181EC472A16B774B5C98BCB67A5CA;     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumHorizontalKick_5_FEA75293411D195820D85BAB34847371; // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumHorizontalKick_7_5D06359B48B7729939CFEDA82219DF53; // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositiveHorizontalKickChance_9_2232430A494CB894D9D3A4801EBAE9DC;// 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinimumVerticalKick_11_281B33B449A60EDE39E9D3BB45D2E8D9;  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumVerticalKick_13_249E469A4B76A025ECAB59BBE18D85C9;  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PositiveVerticalKickChance_15_4B720E5249C0C55CCDE0BABD1527D8BF;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
