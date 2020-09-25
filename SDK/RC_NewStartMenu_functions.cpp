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

// Function NewStartMenu.NewStartMenu_C.set version text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::set_version_text()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.set version text");

	UNewStartMenu_C_set_version_text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UNewStartMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.NavigateBack");

	UNewStartMenu_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewStartMenu.NewStartMenu_C.ShowMenuFinished
// (BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::ShowMenuFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.ShowMenuFinished");

	UNewStartMenu_C_ShowMenuFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.ShowMenuAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewStartMenu_C::ShowMenuAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.ShowMenuAnim");

	UNewStartMenu_C_ShowMenuAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UNewStartMenu_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.InitializeTickAnimations");

	UNewStartMenu_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.InitHideAnimation
// (BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::InitHideAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.InitHideAnimation");

	UNewStartMenu_C_InitHideAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.HideMenuFinished
// (BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::HideMenuFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.HideMenuFinished");

	UNewStartMenu_C_HideMenuFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.HideMenuAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewStartMenu_C::HideMenuAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.HideMenuAnim");

	UNewStartMenu_C_HideMenuAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.StartHideAnim
// (BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::StartHideAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.StartHideAnim");

	UNewStartMenu_C_StartHideAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewStartMenu_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.InitializeWidget");

	UNewStartMenu_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UNewStartMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.InitializeWidgetNavigation");

	UNewStartMenu_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.BackToLastScreen
// (BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::BackToLastScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.BackToLastScreen");

	UNewStartMenu_C_BackToLastScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewStartMenu_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.StartShowSequence");

	UNewStartMenu_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewStartMenu_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.StartHideSequence");

	UNewStartMenu_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.StartShowAnim
// (BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::StartShowAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.StartShowAnim");

	UNewStartMenu_C_StartShowAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewStartMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.Construct");

	UNewStartMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNewStartMenu_C::BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UNewStartMenu_C_BndEvt__ButtonNews_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNewStartMenu_C::BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UNewStartMenu_C_BndEvt__ButtonQuit_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UNewStartMenu_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UNewStartMenu_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.OnBackButton
// (BlueprintCallable, BlueprintEvent)

void UNewStartMenu_C::OnBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.OnBackButton");

	UNewStartMenu_C_OnBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewStartMenu.NewStartMenu_C.ExecuteUbergraph_NewStartMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewStartMenu_C::ExecuteUbergraph_NewStartMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewStartMenu.NewStartMenu_C.ExecuteUbergraph_NewStartMenu");

	UNewStartMenu_C_ExecuteUbergraph_NewStartMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
