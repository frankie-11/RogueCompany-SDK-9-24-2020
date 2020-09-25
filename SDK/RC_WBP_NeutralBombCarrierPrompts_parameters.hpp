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

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.InitializeWidget
struct UWBP_NeutralBombCarrierPrompts_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentAdded
struct UWBP_NeutralBombCarrierPrompts_C_EquipmentAdded_Params
{
	class UKSWeaponComponent**                         AddedEquipment;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentRemoved
struct UWBP_NeutralBombCarrierPrompts_C_EquipmentRemoved_Params
{
	class UKSWeaponComponent**                         RemovedEquipment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Update Prompt
struct UWBP_NeutralBombCarrierPrompts_C_Update_Prompt_Params
{
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PostSetPawn
struct UWBP_NeutralBombCarrierPrompts_C_PostSetPawn_Params
{
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PreClearPawn
struct UWBP_NeutralBombCarrierPrompts_C_PreClearPawn_Params
{
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact Start
struct UWBP_NeutralBombCarrierPrompts_C_Handle_Interact_Start_Params
{
	class AActor**                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact End
struct UWBP_NeutralBombCarrierPrompts_C_Handle_Interact_End_Params
{
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Bomb Hidden Interactable Update
struct UWBP_NeutralBombCarrierPrompts_C_Handle_Bomb_Hidden_Interactable_Update_Params
{
	class AActor**                                     Interactable;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Tracked Bomb Active Changed
struct UWBP_NeutralBombCarrierPrompts_C_Handle_Tracked_Bomb_Active_Changed_Params
{
	class AKSCharacter**                               EquipmentOwner;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSWeaponComponent**                         Equipment;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.OnRoundOver
struct UWBP_NeutralBombCarrierPrompts_C_OnRoundOver_Params
{
	class AKSGameState**                               GameState;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FRoundResult*                               RoundResult;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.ExecuteUbergraph_WBP_NeutralBombCarrierPrompts
struct UWBP_NeutralBombCarrierPrompts_C_ExecuteUbergraph_WBP_NeutralBombCarrierPrompts_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
