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

// Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsGroup**       Settings_Group_Widget          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsSection_C::Add_Settings_Group_Widget(class UKSSettingsGroup** Settings_Group_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSection.WBP_SettingsSection_C.Add Settings Group Widget");

	UWBP_SettingsSection_C_Add_Settings_Group_Widget_Params params;
	params.Settings_Group_Widget = Settings_Group_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSection_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSection.WBP_SettingsSection_C.PreConstruct");

	UWBP_SettingsSection_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSection_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSection.WBP_SettingsSection_C.InitializeWidget");

	UWBP_SettingsSection_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsGroup**       SettingsGroup                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsSection_C::AddSettingsGroupWidget(class UKSSettingsGroup** SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSection.WBP_SettingsSection_C.AddSettingsGroupWidget");

	UWBP_SettingsSection_C_AddSettingsGroupWidget_Params params;
	params.SettingsGroup = SettingsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsSection_C::OnSectionConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSection.WBP_SettingsSection_C.OnSectionConfigSet");

	UWBP_SettingsSection_C_OnSectionConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsSection_C::ExecuteUbergraph_WBP_SettingsSection(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsSection.WBP_SettingsSection_C.ExecuteUbergraph_WBP_SettingsSection");

	UWBP_SettingsSection_C_ExecuteUbergraph_WBP_SettingsSection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
