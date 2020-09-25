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

// Function NewWeaponInventory.NewWeaponInventory_C.HandleDeathStateChanged
struct UNewWeaponInventory_C_HandleDeathStateChanged_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.UnbindKSCharacter
struct UNewWeaponInventory_C_UnbindKSCharacter_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.BindKSCharacter
struct UNewWeaponInventory_C_BindKSCharacter_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.AddGameRuleWidget
struct UNewWeaponInventory_C_AddGameRuleWidget_Params
{
	class UUserWidget**                                Game_Rule_Widget;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString*                                    Parent_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function NewWeaponInventory.NewWeaponInventory_C.Construct
struct UNewWeaponInventory_C_Construct_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.EquipmentAdded
struct UNewWeaponInventory_C_EquipmentAdded_Params
{
	class UKSWeaponComponent**                         AddedEquipment;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NewWeaponInventory.NewWeaponInventory_C.EquipmentRemoved
struct UNewWeaponInventory_C_EquipmentRemoved_Params
{
	class UKSWeaponComponent**                         RemovedEquipment;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function NewWeaponInventory.NewWeaponInventory_C.InitializeWidget
struct UNewWeaponInventory_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewWeaponInventory.NewWeaponInventory_C.PostSetPawn
struct UNewWeaponInventory_C_PostSetPawn_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.PreClearPawn
struct UNewWeaponInventory_C_PreClearPawn_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Pressed
struct UNewWeaponInventory_C_Handle_Swap_Gamepad_Pressed_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Released
struct UNewWeaponInventory_C_Handle_Swap_Gamepad_Released_Params
{
};

// Function NewWeaponInventory.NewWeaponInventory_C.SetKillCamWeapon
struct UNewWeaponInventory_C_SetKillCamWeapon_Params
{
	class APawn**                                      ViewPawn;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NewWeaponInventory.NewWeaponInventory_C.ExecuteUbergraph_NewWeaponInventory
struct UNewWeaponInventory_C_ExecuteUbergraph_NewWeaponInventory_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
