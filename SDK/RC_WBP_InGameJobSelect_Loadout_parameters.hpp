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

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerkButtons
struct UWBP_InGameJobSelect_Loadout_C_GetLoadoutPerkButtons_Params
{
	TArray<class UWBP_InGameJobSelect_Loadout_Perk_C*> PerkButtons;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerks
struct UWBP_InGameJobSelect_Loadout_C_GetLoadoutPerks_Params
{
	TArray<class UKSItem*>                             Perks;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetCurrentJobLoadoutSlotItemInfo
struct UWBP_InGameJobSelect_Loadout_C_GetCurrentJobLoadoutSlotItemInfo_Params
{
	EJobLoadoutSlot*                                   JobSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DisplayName;                                              // (Parm, OutParm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UKSItem*                                     OutKSItem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeLoadoutButtons
struct UWBP_InGameJobSelect_Loadout_C_InitializeLoadoutButtons_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateLoadoutInfo
struct UWBP_InGameJobSelect_Loadout_C_PopulateLoadoutInfo_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobInfo
struct UWBP_InGameJobSelect_Loadout_C_PopulateJobInfo_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobLoadout
struct UWBP_InGameJobSelect_Loadout_C_PopulateJobLoadout_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnLoaded_0479943548EBDC9F20CA8D8C126D74BE
struct UWBP_InGameJobSelect_Loadout_C_OnLoaded_0479943548EBDC9F20CA8D8C126D74BE_Params
{
	class UObject**                                    Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeWidget
struct UWBP_InGameJobSelect_Loadout_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnShown
struct UWBP_InGameJobSelect_Loadout_C_OnShown_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnHide
struct UWBP_InGameJobSelect_Loadout_C_OnHide_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.LoadAndPopulateFirstPassive
struct UWBP_InGameJobSelect_Loadout_C_LoadAndPopulateFirstPassive_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PreConstruct
struct UWBP_InGameJobSelect_Loadout_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_InGameJobSelect_Loadout_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout
struct UWBP_InGameJobSelect_Loadout_C_ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnNavBack__DelegateSignature
struct UWBP_InGameJobSelect_Loadout_C_OnNavBack__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnJobLockInClicked__DelegateSignature
struct UWBP_InGameJobSelect_Loadout_C_OnJobLockInClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
