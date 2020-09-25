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

// Function WBP_Loadout.WBP_Loadout_C.OnPerkClicked
struct UWBP_Loadout_C_OnPerkClicked_Params
{
	class UKSItem**                                    PerkItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.OnPerkSectionClicked
struct UWBP_Loadout_C_OnPerkSectionClicked_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.OnLoadoutClicked
struct UWBP_Loadout_C_OnLoadoutClicked_Params
{
	class UKSItem**                                    LoadoutItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWBP_LoadoutButton_C**                       LoadoutButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.SelectPerk
struct UWBP_Loadout_C_SelectPerk_Params
{
	class UKSItem**                                    PerkItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShouldUpdate;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.NavigateBack
struct UWBP_Loadout_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.OnKeyDown
struct UWBP_Loadout_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_Loadout.WBP_Loadout_C.HandleInputModeChanged
struct UWBP_Loadout_C_HandleInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.PopulateStatsPanel
struct UWBP_Loadout_C_PopulateStatsPanel_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.SetCurrentIndex
struct UWBP_Loadout_C_SetCurrentIndex_Params
{
	int*                                               SelectedTier;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.CreateWidgetArrays
struct UWBP_Loadout_C_CreateWidgetArrays_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.SwapToItemDisplay
struct UWBP_Loadout_C_SwapToItemDisplay_Params
{
	class UKSItem**                                    ItemSelected;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              ShouldSwap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.Swap to Perk Display
struct UWBP_Loadout_C_Swap_to_Perk_Display_Params
{
	bool*                                              ShouldSwap;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.PopulatePerkButtons
struct UWBP_Loadout_C_PopulatePerkButtons_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.PopulateItemDetails
struct UWBP_Loadout_C_PopulateItemDetails_Params
{
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.PopulateRogueDetails
struct UWBP_Loadout_C_PopulateRogueDetails_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.PopulateLoadout
struct UWBP_Loadout_C_PopulateLoadout_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.PreConstruct
struct UWBP_Loadout_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.Construct
struct UWBP_Loadout_C_Construct_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.OnShown
struct UWBP_Loadout_C_OnShown_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.InitializeWidget
struct UWBP_Loadout_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Loadout.WBP_Loadout_C.OnBackPrompt
struct UWBP_Loadout_C_OnBackPrompt_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.InitializeWidgetNavigation
struct UWBP_Loadout_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Loadout.WBP_Loadout_C.ExecuteUbergraph_WBP_Loadout
struct UWBP_Loadout_C_ExecuteUbergraph_WBP_Loadout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
