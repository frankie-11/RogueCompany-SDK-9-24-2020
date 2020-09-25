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

// Function GadgetElementWrapper.GadgetElementWrapper_C.Set Jammed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Jammed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetElementWrapper_C::Set_Jammed(bool* Is_Jammed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.Set Jammed");

	UGadgetElementWrapper_C_Set_Jammed_Params params;
	params.Is_Jammed = Is_Jammed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetElementWrapper_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.InitializeWidget");

	UGadgetElementWrapper_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UGadgetElementWrapper_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.PostSetPawn");

	UGadgetElementWrapper_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.OnWeaponInventoryChanged
// (BlueprintCallable, BlueprintEvent)

void UGadgetElementWrapper_C::OnWeaponInventoryChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.OnWeaponInventoryChanged");

	UGadgetElementWrapper_C_OnWeaponInventoryChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.GadgetSwapped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSCharacter**           EquipmentOwner                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponComponent**     Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UGadgetElementWrapper_C::GadgetSwapped(class AKSCharacter** EquipmentOwner, class UKSWeaponComponent** Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.GadgetSwapped");

	UGadgetElementWrapper_C_GadgetSwapped_Params params;
	params.EquipmentOwner = EquipmentOwner;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetElementWrapper.GadgetElementWrapper_C.ExecuteUbergraph_GadgetElementWrapper
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetElementWrapper_C::ExecuteUbergraph_GadgetElementWrapper(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetElementWrapper.GadgetElementWrapper_C.ExecuteUbergraph_GadgetElementWrapper");

	UGadgetElementWrapper_C_ExecuteUbergraph_GadgetElementWrapper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
