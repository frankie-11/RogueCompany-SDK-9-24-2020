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

// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UDirectReviveDroneModInst_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ReceiveBeginPlay");

	UDirectReviveDroneModInst_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnActivation
// (Event, Protected, BlueprintEvent)

void UDirectReviveDroneModInst_C::OnActivation()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnActivation");

	UDirectReviveDroneModInst_C_OnActivation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveDroneEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// EKSReviveDroneEvent*           KSReviveDroneEvent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDirectReviveDroneModInst_C::OnReviveDroneEvent(EKSReviveDroneEvent* KSReviveDroneEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveDroneEvent");

	UDirectReviveDroneModInst_C_OnReviveDroneEvent_Params params;
	params.KSReviveDroneEvent = KSReviveDroneEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ExecuteUbergraph_DirectReviveDroneModInst
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDirectReviveDroneModInst_C::ExecuteUbergraph_DirectReviveDroneModInst(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.ExecuteUbergraph_DirectReviveDroneModInst");

	UDirectReviveDroneModInst_C_ExecuteUbergraph_DirectReviveDroneModInst_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDirectReviveDroneModInst_C::OnReviveComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveComplete__DelegateSignature");

	UDirectReviveDroneModInst_C_OnReviveComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveBegin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDirectReviveDroneModInst_C::OnReviveBegin__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnReviveBegin__DelegateSignature");

	UDirectReviveDroneModInst_C_OnReviveBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnDroneDestroy__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDirectReviveDroneModInst_C::OnDroneDestroy__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnDroneDestroy__DelegateSignature");

	UDirectReviveDroneModInst_C_OnDroneDestroy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetRevive__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDirectReviveDroneModInst_C::OnTargetRevive__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetRevive__DelegateSignature");

	UDirectReviveDroneModInst_C_OnTargetRevive__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UDirectReviveDroneModInst_C::OnTargetDeath__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function DirectReviveDroneModInst.DirectReviveDroneModInst_C.OnTargetDeath__DelegateSignature");

	UDirectReviveDroneModInst_C_OnTargetDeath__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
