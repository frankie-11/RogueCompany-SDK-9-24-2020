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

// Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UContextActionData*> ContextActions                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          AlwaysShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Bar_C::RefreshContextButtons(bool* AlwaysShow, TArray<class UContextActionData*>* ContextActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.RefreshContextButtons");

	UWBP_Context_Bar_C_RefreshContextButtons_Params params;
	params.AlwaysShow = AlwaysShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextActions != nullptr)
		*ContextActions = params.ContextActions;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.HandleInputStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* CurrentInputState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Bar_C::HandleInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* CurrentInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.HandleInputStateChange");

	UWBP_Context_Bar_C_HandleInputStateChange_Params params;
	params.CurrentInputState = CurrentInputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Context_Bar_C::CanCloseOnLogout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.CanCloseOnLogout");

	UWBP_Context_Bar_C_CanCloseOnLogout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Bar_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.InitializeWidget");

	UWBP_Context_Bar_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.UpdateContextActions
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UContextActionData*>* ContextActions                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Bar_C::UpdateContextActions(TArray<class UContextActionData*>* ContextActions, struct FName* CurrentRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.UpdateContextActions");

	UWBP_Context_Bar_C_UpdateContextActions_Params params;
	params.ContextActions = ContextActions;
	params.CurrentRoute = CurrentRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Context_Bar_C::ExecuteUbergraph_WBP_Context_Bar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Context_Bar.WBP_Context_Bar_C.ExecuteUbergraph_WBP_Context_Bar");

	UWBP_Context_Bar_C_ExecuteUbergraph_WBP_Context_Bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
