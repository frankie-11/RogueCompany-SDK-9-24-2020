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

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.FocusFirstPlayer
struct UWBP_CustomMassInvite_C_FocusFirstPlayer_Params
{
	class UKSTreeView**                                TreeView;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemClicked
struct UWBP_CustomMassInvite_C_List_HandleItemClicked_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSTreeView**                                OwningList;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleItemInitialized
struct UWBP_CustomMassInvite_C_List_HandleItemInitialized_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_HandleListItemHover
struct UWBP_CustomMassInvite_C_List_HandleListItemHover_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowLoadAnimImpl
struct UWBP_CustomMassInvite_C_ShowLoadAnimImpl_Params
{
	bool*                                              ShowLoading;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetAnimation**                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowSearchListLoading
struct UWBP_CustomMassInvite_C_ShowSearchListLoading_Params
{
	bool*                                              ShowLoading;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.HandleReceiveSearchPlayers
struct UWBP_CustomMassInvite_C_HandleReceiveSearchPlayers_Params
{
	EKSPlayerQueryError*                               Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSPlayerInfo*>*                      Matches;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.GetQueryDataFactory
struct UWBP_CustomMassInvite_C_GetQueryDataFactory_Params
{
	class UKSPlayerQueryDataFactory*                   DataFactory;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.SetTab
struct UWBP_CustomMassInvite_C_SetTab_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnKeyUp
struct UWBP_CustomMassInvite_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ShowAutoListLoading
struct UWBP_CustomMassInvite_C_ShowAutoListLoading_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnBlockerClick
struct UWBP_CustomMassInvite_C_OnBlockerClick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.List_OnGetItemChildren
struct UWBP_CustomMassInvite_C_List_OnGetItemChildren_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             Children;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.NavigateBack
struct UWBP_CustomMassInvite_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnShown
struct UWBP_CustomMassInvite_C_OnShown_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnReceivePlayers
struct UWBP_CustomMassInvite_C_OnReceivePlayers_Params
{
	TArray<class UKSPlayerInfo*>*                      Players;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidgetNavigation
struct UWBP_CustomMassInvite_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsHovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInitialized
struct UWBP_CustomMassInvite_C_OnInitialized_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationStart
struct UWBP_CustomMassInvite_C_OnLoadingAnimationStart_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingAnimationEnd
struct UWBP_CustomMassInvite_C_OnLoadingAnimationEnd_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnInputStateChanged
struct UWBP_CustomMassInvite_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.InitializeWidget
struct UWBP_CustomMassInvite_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On Tab Selected__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On_Tab_Selected__DelegateSignature_Params
{
	class UWBP_subscreen_nav_tab_C**                   Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On Tab Selected__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On_Tab_Selected__DelegateSignature_Params
{
	class UWBP_subscreen_nav_tab_C**                   Tab;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature_Params
{
	struct FText*                                      SearchTerm;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnHide
struct UWBP_CustomMassInvite_C_OnHide_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchStart
struct UWBP_CustomMassInvite_C_OnLoadingSearchStart_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnLoadingSearchEnd
struct UWBP_CustomMassInvite_C_OnLoadingSearchEnd_Params
{
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature_Params
{
	class UObject**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsHovered;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature
struct UWBP_CustomMassInvite_C_BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.ExecuteUbergraph_WBP_CustomMassInvite
struct UWBP_CustomMassInvite_C_ExecuteUbergraph_WBP_CustomMassInvite_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_CustomMassInvite.WBP_CustomMassInvite_C.OnSelect__DelegateSignature
struct UWBP_CustomMassInvite_C_OnSelect__DelegateSignature_Params
{
	class UKSPlayerInfo**                              playerinfo;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
