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

// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   Settings_Container             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsGroup_C::Add_Sub_Settings_Widget(class UKSSettingsContainer** Settings_Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Sub Settings Widget");

	UWBP_SettingsGroup_C_Add_Sub_Settings_Widget_Params params;
	params.Settings_Container = Settings_Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   Settings_Container             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsGroup_C::Add_Main_Settings_Widget(class UKSSettingsContainer** Settings_Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.Add Main Settings Widget");

	UWBP_SettingsGroup_C_Add_Main_Settings_Widget_Params params;
	params.Settings_Container = Settings_Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   Settings_Container             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UVerticalBox**           Vertical_Box                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsGroup_C::AddSettingsWidget(class UKSSettingsContainer** Settings_Container, class UVerticalBox** Vertical_Box)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSettingsWidget");

	UWBP_SettingsGroup_C_AddSettingsWidget_Params params;
	params.Settings_Container = Settings_Container;
	params.Vertical_Box = Vertical_Box;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsGroup_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.InitializeWidget");

	UWBP_SettingsGroup_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   SettingsContainer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsGroup_C::AddSubSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddSubSettingsContainerWidget");

	UWBP_SettingsGroup_C_AddSubSettingsContainerWidget_Params params;
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   SettingsContainer              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsGroup_C::AddMainSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.AddMainSettingsContainerWidget");

	UWBP_SettingsGroup_C_AddMainSettingsContainerWidget_Params params;
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsGroup_C::ExecuteUbergraph_WBP_SettingsGroup(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsGroup.WBP_SettingsGroup_C.ExecuteUbergraph_WBP_SettingsGroup");

	UWBP_SettingsGroup_C_ExecuteUbergraph_WBP_SettingsGroup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
