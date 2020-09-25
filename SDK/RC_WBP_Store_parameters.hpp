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

// Function WBP_Store.WBP_Store_C.GetKSStoreItemHelper
struct UWBP_Store_C_GetKSStoreItemHelper_Params
{
	class UKSStoreItemHelper*                          StoreItemHelper;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Store.WBP_Store_C.GotoPendingSection
struct UWBP_Store_C_GotoPendingSection_Params
{
};

// Function WBP_Store.WBP_Store_C.OnKeyDown
struct UWBP_Store_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Store.WBP_Store_C.OnPrevSection
struct UWBP_Store_C_OnPrevSection_Params
{
};

// Function WBP_Store.WBP_Store_C.OnNextSection
struct UWBP_Store_C_OnNextSection_Params
{
};

// Function WBP_Store.WBP_Store_C.OnStoreSectionSelected
struct UWBP_Store_C_OnStoreSectionSelected_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Store.WBP_Store_C.AddSectionsToStore
struct UWBP_Store_C_AddSectionsToStore_Params
{
	TArray<class UKSStoreSection*>                     StoreSection;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_Store.WBP_Store_C.NavigateBack
struct UWBP_Store_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Store.WBP_Store_C.PopulateStore
struct UWBP_Store_C_PopulateStore_Params
{
};

// Function WBP_Store.WBP_Store_C.OnVendorsReceived
struct UWBP_Store_C_OnVendorsReceived_Params
{
	int*                                               GroupId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<int>*                                       VendorIds;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_Store.WBP_Store_C.InitializeWidget
struct UWBP_Store_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Store.WBP_Store_C.OnBackPrompt
struct UWBP_Store_C_OnBackPrompt_Params
{
};

// Function WBP_Store.WBP_Store_C.InitializeWidgetNavigation
struct UWBP_Store_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Store.WBP_Store_C.OnShown
struct UWBP_Store_C_OnShown_Params
{
};

// Function WBP_Store.WBP_Store_C.OnHide
struct UWBP_Store_C_OnHide_Params
{
};

// Function WBP_Store.WBP_Store_C.OnOpenCodeRedeem
struct UWBP_Store_C_OnOpenCodeRedeem_Params
{
};

// Function WBP_Store.WBP_Store_C.FocusGroupNavigateLeftFailure
struct UWBP_Store_C_FocusGroupNavigateLeftFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Store.WBP_Store_C.FocusGroupNavigateRightFailure
struct UWBP_Store_C_FocusGroupNavigateRightFailure_Params
{
	int*                                               FocusGroup;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Store.WBP_Store_C.ExecuteUbergraph_WBP_Store
struct UWBP_Store_C_ExecuteUbergraph_WBP_Store_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
