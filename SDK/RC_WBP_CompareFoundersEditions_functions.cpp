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

// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnClickedOtherClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CompareFoundersEditions_C::OnClickedOtherClosed(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnClickedOtherClosed");

	UWBP_CompareFoundersEditions_C_OnClickedOtherClosed_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CompareFoundersEditions_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.NavigateBack");

	UWBP_CompareFoundersEditions_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnCloseClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CompareFoundersEditions_C::OnCloseClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnCloseClicked");

	UWBP_CompareFoundersEditions_C_OnCloseClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_CompareFoundersEditions_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.OnShown");

	UWBP_CompareFoundersEditions_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CompareFoundersEditions_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidget");

	UWBP_CompareFoundersEditions_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_CompareFoundersEditions_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.InitializeWidgetNavigation");

	UWBP_CompareFoundersEditions_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.ExecuteUbergraph_WBP_CompareFoundersEditions
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CompareFoundersEditions_C::ExecuteUbergraph_WBP_CompareFoundersEditions(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C.ExecuteUbergraph_WBP_CompareFoundersEditions");

	UWBP_CompareFoundersEditions_C_ExecuteUbergraph_WBP_CompareFoundersEditions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
