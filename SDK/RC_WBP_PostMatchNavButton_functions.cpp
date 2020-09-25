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

// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PostMatchNavButton_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.NavigateConfirm");

	UWBP_PostMatchNavButton_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadConfirm
// (BlueprintCallable, BlueprintEvent)

void UWBP_PostMatchNavButton_C::GamepadConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadConfirm");

	UWBP_PostMatchNavButton_C_GamepadConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_PostMatchNavButton_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadHover");

	UWBP_PostMatchNavButton_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_PostMatchNavButton_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.GamepadUnhover");

	UWBP_PostMatchNavButton_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchNavButton_C::SetActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.SetActive");

	UWBP_PostMatchNavButton_C_SetActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PostMatchNavButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.Construct");

	UWBP_PostMatchNavButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchNavButton_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.InitializeWidget");

	UWBP_PostMatchNavButton_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchNavButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.PreConstruct");

	UWBP_PostMatchNavButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.HandleButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PostMatchNavButton_C::HandleButtonClicked(class UWBP_subscreen_nav_tab_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.HandleButtonClicked");

	UWBP_PostMatchNavButton_C_HandleButtonClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.ExecuteUbergraph_WBP_PostMatchNavButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PostMatchNavButton_C::ExecuteUbergraph_WBP_PostMatchNavButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.ExecuteUbergraph_WBP_PostMatchNavButton");

	UWBP_PostMatchNavButton_C_ExecuteUbergraph_WBP_PostMatchNavButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PostMatchNavButton_C** SelectedWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PostMatchNavButton_C::OnClicked__DelegateSignature(class UWBP_PostMatchNavButton_C** SelectedWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PostMatchNavButton.WBP_PostMatchNavButton_C.OnClicked__DelegateSignature");

	UWBP_PostMatchNavButton_C_OnClicked__DelegateSignature_Params params;
	params.SelectedWidget = SelectedWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
