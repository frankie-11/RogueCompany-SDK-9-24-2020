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

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.AttemptGetAcquisition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_VoucherAcquisition_C::AttemptGetAcquisition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.AttemptGetAcquisition");

	UWBP_VoucherAcquisition_C_AttemptGetAcquisition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnRedeemDLC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_VoucherAcquisition_C::OnRedeemDLC(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnRedeemDLC");

	UWBP_VoucherAcquisition_C_OnRedeemDLC_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_VoucherAcquisition_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.NavigateBack");

	UWBP_VoucherAcquisition_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoucherAcquisition_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.Tick");

	UWBP_VoucherAcquisition_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoucherAcquisition_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidget");

	UWBP_VoucherAcquisition_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_VoucherAcquisition_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidgetNavigation");

	UWBP_VoucherAcquisition_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_VoucherAcquisition_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnShown");

	UWBP_VoucherAcquisition_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoucherAcquisition_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.PreConstruct");

	UWBP_VoucherAcquisition_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.ExecuteUbergraph_WBP_VoucherAcquisition
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoucherAcquisition_C::ExecuteUbergraph_WBP_VoucherAcquisition(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.ExecuteUbergraph_WBP_VoucherAcquisition");

	UWBP_VoucherAcquisition_C_ExecuteUbergraph_WBP_VoucherAcquisition_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
