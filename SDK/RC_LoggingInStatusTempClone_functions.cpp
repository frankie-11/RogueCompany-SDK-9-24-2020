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

// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.SetWaitQueueMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLoginQueueInfo*        LoginQueueInfo                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ULoggingInStatusTempClone_C::SetWaitQueueMessage(struct FLoginQueueInfo* LoginQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.SetWaitQueueMessage");

	ULoggingInStatusTempClone_C_SetWaitQueueMessage_Params params;
	params.LoginQueueInfo = LoginQueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoggingInStatusTempClone_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidget");

	ULoggingInStatusTempClone_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void ULoggingInStatusTempClone_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.InitializeWidgetNavigation");

	ULoggingInStatusTempClone_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULoggingInStatusTempClone_C::BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	ULoggingInStatusTempClone_C_BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.ExecuteUbergraph_LoggingInStatusTempClone
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULoggingInStatusTempClone_C::ExecuteUbergraph_LoggingInStatusTempClone(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggingInStatusTempClone.LoggingInStatusTempClone_C.ExecuteUbergraph_LoggingInStatusTempClone");

	ULoggingInStatusTempClone_C_ExecuteUbergraph_LoggingInStatusTempClone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
