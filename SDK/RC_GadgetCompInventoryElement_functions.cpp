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

// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Set Jammed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Is_Jammed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetCompInventoryElement_C::Set_Jammed(bool* Is_Jammed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Set Jammed");

	UGadgetCompInventoryElement_C_Set_Jammed_Params params;
	params.Is_Jammed = Is_Jammed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnAmmoChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           OldInClip                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldClipSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldReserve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewInClip                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewClipSize                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewReserve                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetCompInventoryElement_C::OnAmmoChanged(int* OldInClip, int* OldClipSize, int* OldReserve, int* NewInClip, int* NewClipSize, int* NewReserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnAmmoChanged");

	UGadgetCompInventoryElement_C_OnAmmoChanged_Params params;
	params.OldInClip = OldInClip;
	params.OldClipSize = OldClipSize;
	params.OldReserve = OldReserve;
	params.NewInClip = NewInClip;
	params.NewClipSize = NewClipSize;
	params.NewReserve = NewReserve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetCompInventoryElement_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.InitializeWidget");

	UGadgetCompInventoryElement_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGadgetCompInventoryElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.Construct");

	UGadgetCompInventoryElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PostSetWeaponComponent
// (Event, Protected, BlueprintEvent)

void UGadgetCompInventoryElement_C::PostSetWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PostSetWeaponComponent");

	UGadgetCompInventoryElement_C_PostSetWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PreClearWeaponComponent
// (Event, Protected, BlueprintEvent)

void UGadgetCompInventoryElement_C::PreClearWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.PreClearWeaponComponent");

	UGadgetCompInventoryElement_C_PreClearWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnBecomeActiveWeaponComponent
// (Event, Protected, BlueprintEvent)

void UGadgetCompInventoryElement_C::OnBecomeActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnBecomeActiveWeaponComponent");

	UGadgetCompInventoryElement_C_OnBecomeActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.ExecuteUbergraph_GadgetCompInventoryElement
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGadgetCompInventoryElement_C::ExecuteUbergraph_GadgetCompInventoryElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.ExecuteUbergraph_GadgetCompInventoryElement");

	UGadgetCompInventoryElement_C_ExecuteUbergraph_GadgetCompInventoryElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetRemoved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGadgetCompInventoryElement_C::OnGadgetRemoved__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetRemoved__DelegateSignature");

	UGadgetCompInventoryElement_C_OnGadgetRemoved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetAdded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGadgetCompInventoryElement_C::OnGadgetAdded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function GadgetCompInventoryElement.GadgetCompInventoryElement_C.OnGadgetAdded__DelegateSignature");

	UGadgetCompInventoryElement_C_OnGadgetAdded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
