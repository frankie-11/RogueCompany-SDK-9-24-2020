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

// Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_MatchInvitation_C::BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UWBP_MatchInvitation_C_BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_MatchInvitation_C::BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_MatchInvitation_C_BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowInvitation
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FClientQueueInfo*       QueueInfo                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MatchInvitation_C::ShowInvitation(class UKSPlayerInfo** playerinfo, struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowInvitation");

	UWBP_MatchInvitation_C_ShowInvitation_Params params;
	params.playerinfo = playerinfo;
	params.QueueInfo = QueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowError
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  ErrorMessage                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_MatchInvitation_C::ShowError(struct FText* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.ShowError");

	UWBP_MatchInvitation_C_ShowError_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartShowSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchInvitation_C::StartShowSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartShowSequence");

	UWBP_MatchInvitation_C_StartShowSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartHideSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  FromRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ToRoute                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchInvitation_C::StartHideSequence(struct FName* FromRoute, struct FName* ToRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.StartHideSequence");

	UWBP_MatchInvitation_C_StartHideSequence_Params params;
	params.FromRoute = FromRoute;
	params.ToRoute = ToRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_MatchInvitation_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.InitializeWidgetNavigation");

	UWBP_MatchInvitation_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.OnHideAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_MatchInvitation_C::OnHideAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.OnHideAnimFinished");

	UWBP_MatchInvitation_C_OnHideAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MatchInvitation.WBP_MatchInvitation_C.ExecuteUbergraph_WBP_MatchInvitation
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_MatchInvitation_C::ExecuteUbergraph_WBP_MatchInvitation(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MatchInvitation.WBP_MatchInvitation_C.ExecuteUbergraph_WBP_MatchInvitation");

	UWBP_MatchInvitation_C_ExecuteUbergraph_WBP_MatchInvitation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
