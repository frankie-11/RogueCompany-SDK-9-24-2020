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

// Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScrollBox*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UScrollBox* UWBP_SettingsPage_C::GetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.GetScrollBox");

	UWBP_SettingsPage_C_GetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsSection**     Selection_Widget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsPage_C::Add_Settings_Section_Widget(class UKSSettingsSection** Selection_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.Add Settings Section Widget");

	UWBP_SettingsPage_C_Add_Settings_Section_Widget_Params params;
	params.Selection_Widget = Selection_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsPage_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.InitializeTickAnimations");

	UWBP_SettingsPage_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsPage_C::HandleShowPageAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimFinished");

	UWBP_SettingsPage_C_HandleShowPageAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsPage_C::HandleShowPageAnimUpdated(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleShowPageAnimUpdated");

	UWBP_SettingsPage_C_HandleShowPageAnimUpdated_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsPage_C::HandleHidePageAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimFinished");

	UWBP_SettingsPage_C_HandleHidePageAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsPage_C::HandleHidePageAnimUpdated(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.HandleHidePageAnimUpdated");

	UWBP_SettingsPage_C_HandleHidePageAnimUpdated_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsPage_C::PlayShowPageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.PlayShowPageAnim");

	UWBP_SettingsPage_C_PlayShowPageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsPage_C::PlayHidePageAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.PlayHidePageAnim");

	UWBP_SettingsPage_C_PlayHidePageAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsPage_C::SetInitPageState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.SetInitPageState");

	UWBP_SettingsPage_C_SetInitPageState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_SettingsPage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.Construct");

	UWBP_SettingsPage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsSection**     SettingsSection                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsPage_C::AddSettingsSectionWidget(class UKSSettingsSection** SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.AddSettingsSectionWidget");

	UWBP_SettingsPage_C_AddSettingsSectionWidget_Params params;
	params.SettingsSection = SettingsSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsPage_C::ExecuteUbergraph_WBP_SettingsPage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsPage.WBP_SettingsPage_C.ExecuteUbergraph_WBP_SettingsPage");

	UWBP_SettingsPage_C_ExecuteUbergraph_WBP_SettingsPage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
