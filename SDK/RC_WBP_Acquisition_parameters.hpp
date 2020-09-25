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

// Function WBP_Acquisition.WBP_Acquisition_C.GetJobForItem
struct UWBP_Acquisition_C_GetJobForItem_Params
{
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSJobItem*                                  Character;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.TrySetPreferredDefaultSkin
struct UWBP_Acquisition_C_TrySetPreferredDefaultSkin_Params
{
	class AKSLobbyCharacter**                          Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.SetEmote
struct UWBP_Acquisition_C_SetEmote_Params
{
	class UKSItem**                                    EmoteItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.OnGamepadItemHover
struct UWBP_Acquisition_C_OnGamepadItemHover_Params
{
	class UPUMG_StoreItem**                            Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWidget**                                  Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.DisplayStoreItem
struct UWBP_Acquisition_C_DisplayStoreItem_Params
{
	class UPUMG_StoreItem**                            StoreItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.DisplayModelOrImageForItem
struct UWBP_Acquisition_C_DisplayModelOrImageForItem_Params
{
	class UKSItem**                                    Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.SetSkinOrRogueModel
struct UWBP_Acquisition_C_SetSkinOrRogueModel_Params
{
	class UKSSkinBundle**                              SkinBundle;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.ClearModels
struct UWBP_Acquisition_C_ClearModels_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.SetAcquisitionDisplay
struct UWBP_Acquisition_C_SetAcquisitionDisplay_Params
{
	class UKSAcquisition**                             Acquistion;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.NavigateBack
struct UWBP_Acquisition_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.PreConstruct
struct UWBP_Acquisition_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidget
struct UWBP_Acquisition_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Acquisition.WBP_Acquisition_C.OnBackPrompt
struct UWBP_Acquisition_C_OnBackPrompt_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.InitializeWidgetNavigation
struct UWBP_Acquisition_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.OnShown
struct UWBP_Acquisition_C_OnShown_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.OnHide
struct UWBP_Acquisition_C_OnHide_Params
{
};

// Function WBP_Acquisition.WBP_Acquisition_C.ExecuteUbergraph_WBP_Acquisition
struct UWBP_Acquisition_C_ExecuteUbergraph_WBP_Acquisition_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
