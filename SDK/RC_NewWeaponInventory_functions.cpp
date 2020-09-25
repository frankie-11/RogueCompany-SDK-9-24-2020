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

// Function NewWeaponInventory.NewWeaponInventory_C.HandleDeathStateChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWeaponInventory_C::HandleDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.HandleDeathStateChanged");

	UNewWeaponInventory_C_HandleDeathStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.UnbindKSCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWeaponInventory_C::UnbindKSCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.UnbindKSCharacter");

	UNewWeaponInventory_C_UnbindKSCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.BindKSCharacter
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWeaponInventory_C::BindKSCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.BindKSCharacter");

	UNewWeaponInventory_C_BindKSCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.AddGameRuleWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Game_Rule_Widget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString*                Parent_Widget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UNewWeaponInventory_C::AddGameRuleWidget(class UUserWidget** Game_Rule_Widget, struct FString* Parent_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.AddGameRuleWidget");

	UNewWeaponInventory_C_AddGameRuleWidget_Params params;
	params.Game_Rule_Widget = Game_Rule_Widget;
	params.Parent_Widget = Parent_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewWeaponInventory_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.Construct");

	UNewWeaponInventory_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.EquipmentAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     AddedEquipment                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNewWeaponInventory_C::EquipmentAdded(class UKSWeaponComponent** AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.EquipmentAdded");

	UNewWeaponInventory_C_EquipmentAdded_Params params;
	params.AddedEquipment = AddedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.EquipmentRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     RemovedEquipment               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNewWeaponInventory_C::EquipmentRemoved(class UKSWeaponComponent** RemovedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.EquipmentRemoved");

	UNewWeaponInventory_C_EquipmentRemoved_Params params;
	params.RemovedEquipment = RemovedEquipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWeaponInventory_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.InitializeWidget");

	UNewWeaponInventory_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UNewWeaponInventory_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.PostSetPawn");

	UNewWeaponInventory_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UNewWeaponInventory_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.PreClearPawn");

	UNewWeaponInventory_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Pressed
// (BlueprintCallable, BlueprintEvent)

void UNewWeaponInventory_C::Handle_Swap_Gamepad_Pressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Pressed");

	UNewWeaponInventory_C_Handle_Swap_Gamepad_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Released
// (BlueprintCallable, BlueprintEvent)

void UNewWeaponInventory_C::Handle_Swap_Gamepad_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.Handle Swap Gamepad Released");

	UNewWeaponInventory_C_Handle_Swap_Gamepad_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.SetKillCamWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn**                  ViewPawn                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWeaponInventory_C::SetKillCamWeapon(class APawn** ViewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.SetKillCamWeapon");

	UNewWeaponInventory_C_SetKillCamWeapon_Params params;
	params.ViewPawn = ViewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWeaponInventory.NewWeaponInventory_C.ExecuteUbergraph_NewWeaponInventory
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWeaponInventory_C::ExecuteUbergraph_NewWeaponInventory(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWeaponInventory.NewWeaponInventory_C.ExecuteUbergraph_NewWeaponInventory");

	UNewWeaponInventory_C_ExecuteUbergraph_NewWeaponInventory_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
