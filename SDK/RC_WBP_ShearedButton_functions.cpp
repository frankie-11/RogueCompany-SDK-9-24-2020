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

// Function WBP_ShearedButton.WBP_ShearedButton_C.ApplyColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           PrimaryColor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           SecondaryColor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::ApplyColors(struct FLinearColor* PrimaryColor, struct FLinearColor* SecondaryColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ApplyColors");

	UWBP_ShearedButton_C_ApplyColors_Params params;
	params.PrimaryColor = PrimaryColor;
	params.SecondaryColor = SecondaryColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::SetActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetActive");

	UWBP_ShearedButton_C_SetActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetDisabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Disable                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::SetDisabled(bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetDisabled");

	UWBP_ShearedButton_C_SetDisabled_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_ShearedButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.NavigateConfirm");

	UWBP_ShearedButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InTitle                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ShearedButton_C::SetMessage(struct FText* InTitle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetMessage");

	UWBP_ShearedButton_C_SetMessage_Params params;
	params.InTitle = InTitle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetShadowVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::SetShadowVisibility(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetShadowVisibility");

	UWBP_ShearedButton_C_SetShadowVisibility_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetPositions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InOffset                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::SetPositions(float* InOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetPositions");

	UWBP_ShearedButton_C_SetPositions_Params params;
	params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetSizings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         InWidth                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         InHeight                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::SetSizings(float* InWidth, float* InHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetSizings");

	UWBP_ShearedButton_C_SetSizings_Params params;
	params.InWidth = InWidth;
	params.InHeight = InHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.SetColors");

	UWBP_ShearedButton_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::HoverStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnimFinished");

	UWBP_ShearedButton_C_HoverStateAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::UnhoverStateAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnim");

	UWBP_ShearedButton_C_UnhoverStateAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::UnhoverStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.UnhoverStateAnimFinished");

	UWBP_ShearedButton_C_UnhoverStateAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::PressedStateAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnim");

	UWBP_ShearedButton_C_PressedStateAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::PressedStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.PressedStateAnimFinished");

	UWBP_ShearedButton_C_PressedStateAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::ReleasedStateAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnim");

	UWBP_ShearedButton_C_ReleasedStateAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::ReleasedStateAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ReleasedStateAnimFinished");

	UWBP_ShearedButton_C_ReleasedStateAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::HoverStateAnim(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.HoverStateAnim");

	UWBP_ShearedButton_C_HoverStateAnim_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UWBP_ShearedButton_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.InitializeTickAnimations");

	UWBP_ShearedButton_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.PreConstruct");

	UWBP_ShearedButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ShearedButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.Construct");

	UWBP_ShearedButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_ShearedButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadHover");

	UWBP_ShearedButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_ShearedButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.GamepadUnhover");

	UWBP_ShearedButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyClick
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::ProxyClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyClick");

	UWBP_ShearedButton_C_ProxyClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyHover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::ProxyHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyHover");

	UWBP_ShearedButton_C_ProxyHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyUnhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::ProxyUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ProxyUnhover");

	UWBP_ShearedButton_C_ProxyUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ResetDisplay
// (BlueprintCallable, BlueprintEvent)

void UWBP_ShearedButton_C::ResetDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ResetDisplay");

	UWBP_ShearedButton_C_ResetDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ShearedButton_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature");

	UWBP_ShearedButton_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.ExecuteUbergraph_WBP_ShearedButton
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ShearedButton_C::ExecuteUbergraph_WBP_ShearedButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.ExecuteUbergraph_WBP_ShearedButton");

	UWBP_ShearedButton_C_ExecuteUbergraph_WBP_ShearedButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ShearedButton_C::OnUnhovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.OnUnhovered__DelegateSignature");

	UWBP_ShearedButton_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ShearedButton_C::OnHovered__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.OnHovered__DelegateSignature");

	UWBP_ShearedButton_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ShearedButton.WBP_ShearedButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_ShearedButton_C::OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ShearedButton.WBP_ShearedButton_C.OnClicked__DelegateSignature");

	UWBP_ShearedButton_C_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
