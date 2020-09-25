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

// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_JoinMatchBlocker_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyUp");

	UWBP_JoinMatchBlocker_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_JoinMatchBlocker_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnKeyDown");

	UWBP_JoinMatchBlocker_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_JoinMatchBlocker_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.InitializeWidgetNavigation");

	UWBP_JoinMatchBlocker_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JoinMatchBlocker_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartShowSequence");

	UWBP_JoinMatchBlocker_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JoinMatchBlocker_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.StartHideSequence");

	UWBP_JoinMatchBlocker_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_JoinMatchBlocker_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnInitialized");

	UWBP_JoinMatchBlocker_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimFinish
// (BlueprintCallable, BlueprintEvent)

void UWBP_JoinMatchBlocker_C::OnShowAnimFinish()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimFinish");

	UWBP_JoinMatchBlocker_C_OnShowAnimFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_JoinMatchBlocker_C::OnShowAnimStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.OnShowAnimStart");

	UWBP_JoinMatchBlocker_C_OnShowAnimStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.ExecuteUbergraph_WBP_JoinMatchBlocker
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_JoinMatchBlocker_C::ExecuteUbergraph_WBP_JoinMatchBlocker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C.ExecuteUbergraph_WBP_JoinMatchBlocker");

	UWBP_JoinMatchBlocker_C_ExecuteUbergraph_WBP_JoinMatchBlocker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
