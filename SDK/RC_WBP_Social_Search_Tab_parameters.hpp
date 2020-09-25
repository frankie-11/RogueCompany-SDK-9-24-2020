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

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearListFocus
struct UWBP_Social_Search_Tab_C_ClearListFocus_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.TryRecoverLastKnownListFocus
struct UWBP_Social_Search_Tab_C_TryRecoverLastKnownListFocus_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFirstVisibleItem
struct UWBP_Social_Search_Tab_C_GetFirstVisibleItem_Params
{
	class UKSTreeView**                                List;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UObject*                                     Item;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnKeyUp
struct UWBP_Social_Search_Tab_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.GetFocusTargets
struct UWBP_Social_Search_Tab_C_GetFocusTargets_Params
{
	TArray<class UWidget*>                             Target;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ClearSearch
struct UWBP_Social_Search_Tab_C_ClearSearch_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.HandlePlayerCardClicked
struct UWBP_Social_Search_Tab_C_HandlePlayerCardClicked_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidget
struct UWBP_Social_Search_Tab_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.UninitializeWidget
struct UWBP_Social_Search_Tab_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnHide
struct UWBP_Social_Search_Tab_C_OnHide_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
struct UWBP_Social_Search_Tab_C_BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature
struct UWBP_Social_Search_Tab_C_BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.OnInputStateChange
struct UWBP_Social_Search_Tab_C_OnInputStateChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.InitializeWidgetNavigation
struct UWBP_Social_Search_Tab_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
struct UWBP_Social_Search_Tab_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature
struct UWBP_Social_Search_Tab_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature
struct UWBP_Social_Search_Tab_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature_Params
{
	struct FText*                                      SearchTerm;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Social_Search_Tab.WBP_Social_Search_Tab_C.ExecuteUbergraph_WBP_Social_Search_Tab
struct UWBP_Social_Search_Tab_C_ExecuteUbergraph_WBP_Social_Search_Tab_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
