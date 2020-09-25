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

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstItem
struct UWBP_Social_Friends_Tab_C_FocusFirstItem_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.TryGetFirstItemForCategory
struct UWBP_Social_Friends_Tab_C_TryGetFirstItemForCategory_Params
{
	EKSSocialOverlaySection*                           Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSPlayerInfo*                               Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FindFirstOnlinePlayerOrDefault
struct UWBP_Social_Friends_Tab_C_FindFirstOnlinePlayerOrDefault_Params
{
	class UObject*                                     Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.FocusFirstOnlinePlayer
struct UWBP_Social_Friends_Tab_C_FocusFirstOnlinePlayer_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnFocusReceived
struct UWBP_Social_Friends_Tab_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.HandleItemClicked
struct UWBP_Social_Friends_Tab_C_HandleItemClicked_Params
{
	class UObject**                                    Item;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.NavigateConfirm
struct UWBP_Social_Friends_Tab_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.GetFocusTarget
struct UWBP_Social_Friends_Tab_C_GetFocusTarget_Params
{
	class UWidget*                                     Target;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidget
struct UWBP_Social_Friends_Tab_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.UninitializeWidget
struct UWBP_Social_Friends_Tab_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature
struct UWBP_Social_Friends_Tab_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsHovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnShown
struct UWBP_Social_Friends_Tab_C_OnShown_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
struct UWBP_Social_Friends_Tab_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.OnInputStateChanged
struct UWBP_Social_Friends_Tab_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.InitializeWidgetNavigation
struct UWBP_Social_Friends_Tab_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C.ExecuteUbergraph_WBP_Social_Friends_Tab
struct UWBP_Social_Friends_Tab_C_ExecuteUbergraph_WBP_Social_Friends_Tab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
