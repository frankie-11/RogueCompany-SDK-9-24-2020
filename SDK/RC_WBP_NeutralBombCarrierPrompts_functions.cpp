// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NeutralBombCarrierPrompts_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.InitializeWidget");

	UWBP_NeutralBombCarrierPrompts_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     AddedEquipment                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_NeutralBombCarrierPrompts_C::EquipmentAdded(class UKSWeaponComponent** AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentAdded");

	UWBP_NeutralBombCarrierPrompts_C_EquipmentAdded_Params params;
	params.AddedEquipment = AddedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     RemovedEquipment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_NeutralBombCarrierPrompts_C::EquipmentRemoved(class UKSWeaponComponent** RemovedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.EquipmentRemoved");

	UWBP_NeutralBombCarrierPrompts_C_EquipmentRemoved_Params params;
	params.RemovedEquipment = RemovedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Update Prompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::Update_Prompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Update Prompt");

	UWBP_NeutralBombCarrierPrompts_C_Update_Prompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PostSetPawn");

	UWBP_NeutralBombCarrierPrompts_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.PreClearPawn");

	UWBP_NeutralBombCarrierPrompts_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Interact_Start(class AActor** Target, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact Start");

	UWBP_NeutralBombCarrierPrompts_C_Handle_Interact_Start_Params params;
	params.Target = Target;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact End
// (BlueprintCallable, BlueprintEvent)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Interact_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Interact End");

	UWBP_NeutralBombCarrierPrompts_C_Handle_Interact_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Bomb Hidden Interactable Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Bomb_Hidden_Interactable_Update(class AActor** Interactable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Bomb Hidden Interactable Update");

	UWBP_NeutralBombCarrierPrompts_C_Handle_Bomb_Hidden_Interactable_Update_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Tracked Bomb Active Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           EquipmentOwner                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponComponent**     Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_NeutralBombCarrierPrompts_C::Handle_Tracked_Bomb_Active_Changed(class AKSCharacter** EquipmentOwner, class UKSWeaponComponent** Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.Handle Tracked Bomb Active Changed");

	UWBP_NeutralBombCarrierPrompts_C_Handle_Tracked_Bomb_Active_Changed_Params params;
	params.EquipmentOwner = EquipmentOwner;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.OnRoundOver
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSGameState**           GameState                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FRoundResult*           RoundResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_NeutralBombCarrierPrompts_C::OnRoundOver(class AKSGameState** GameState, struct FRoundResult* RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.OnRoundOver");

	UWBP_NeutralBombCarrierPrompts_C_OnRoundOver_Params params;
	params.GameState = GameState;
	params.RoundResult = RoundResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.ExecuteUbergraph_WBP_NeutralBombCarrierPrompts
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NeutralBombCarrierPrompts_C::ExecuteUbergraph_WBP_NeutralBombCarrierPrompts(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NeutralBombCarrierPrompts.WBP_NeutralBombCarrierPrompts_C.ExecuteUbergraph_WBP_NeutralBombCarrierPrompts");

	UWBP_NeutralBombCarrierPrompts_C_ExecuteUbergraph_WBP_NeutralBombCarrierPrompts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
