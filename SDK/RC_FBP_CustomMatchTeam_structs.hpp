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

// ScriptStruct FBP_CustomMatchTeam.FBP_CustomMatchTeam
// 0x0028
struct FFBP_CustomMatchTeam
{
	int                                                TeamID_7_BAB34AE24596157B7EFD959A8D453F62;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FPUMG_CustomMatchMember>             Members_3_15C42158406155E59954E2A8A801EA3D;               // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UKSWidget*>                           Widgets_11_6E324FD94AEEDB2A614F75A909EA63D9;              // 0x0018(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
