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

// Function ReportMenu.ReportMenu_C.GetNavigationWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPUMG_Widget*>    Return_Value                   (Parm, OutParm, ZeroConstructor)

void UReportMenu_C::GetNavigationWidgets(TArray<class UPUMG_Widget*>* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.GetNavigationWidgets");

	UReportMenu_C_GetNavigationWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function ReportMenu.ReportMenu_C.SelectReason
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EReportPlayerReason*           ReportReason                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportMenu_C::SelectReason(EReportPlayerReason* ReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.SelectReason");

	UReportMenu_C_SelectReason_Params params;
	params.ReportReason = ReportReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.ReportPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EReportPlayerReason*           ReportReason                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportMenu_C::ReportPlayer(EReportPlayerReason* ReportReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.ReportPlayer");

	UReportMenu_C_ReportPlayer_Params params;
	params.ReportReason = ReportReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.OnOpenReportScreen
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FReportPlayerParams*    Report                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UReportMenu_C::OnOpenReportScreen(struct FReportPlayerParams* Report)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnOpenReportScreen");

	UReportMenu_C_OnOpenReportScreen_Params params;
	params.Report = Report;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportMenu_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.InitializeWidget");

	UReportMenu_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportMenu_C::BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature");

	UReportMenu_C_BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportMenu_C::BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UReportMenu_C_BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportMenu_C::BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UReportMenu_C_BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.BndEvt__LeavingAFKButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportMenu_C::BndEvt__LeavingAFKButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__LeavingAFKButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UReportMenu_C_BndEvt__LeavingAFKButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportMenu_C::BndEvt__OtherButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__OtherButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UReportMenu_C_BndEvt__OtherButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportMenu_C::BndEvt__SubmitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__SubmitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UReportMenu_C_BndEvt__SubmitButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.OnShown
// (Event, Public, BlueprintEvent)

void UReportMenu_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnShown");

	UReportMenu_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.OnHide
// (Event, Public, BlueprintEvent)

void UReportMenu_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnHide");

	UReportMenu_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UReportMenu_C::BndEvt__CheatingButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.BndEvt__CheatingButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UReportMenu_C_BndEvt__CheatingButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportMenu_C::ExecuteUbergraph_ReportMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.ExecuteUbergraph_ReportMenu");

	UReportMenu_C_ExecuteUbergraph_ReportMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UReportMenu_C::OnTabPressed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnTabPressed__DelegateSignature");

	UReportMenu_C_OnTabPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReportMenu_C::OnPlayerReported__DelegateSignature(int64_t* PlayerId, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnPlayerReported__DelegateSignature");

	UReportMenu_C_OnPlayerReported__DelegateSignature_Params params;
	params.PlayerId = PlayerId;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UReportMenu_C::OnCloseTabScreen__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReportMenu.ReportMenu_C.OnCloseTabScreen__DelegateSignature");

	UReportMenu_C_OnCloseTabScreen__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
