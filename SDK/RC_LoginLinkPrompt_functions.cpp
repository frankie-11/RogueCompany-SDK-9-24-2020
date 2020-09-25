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

// Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginLinkPrompt_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidget");

	ULoginLinkPrompt_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginLinkPrompt_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature");

	ULoginLinkPrompt_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_174_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void ULoginLinkPrompt_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.InitializeWidgetNavigation");

	ULoginLinkPrompt_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginLinkPrompt_C::BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature");

	ULoginLinkPrompt_C_BndEvt__ExistingButton_K2Node_ComponentBoundEvent_50_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoginLinkPrompt_C::BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature");

	ULoginLinkPrompt_C_BndEvt__CreateButton_K2Node_ComponentBoundEvent_67_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoginLinkPrompt.LoginLinkPrompt_C.ExecuteUbergraph_LoginLinkPrompt
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoginLinkPrompt_C::ExecuteUbergraph_LoginLinkPrompt(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoginLinkPrompt.LoginLinkPrompt_C.ExecuteUbergraph_LoginLinkPrompt");

	ULoginLinkPrompt_C_ExecuteUbergraph_LoginLinkPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
