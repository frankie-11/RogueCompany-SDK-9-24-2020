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

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.SetDesiredIndex
struct UWBP_SettingsEntryList_C_SetDesiredIndex_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateBack
struct UWBP_SettingsEntryList_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirmPressed
struct UWBP_SettingsEntryList_C_NavigateConfirmPressed_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.NavigateConfirm
struct UWBP_SettingsEntryList_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.GetDirtyIndex
struct UWBP_SettingsEntryList_C_GetDirtyIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnWidgetSettingsInfoSet
struct UWBP_SettingsEntryList_C_OnWidgetSettingsInfoSet_Params
{
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.Selection Made
struct UWBP_SettingsEntryList_C_Selection_Made_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.ExecuteUbergraph_WBP_SettingsEntryList
struct UWBP_SettingsEntryList_C_ExecuteUbergraph_WBP_SettingsEntryList_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_SettingsEntryList.WBP_SettingsEntryList_C.OnSelection__DelegateSignature
struct UWBP_SettingsEntryList_C_OnSelection__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
