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

// Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::SetNewIndicator(bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.SetNewIndicator");

	UWBP_TopNavButton_C_SetNewIndicator_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Disabled                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::IsDisabled(bool* Disabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.IsDisabled");

	UWBP_TopNavButton_C_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Disabled != nullptr)
		*Disabled = params.Disabled;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::IsActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.IsActive");

	UWBP_TopNavButton_C_IsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Active != nullptr)
		*Active = params.Active;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.PreConstruct");

	UWBP_TopNavButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_TopNavButton_C::SetMessage(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.SetMessage");

	UWBP_TopNavButton_C_SetMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TopNavButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.Construct");

	UWBP_TopNavButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsDisabled                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::DisableButton(bool* IsDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.DisableButton");

	UWBP_TopNavButton_C_DisableButton_Params params;
	params.IsDisabled = IsDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::SetActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.SetActive");

	UWBP_TopNavButton_C_SetActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_TopNavButton_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.GamepadConfirm");

	UWBP_TopNavButton_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.InitializeWidget");

	UWBP_TopNavButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.HandleButtonClick
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_TopNavButton_C::HandleButtonClick(class UWBP_subscreen_nav_tab_C** Tab)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.HandleButtonClick");

	UWBP_TopNavButton_C_HandleButtonClick_Params params;
	params.Tab = Tab;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::ExecuteUbergraph_WBP_TopNavButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.ExecuteUbergraph_WBP_TopNavButton");

	UWBP_TopNavButton_C_ExecuteUbergraph_WBP_TopNavButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              ButtonClicked                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_TopNavButton_C::OnNonRouteClicked__DelegateSignature(class UKSWidget** ButtonClicked)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.OnNonRouteClicked__DelegateSignature");

	UWBP_TopNavButton_C_OnNonRouteClicked__DelegateSignature_Params params;
	params.ButtonClicked = ButtonClicked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TopNavButton_C::OnUnhovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.OnUnhovered__DelegateSignature");

	UWBP_TopNavButton_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_TopNavButton_C::OnHovered__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.OnHovered__DelegateSignature");

	UWBP_TopNavButton_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  TargetViewState                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TopNavButton_C::OnClicked__DelegateSignature(struct FName* TargetViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TopNavButton.WBP_TopNavButton_C.OnClicked__DelegateSignature");

	UWBP_TopNavButton_C_OnClicked__DelegateSignature_Params params;
	params.TargetViewState = TargetViewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
