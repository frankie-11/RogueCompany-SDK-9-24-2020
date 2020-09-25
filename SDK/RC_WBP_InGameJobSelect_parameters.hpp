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

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetGamepadPrompts
struct UWBP_InGameJobSelect_C_SetGamepadPrompts_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetAttackDefendMessage
struct UWBP_InGameJobSelect_C_SetAttackDefendMessage_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.HandlePhaseChange
struct UWBP_InGameJobSelect_C_HandlePhaseChange_Params
{
	struct FName*                                      NewPhaseName;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      PreviousPhaseName;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.RestoreVisualState
struct UWBP_InGameJobSelect_C_RestoreVisualState_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnInputStateChanged
struct UWBP_InGameJobSelect_C_OnInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetHoverMessage
struct UWBP_InGameJobSelect_C_SetHoverMessage_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.CanSelect
struct UWBP_InGameJobSelect_C_CanSelect_Params
{
	class UJobSelectionEntryDetails**                  JobSelectionEntry;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSelect;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnPlayerSelectionStateChanged
struct UWBP_InGameJobSelect_C_OnPlayerSelectionStateChanged_Params
{
	EPlayerSelectionState*                             SelectionState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnTimerTick
struct UWBP_InGameJobSelect_C_OnTimerTick_Params
{
	float*                                             NewTruncatedSeconds;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobEntrySelected
struct UWBP_InGameJobSelect_C_OnJobEntrySelected_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.Update Job Entry
struct UWBP_InGameJobSelect_C_Update_Job_Entry_Params
{
	class UJobSelectionEntryDetails**                  UpdatedJobEntry;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              EnemyTeam;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ClearSelectedRogue
struct UWBP_InGameJobSelect_C_ClearSelectedRogue_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.SetJobEntries
struct UWBP_InGameJobSelect_C_SetJobEntries_Params
{
	TArray<class UJobSelectionEntryDetails*>           JobEntries;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.InitializeWidget
struct UWBP_InGameJobSelect_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.PreConstruct
struct UWBP_InGameJobSelect_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobHovered
struct UWBP_InGameJobSelect_C_OnJobHovered_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobUnhovered
struct UWBP_InGameJobSelect_C_OnJobUnhovered_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnShown
struct UWBP_InGameJobSelect_C_OnShown_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWBP_InGameJobSelect_C_BndEvt__LockInBtnNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UWBP_InGameJobSelect_C_BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.ExecuteUbergraph_WBP_InGameJobSelect
struct UWBP_InGameJobSelect_C_ExecuteUbergraph_WBP_InGameJobSelect_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnCancelJobSelection__DelegateSignature
struct UWBP_InGameJobSelect_C_OnCancelJobSelection__DelegateSignature_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnViewJobLoadout__DelegateSignature
struct UWBP_InGameJobSelect_C_OnViewJobLoadout__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnLockInJob__DelegateSignature
struct UWBP_InGameJobSelect_C_OnLockInJob__DelegateSignature_Params
{
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnJobSelected__DelegateSignature
struct UWBP_InGameJobSelect_C_OnJobSelected__DelegateSignature_Params
{
	class UJobSelectionEntryDetails**                  JobEntry;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_InGameJobSelect.WBP_InGameJobSelect_C.OnResetJobEntries__DelegateSignature
struct UWBP_InGameJobSelect_C_OnResetJobEntries__DelegateSignature_Params
{
	TArray<class UWBP_InGameJobSelect_JobEntry_C*>     JobEntryButtons;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
