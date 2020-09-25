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

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialItemName
struct UWBP_RadialSelect_C_SetRadialItemName_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupInputCallout
struct UWBP_RadialSelect_C_SetupInputCallout_Params
{
	class UWBP_InputCallout_C**                        InputCallout;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.IsSelectorVisible
struct UWBP_RadialSelect_C_IsSelectorVisible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowRadialMenuCycle
struct UWBP_RadialSelect_C_ShowRadialMenuCycle_Params
{
	bool*                                              Show;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetRadialItemName
struct UWBP_RadialSelect_C_GetRadialItemName_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        KSPlayerController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       RadialItemName;                                           // (Parm, OutParm)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ActivateRadialItem
struct UWBP_RadialSelect_C_ActivateRadialItem_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AKSPlayerController**                        KSPlayerController;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ActivatedItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetTextForCosmeticSlot
struct UWBP_RadialSelect_C_GetTextForCosmeticSlot_Params
{
	EMercCosmeticSlot*                                 CosmeticSlot;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetRadialMenuNames
struct UWBP_RadialSelect_C_SetRadialMenuNames_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.Get Equipped Emotes
struct UWBP_RadialSelect_C_Get_Equipped_Emotes_Params
{
	TArray<class UKSItem*>                             Equipped_Emotes;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetDeadZone
struct UWBP_RadialSelect_C_GetDeadZone_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RefreshOptions
struct UWBP_RadialSelect_C_RefreshOptions_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetOptionsCount
struct UWBP_RadialSelect_C_GetOptionsCount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.GetWheelSize
struct UWBP_RadialSelect_C_GetWheelSize_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.PreConstruct
struct UWBP_RadialSelect_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.HideSelector
struct UWBP_RadialSelect_C_HideSelector_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ShowSelector
struct UWBP_RadialSelect_C_ShowSelector_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.InitializeWidget
struct UWBP_RadialSelect_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionUnhover
struct UWBP_RadialSelect_C_RadialOptionUnhover_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionSelected
struct UWBP_RadialSelect_C_RadialOptionSelected_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.RadialOptionHovered
struct UWBP_RadialSelect_C_RadialOptionHovered_Params
{
	int*                                               Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.TraceSelectionCursor
struct UWBP_RadialSelect_C_TraceSelectionCursor_Params
{
	float*                                             Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.Handle Equipment Change
struct UWBP_RadialSelect_C_Handle_Equipment_Change_Params
{
	class AKSEquipment**                               AddedEquipment;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ChangeToNewRadialMenu
struct UWBP_RadialSelect_C_ChangeToNewRadialMenu_Params
{
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.OnCycledMenus
struct UWBP_RadialSelect_C_OnCycledMenus_Params
{
	bool*                                              bCycledRight;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.SetupForRadialWheelMode
struct UWBP_RadialSelect_C_SetupForRadialWheelMode_Params
{
	ERadialWheelMode*                                  NewRadialWheelMode;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_RadialSelect.WBP_RadialSelect_C.ExecuteUbergraph_WBP_RadialSelect
struct UWBP_RadialSelect_C_ExecuteUbergraph_WBP_RadialSelect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
