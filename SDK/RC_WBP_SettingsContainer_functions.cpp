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

// Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSSettingsWidget**      Setting_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsContainer_C::Add_Setting_Widget_To_Box(class UKSSettingsWidget** Setting_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.Add Setting Widget To Box");

	UWBP_SettingsContainer_C_Add_Setting_Widget_To_Box_Params params;
	params.Setting_Widget = Setting_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsContainer_C::SettingsContainerHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.SettingsContainerHoverSFX");

	UWBP_SettingsContainer_C_SettingsContainerHoverSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet
// (Event, Protected, BlueprintEvent)

void UWBP_SettingsContainer_C::OnContainerConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnContainerConfigSet");

	UWBP_SettingsContainer_C_OnContainerConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsWidget**      SettingsWidget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_SettingsContainer_C::AddSettingsWidget(class UKSSettingsWidget** SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.AddSettingsWidget");

	UWBP_SettingsContainer_C_AddSettingsWidget_Params params;
	params.SettingsWidget = SettingsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsContainer_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseEnter");

	UWBP_SettingsContainer_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_SettingsContainer_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.OnMouseLeave");

	UWBP_SettingsContainer_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsContainer_C::PlayHoverAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayHoverAnim");

	UWBP_SettingsContainer_C_PlayHoverAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim
// (BlueprintCallable, BlueprintEvent)

void UWBP_SettingsContainer_C::PlayUnhoverAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.PlayUnhoverAnim");

	UWBP_SettingsContainer_C_PlayUnhoverAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_SettingsContainer_C::ExecuteUbergraph_WBP_SettingsContainer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_SettingsContainer.WBP_SettingsContainer_C.ExecuteUbergraph_WBP_SettingsContainer");

	UWBP_SettingsContainer_C_ExecuteUbergraph_WBP_SettingsContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
