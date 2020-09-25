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

// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_NewsRotatorWidget_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NavigateConfirm");

	UWBP_NewsRotatorWidget_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HasFocus                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::UpdatePrompts(unsigned char* InputState, bool* HasFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdatePrompts");

	UWBP_NewsRotatorWidget_C_UpdatePrompts_Params params;
	params.InputState = InputState;
	params.HasFocus = HasFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    Widgets                        (Parm, OutParm, ZeroConstructor)

void UWBP_NewsRotatorWidget_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GetNavigationWidgets");

	UWBP_NewsRotatorWidget_C_GetNavigationWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widgets != nullptr)
		*Widgets = params.Widgets;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewPanelIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::ShowPanel(int* NewPanelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPanel");

	UWBP_NewsRotatorWidget_C_ShowPanel_Params params;
	params.NewPanelIndex = NewPanelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::UpdateRotatorButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UpdateRotatorButtons");

	UWBP_NewsRotatorWidget_C_UpdateRotatorButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::ShowPrevPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowPrevPanel");

	UWBP_NewsRotatorWidget_C_ShowPrevPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::ShowNextPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ShowNextPanel");

	UWBP_NewsRotatorWidget_C_ShowNextPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::PopulateData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.PopulateData");

	UWBP_NewsRotatorWidget_C_PopulateData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidget");

	UWBP_NewsRotatorWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged
// (Event, Protected, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnJsonChanged");

	UWBP_NewsRotatorWidget_C_OnJsonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnAnimationFinished");

	UWBP_NewsRotatorWidget_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ButtonIndex                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::OnItemClicked(int* ButtonIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnItemClicked");

	UWBP_NewsRotatorWidget_C_OnItemClicked_Params params;
	params.ButtonIndex = ButtonIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::OnActionClicked(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionClicked");

	UWBP_NewsRotatorWidget_C_OnActionClicked_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::OnActionButtonHovered(class UPUMG_Widget** Widget, bool* bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnActionButtonHovered");

	UWBP_NewsRotatorWidget_C_OnActionButtonHovered_Params params;
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 CurrentState                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::OnInputModeChange(unsigned char* CurrentState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.OnInputModeChange");

	UWBP_NewsRotatorWidget_C_OnInputModeChange_Params params;
	params.CurrentState = CurrentState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.Tick");

	UWBP_NewsRotatorWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.InitializeWidgetNavigation");

	UWBP_NewsRotatorWidget_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::BindInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.BindInputActions");

	UWBP_NewsRotatorWidget_C_BindInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions
// (BlueprintCallable, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::UnbindInputActions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.UnbindInputActions");

	UWBP_NewsRotatorWidget_C_UnbindInputActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::HandleGamepadHovered(class UPUMG_Widget** Widget, bool* bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.HandleGamepadHovered");

	UWBP_NewsRotatorWidget_C_HandleGamepadHovered_Params params;
	params.Widget = Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadHover");

	UWBP_NewsRotatorWidget_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_NewsRotatorWidget_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.GamepadUnhover");

	UWBP_NewsRotatorWidget_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::ExecuteUbergraph_WBP_NewsRotatorWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.ExecuteUbergraph_WBP_NewsRotatorWidget");

	UWBP_NewsRotatorWidget_C_ExecuteUbergraph_WBP_NewsRotatorWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_NewsRotatorWidget_C::NewsVisibilityUpdated__DelegateSignature(bool* Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_NewsRotatorWidget.WBP_NewsRotatorWidget_C.NewsVisibilityUpdated__DelegateSignature");

	UWBP_NewsRotatorWidget_C_NewsVisibilityUpdated__DelegateSignature_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
