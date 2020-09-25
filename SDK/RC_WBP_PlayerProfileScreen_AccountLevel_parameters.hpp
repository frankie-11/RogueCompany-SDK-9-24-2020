#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.UpdateProgressBar
struct UWBP_PlayerProfileScreen_AccountLevel_C_UpdateProgressBar_Params
{
	float*                                             Perc;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.RefreshStats
struct UWBP_PlayerProfileScreen_AccountLevel_C_RefreshStats_Params
{
};

// Function WBP_PlayerProfileScreen_AccountLevel.WBP_PlayerProfileScreen_AccountLevel_C.OnActivityInstanceChanged__DelegateSignature
struct UWBP_PlayerProfileScreen_AccountLevel_C_OnActivityInstanceChanged__DelegateSignature_Params
{
	bool*                                              IsLoaded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
