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

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHeaderUpdated
struct UWBP_Social_Accordian_Header_C_OnHeaderUpdated_Params
{
	class UKSDataSocialCategory**                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Header;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnPlayersUpdated
struct UWBP_Social_Accordian_Header_C_OnPlayersUpdated_Params
{
	class UKSDataSocialCategory**                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UKSDataSocialPlayer*>*                Players;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UpdateMessage
struct UWBP_Social_Accordian_Header_C_UpdateMessage_Params
{
	class UKSDataSocialCategory**                      Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              Processing;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetIsExpanded
struct UWBP_Social_Accordian_Header_C_GetIsExpanded_Params
{
	bool                                               Expanded;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetData
struct UWBP_Social_Accordian_Header_C_GetData_Params
{
	class UKSDataSocialCategory*                       NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetExpanded
struct UWBP_Social_Accordian_Header_C_SetExpanded_Params
{
	bool*                                              Expanded;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.GetOuterHud
struct UWBP_Social_Accordian_Header_C_GetOuterHud_Params
{
	class AKSHUDCommon*                                HUD;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.SetListItemObject
struct UWBP_Social_Accordian_Header_C_SetListItemObject_Params
{
	class UObject**                                    Object;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.Construct
struct UWBP_Social_Accordian_Header_C_Construct_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemSelectionChanged
struct UWBP_Social_Accordian_Header_C_BP_OnItemSelectionChanged_Params
{
	bool*                                              bIsSelected;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnItemExpansionChanged
struct UWBP_Social_Accordian_Header_C_BP_OnItemExpansionChanged_Params
{
	bool*                                              bIsExpanded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BP_OnEntryReleased
struct UWBP_Social_Accordian_Header_C_BP_OnEntryReleased_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnListItemObjectSet
struct UWBP_Social_Accordian_Header_C_OnListItemObjectSet_Params
{
	class UObject**                                    ListItemObject;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnHovered
struct UWBP_Social_Accordian_Header_C_OnHovered_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnUnhovered
struct UWBP_Social_Accordian_Header_C_OnUnhovered_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.InitializeWidget
struct UWBP_Social_Accordian_Header_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UninitializeWidget
struct UWBP_Social_Accordian_Header_C_UninitializeWidget_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.HandleClicked
struct UWBP_Social_Accordian_Header_C_HandleClicked_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.UnbindCategoryEvents
struct UWBP_Social_Accordian_Header_C_UnbindCategoryEvents_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.BindCategoryEvents
struct UWBP_Social_Accordian_Header_C_BindCategoryEvents_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnInputStateChange
struct UWBP_Social_Accordian_Header_C_OnInputStateChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ForceUnhover
struct UWBP_Social_Accordian_Header_C_ForceUnhover_Params
{
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.ExecuteUbergraph_WBP_Social_Accordian_Header
struct UWBP_Social_Accordian_Header_C_ExecuteUbergraph_WBP_Social_Accordian_Header_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_Social_Accordian_Header.WBP_Social_Accordian_Header_C.OnClicked__DelegateSignature
struct UWBP_Social_Accordian_Header_C_OnClicked__DelegateSignature_Params
{
	class UUserWidget**                                Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
