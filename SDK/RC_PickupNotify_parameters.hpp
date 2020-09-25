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

// Function PickupNotify.PickupNotify_C.Should Show Interaction
struct UPickupNotify_C_Should_Show_Interaction_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.IsBombDropInteraction
struct UPickupNotify_C_IsBombDropInteraction_Params
{
	class AActor**                                     Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.BindInteractAction
struct UPickupNotify_C_BindInteractAction_Params
{
};

// Function PickupNotify.PickupNotify_C.UnBindInteractAction
struct UPickupNotify_C_UnBindInteractAction_Params
{
};

// Function PickupNotify.PickupNotify_C.SetItemIcon
struct UPickupNotify_C_SetItemIcon_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.DisplayTimeRemaining
struct UPickupNotify_C_DisplayTimeRemaining_Params
{
	float*                                             Seconds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.OnSkydiveEarlyOutChanged
struct UPickupNotify_C_OnSkydiveEarlyOutChanged_Params
{
	bool*                                              CanRemove;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.Bind_PostButtonText
struct UPickupNotify_C_Bind_PostButtonText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickupNotify.PickupNotify_C.GetSplitPrompt
struct UPickupNotify_C_GetSplitPrompt_Params
{
	struct FString                                     PreSplit;                                                 // (Parm, OutParm, ZeroConstructor)
	struct FString                                     PostSplit;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function PickupNotify.PickupNotify_C.Bind_PreButtonText
struct UPickupNotify_C_Bind_PreButtonText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickupNotify.PickupNotify_C.Bind_RootVisibility
struct UPickupNotify_C_Bind_RootVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.OnHoveredInteractableChanged
struct UPickupNotify_C_OnHoveredInteractableChanged_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.Get Pickup Text
struct UPickupNotify_C_Get_Pickup_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PickupNotify.PickupNotify_C.PreClearPawn
struct UPickupNotify_C_PreClearPawn_Params
{
};

// Function PickupNotify.PickupNotify_C.PostSetPawn
struct UPickupNotify_C_PostSetPawn_Params
{
};

// Function PickupNotify.PickupNotify_C.InitializeWidget
struct UPickupNotify_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.ModeChange
struct UPickupNotify_C_ModeChange_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.Construct
struct UPickupNotify_C_Construct_Params
{
};

// Function PickupNotify.PickupNotify_C.HandleKillCamChange
struct UPickupNotify_C_HandleKillCamChange_Params
{
	bool*                                              Enabled;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.OnKeyBindSettingChanged
struct UPickupNotify_C_OnKeyBindSettingChanged_Params
{
	struct FName*                                      KeyBindName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.StartInteract
struct UPickupNotify_C_StartInteract_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.StartAction
struct UPickupNotify_C_StartAction_Params
{
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText*                                      Prompt;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickupNotify.PickupNotify_C.Tick
struct UPickupNotify_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PickupNotify.PickupNotify_C.end
struct UPickupNotify_C_end_Params
{
};

// Function PickupNotify.PickupNotify_C.Handle Bomb State Changed
struct UPickupNotify_C_Handle_Bomb_State_Changed_Params
{
	struct FKSNeutralBombState*                        BombState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function PickupNotify.PickupNotify_C.ExecuteUbergraph_PickupNotify
struct UPickupNotify_C_ExecuteUbergraph_PickupNotify_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
