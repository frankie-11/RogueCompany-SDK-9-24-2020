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

// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ClearLog
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameActionLog_C::ClearLog()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ClearLog");

	UWBP_CustomGameActionLog_C_ClearLog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.AddLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CustomGameActionLog_C::AddLog(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.AddLog");

	UWBP_CustomGameActionLog_C_AddLog_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameActionLog_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.PreConstruct");

	UWBP_CustomGameActionLog_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CustomGameActionLog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.Construct");

	UWBP_CustomGameActionLog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.HandleScrollBottom
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomGameActionLog_C::HandleScrollBottom()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.HandleScrollBottom");

	UWBP_CustomGameActionLog_C_HandleScrollBottom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float*                         CurrentOffset                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameActionLog_C::BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float* CurrentOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature");

	UWBP_CustomGameActionLog_C_BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ExecuteUbergraph_WBP_CustomGameActionLog
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomGameActionLog_C::ExecuteUbergraph_WBP_CustomGameActionLog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomGameActionLog.WBP_CustomGameActionLog_C.ExecuteUbergraph_WBP_CustomGameActionLog");

	UWBP_CustomGameActionLog_C_ExecuteUbergraph_WBP_CustomGameActionLog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
