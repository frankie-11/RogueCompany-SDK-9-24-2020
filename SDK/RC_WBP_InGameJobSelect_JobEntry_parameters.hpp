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

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.TryToPlayAnim
struct UWBP_InGameJobSelect_JobEntry_C_TryToPlayAnim_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.CanSelect
struct UWBP_InGameJobSelect_JobEntry_C_CanSelect_Params
{
	bool                                               CanSelect;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.CreateDesatMaterial
struct UWBP_InGameJobSelect_JobEntry_C_CreateDesatMaterial_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.Update Job Entry
struct UWBP_InGameJobSelect_JobEntry_C_Update_Job_Entry_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.NavigateConfirm
struct UWBP_InGameJobSelect_JobEntry_C_NavigateConfirm_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.PopulateJobEntrySlot
struct UWBP_InGameJobSelect_JobEntry_C_PopulateJobEntrySlot_Params
{
	class UJobSelectionEntryDetails**                  JobDetails;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadConfirm
struct UWBP_InGameJobSelect_JobEntry_C_GamepadConfirm_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UWBP_InGameJobSelect_JobEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UWBP_InGameJobSelect_JobEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadHover
struct UWBP_InGameJobSelect_JobEntry_C_GamepadHover_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.GamepadUnhover
struct UWBP_InGameJobSelect_JobEntry_C_GamepadUnhover_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UWBP_InGameJobSelect_JobEntry_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.SetHoverState
struct UWBP_InGameJobSelect_JobEntry_C_SetHoverState_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.SetUnhoverState
struct UWBP_InGameJobSelect_JobEntry_C_SetUnhoverState_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnInitialized
struct UWBP_InGameJobSelect_JobEntry_C_OnInitialized_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.ExecuteUbergraph_WBP_InGameJobSelect_JobEntry
struct UWBP_InGameJobSelect_JobEntry_C_ExecuteUbergraph_WBP_InGameJobSelect_JobEntry_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnUnhovered__DelegateSignature
struct UWBP_InGameJobSelect_JobEntry_C_OnUnhovered__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnHovered__DelegateSignature
struct UWBP_InGameJobSelect_JobEntry_C_OnHovered__DelegateSignature_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect_JobEntry.WBP_InGameJobSelect_JobEntry_C.OnClicked__DelegateSignature
struct UWBP_InGameJobSelect_JobEntry_C_OnClicked__DelegateSignature_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
