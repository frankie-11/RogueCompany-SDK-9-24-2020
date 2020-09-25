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

// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** Tab_Selected                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::On_Tab_Clicked(class UWBP_subscreen_nav_tab_C** Tab_Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Clicked");

	UWBP_SettingsMenu_C_On_Tab_Clicked_Params params;
	params.Tab_Selected = Tab_Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::ResetPageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ResetPageState");

	UWBP_SettingsMenu_C_ResetPageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSSettingsPage**        Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UKSSettingsContainer*    KSSettingsContainerWidget      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::GetContainerWidgetForPUMGWidgetOnPage(class UKSSettingsPage** Page, class UPUMG_Widget** PUMG_Widget, class UKSSettingsContainer** KSSettingsContainerWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetContainerWidgetForPUMGWidgetOnPage");

	UWBP_SettingsMenu_C_GetContainerWidgetForPUMGWidgetOnPage_Params params;
	params.Page = Page;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KSSettingsContainerWidget != nullptr)
		*KSSettingsContainerWidget = params.KSSettingsContainerWidget;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bEntered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::On_Widget_Mouse_Entered(class UPUMG_Widget** PUMG_Widget, bool* bEntered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Mouse Entered");

	UWBP_SettingsMenu_C_On_Widget_Mouse_Entered_Params params;
	params.PUMG_Widget = PUMG_Widget;
	params.bEntered = bEntered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Setup_Hover_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Hover Handling");

	UWBP_SettingsMenu_C_Setup_Hover_Handling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSSettingsPage**        SettingsPage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UKSSettingsContainer*> SettingsContainers             (Parm, OutParm, ZeroConstructor)
// TArray<class UPUMG_Widget*>    SettingsContainersAsPUMG       (Parm, OutParm, ZeroConstructor)

void UWBP_SettingsMenu_C::GetSettingsContainersForPage(class UKSSettingsPage** SettingsPage, TArray<class UKSSettingsContainer*>* SettingsContainers, TArray<class UPUMG_Widget*>* SettingsContainersAsPUMG)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsContainersForPage");

	UWBP_SettingsMenu_C_GetSettingsContainersForPage_Params params;
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SettingsContainers != nullptr)
		*SettingsContainers = params.SettingsContainers;
	if (SettingsContainersAsPUMG != nullptr)
		*SettingsContainersAsPUMG = params.SettingsContainersAsPUMG;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSSettingsPage**        Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UKSSettingsWidget*       KSSettingsWidget               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::GetSettingsWidgetForPUMGWidgetOnPage(class UKSSettingsPage** Page, class UPUMG_Widget** PUMG_Widget, class UKSSettingsWidget** KSSettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetForPUMGWidgetOnPage");

	UWBP_SettingsMenu_C_GetSettingsWidgetForPUMGWidgetOnPage_Params params;
	params.Page = Page;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KSSettingsWidget != nullptr)
		*KSSettingsWidget = params.KSSettingsWidget;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSSettingsPage*         KSSettingsPage                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::Get_Current_Page(class UKSSettingsPage** KSSettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Get Current Page");

	UWBP_SettingsMenu_C_Get_Current_Page_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KSSettingsPage != nullptr)
		*KSSettingsPage = params.KSSettingsPage;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Assign_Tab_Icons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icons");

	UWBP_SettingsMenu_C_Assign_Tab_Icons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage**                 Icon                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName*                  Action_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::Assign_Tab_Icon(class UImage** Icon, struct FName* Action_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Assign Tab Icon");

	UWBP_SettingsMenu_C_Assign_Tab_Icon_Params params;
	params.Icon = Icon;
	params.Action_Name = Action_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* Input_State                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::On_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* Input_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Input State Changed");

	UWBP_SettingsMenu_C_On_Input_State_Changed_Params params;
	params.Input_State = Input_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Setup_Input_State_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Input State Handling");

	UWBP_SettingsMenu_C_Setup_Input_State_Handling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Setup_Login_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Setup Login Handling");

	UWBP_SettingsMenu_C_Setup_Login_Handling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_LoginState*              Login_State                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::Handle_Login_State(EPUMG_LoginState* Login_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Handle Login State");

	UWBP_SettingsMenu_C_Handle_Login_State_Params params;
	params.Login_State = Login_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Tab_Right()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Right");

	UWBP_SettingsMenu_C_Tab_Right_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Tab_Left()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Tab Left");

	UWBP_SettingsMenu_C_Tab_Left_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bInstantSwitch                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::Go_To_Active_Tab(bool* bInstantSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Go To Active Tab");

	UWBP_SettingsMenu_C_Go_To_Active_Tab_Params params;
	params.bInstantSwitch = bInstantSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index_Offset                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::Recover_From_Navigate_Failure(class UPUMG_Widget** PUMG_Widget, int* Index_Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Recover From Navigate Failure");

	UWBP_SettingsMenu_C_Recover_From_Navigate_Failure_Params params;
	params.PUMG_Widget = PUMG_Widget;
	params.Index_Offset = Index_Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Focus_Group                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::Widget_Navigate_Down_Failure(int* Focus_Group, class UPUMG_Widget** PUMG_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Down Failure");

	UWBP_SettingsMenu_C_Widget_Navigate_Down_Failure_Params params;
	params.Focus_Group = Focus_Group;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Focus_Group                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::Widget_Navigate_Up_Failure(int* Focus_Group, class UPUMG_Widget** PUMG_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Widget Navigate Up Failure");

	UWBP_SettingsMenu_C_Widget_Navigate_Up_Failure_Params params;
	params.Focus_Group = Focus_Group;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bHovered                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::On_Widget_Gamepad_Hovered(class UPUMG_Widget** PUMG_Widget, bool* bHovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Widget Gamepad Hovered");

	UWBP_SettingsMenu_C_On_Widget_Gamepad_Hovered_Params params;
	params.PUMG_Widget = PUMG_Widget;
	params.bHovered = bHovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_Widget**           PUMG_Widget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::Scroll_Widget_Into_View(class UPUMG_Widget** PUMG_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll Widget Into View");

	UWBP_SettingsMenu_C_Scroll_Widget_Into_View_Params params;
	params.PUMG_Widget = PUMG_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Scroll_To_Start()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To Start");

	UWBP_SettingsMenu_C_Scroll_To_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Scroll_To_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Scroll To End");

	UWBP_SettingsMenu_C_Scroll_To_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GoBack");

	UWBP_SettingsMenu_C_GoBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Revert Settings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Revert_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Revert Settings");

	UWBP_SettingsMenu_C_Revert_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldSaveSettings             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::ConfirmExit(bool* ShouldSaveSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ConfirmExit");

	UWBP_SettingsMenu_C_ConfirmExit_Params params;
	params.ShouldSaveSettings = ShouldSaveSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Restore_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Restore Settings");

	UWBP_SettingsMenu_C_Restore_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::ExitSettingsPage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExitSettingsPage");

	UWBP_SettingsMenu_C_ExitSettingsPage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           AnyUnsaved                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::HasAnyUnsavedSetting(bool* AnyUnsaved)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.HasAnyUnsavedSetting");

	UWBP_SettingsMenu_C_HasAnyUnsavedSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnyUnsaved != nullptr)
		*AnyUnsaved = params.AnyUnsaved;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::Save_Settings()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Save Settings");

	UWBP_SettingsMenu_C_Save_Settings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsMenu_C::NavigateBackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBackPressed");

	UWBP_SettingsMenu_C_NavigateBackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_SettingsMenu_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.NavigateBack");

	UWBP_SettingsMenu_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSSettingsPage**        SettingsPage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TArray<class UKSSettingsWidget*> SettingsWidgets                (Parm, OutParm, ZeroConstructor)
// TArray<class UPUMG_Widget*>    SettingsWidgetsAsPUMG          (Parm, OutParm, ZeroConstructor)

void UWBP_SettingsMenu_C::GetSettingsWidgetsForPage(class UKSSettingsPage** SettingsPage, TArray<class UKSSettingsWidget*>* SettingsWidgets, TArray<class UPUMG_Widget*>* SettingsWidgetsAsPUMG)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.GetSettingsWidgetsForPage");

	UWBP_SettingsMenu_C_GetSettingsWidgetsForPage_Params params;
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SettingsWidgets != nullptr)
		*SettingsWidgets = params.SettingsWidgets;
	if (SettingsWidgetsAsPUMG != nullptr)
		*SettingsWidgetsAsPUMG = params.SettingsWidgetsAsPUMG;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsPage**        Page                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::SetupNavigationForPage(class UKSSettingsPage** Page, int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SetupNavigationForPage");

	UWBP_SettingsMenu_C_SetupNavigationForPage_Params params;
	params.Page = Page;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_subscreen_nav_tab_C** Tab_Selected                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bInstantSwitch                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::On_Tab_Selected(class UWBP_subscreen_nav_tab_C** Tab_Selected, bool* bInstantSwitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.On Tab Selected");

	UWBP_SettingsMenu_C_On_Tab_Selected_Params params;
	params.Tab_Selected = Tab_Selected;
	params.bInstantSwitch = bInstantSwitch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsPage**        Settings_Page_Widget           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::Add_Tab_For_Settings_Page(class UKSSettingsPage** Settings_Page_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Tab For Settings Page");

	UWBP_SettingsMenu_C_Add_Tab_For_Settings_Page_Params params;
	params.Settings_Page_Widget = Settings_Page_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsPage**        Settings_Page                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::Add_Settings_Page_Widget(class UKSSettingsPage** Settings_Page)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.Add Settings Page Widget");

	UWBP_SettingsMenu_C_Add_Settings_Page_Widget_Params params;
	params.Settings_Page = Settings_Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuHoverSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::SettingsMenuHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuHoverSFX");

	UWBP_SettingsMenu_C_SettingsMenuHoverSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::SettingsMenuApplyClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuApplyClickSFX");

	UWBP_SettingsMenu_C_SettingsMenuApplyClickSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::SettingsMenuBackClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuBackClickSFX");

	UWBP_SettingsMenu_C_SettingsMenuBackClickSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::SettingsMenuRevertButtonClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.SettingsMenuRevertButtonClickSFX");

	UWBP_SettingsMenu_C_SettingsMenuRevertButtonClickSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsPage**        SettingsPage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsMenu_C::AddSettingsPageWidget(class UKSSettingsPage** SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.AddSettingsPageWidget");

	UWBP_SettingsMenu_C_AddSettingsPageWidget_Params params;
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_SettingsMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnShown");

	UWBP_SettingsMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_SettingsMenu_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnHide");

	UWBP_SettingsMenu_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsMenu_C::OnMenuConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnMenuConfigSet");

	UWBP_SettingsMenu_C_OnMenuConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidget");

	UWBP_SettingsMenu_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_SettingsMenu_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.InitializeWidgetNavigation");

	UWBP_SettingsMenu_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::RebuildNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.RebuildNavigation");

	UWBP_SettingsMenu_C_RebuildNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::OnBackButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnBackButton");

	UWBP_SettingsMenu_C_OnBackButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::OnApplyButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnApplyButton");

	UWBP_SettingsMenu_C_OnApplyButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsMenu_C::OnRevertButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnRevertButton");

	UWBP_SettingsMenu_C_OnRevertButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          ShouldSaveSettings             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::OnConfirmExit(bool* ShouldSaveSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.OnConfirmExit");

	UWBP_SettingsMenu_C_OnConfirmExit_Params params;
	params.ShouldSaveSettings = ShouldSaveSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.PreConstruct");

	UWBP_SettingsMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsMenu_C::ExecuteUbergraph_WBP_SettingsMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsMenu.WBP_SettingsMenu_C.ExecuteUbergraph_WBP_SettingsMenu");

	UWBP_SettingsMenu_C_ExecuteUbergraph_WBP_SettingsMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
