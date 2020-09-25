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

// Function ExpDisplay.ExpDisplay_C.Make Cash Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent*    Event                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UExpDisplay_C::Make_Cash_Message(struct FKSScoreChangeEvent* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.Make Cash Message");

	UExpDisplay_C_Make_Cash_Message_Params params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.MakePopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExpDisplayInfo*        ExpInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UExpDisplay_C::MakePopup(struct FExpDisplayInfo* ExpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.MakePopup");

	UExpDisplay_C_MakePopup_Params params;
	params.ExpInfo = ExpInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UExpDisplay_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.Construct");

	UExpDisplay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.OnScoreChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent*    ScoreChangeEvent               (BlueprintVisible, BlueprintReadOnly, Parm)

void UExpDisplay_C::OnScoreChanged(struct FKSScoreChangeEvent* ScoreChangeEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.OnScoreChanged");

	UExpDisplay_C_OnScoreChanged_Params params;
	params.ScoreChangeEvent = ScoreChangeEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.OnUIRelevantPlayerStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExpDisplay_C::OnUIRelevantPlayerStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.OnUIRelevantPlayerStateChanged");

	UExpDisplay_C_OnUIRelevantPlayerStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.DisplayExpInfo
// (Event, Protected, BlueprintEvent)

void UExpDisplay_C::DisplayExpInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.DisplayExpInfo");

	UExpDisplay_C_DisplayExpInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.ShowNextQueue
// (BlueprintCallable, BlueprintEvent)

void UExpDisplay_C::ShowNextQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.ShowNextQueue");

	UExpDisplay_C_ShowNextQueue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExpDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.PreConstruct");

	UExpDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.OnCashChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSScoreChangeEvent*    Score_Change                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UExpDisplay_C::OnCashChange(struct FKSScoreChangeEvent* Score_Change)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.OnCashChange");

	UExpDisplay_C_OnCashChange_Params params;
	params.Score_Change = Score_Change;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExpDisplay.ExpDisplay_C.ExecuteUbergraph_ExpDisplay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UExpDisplay_C::ExecuteUbergraph_ExpDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExpDisplay.ExpDisplay_C.ExecuteUbergraph_ExpDisplay");

	UExpDisplay_C_ExecuteUbergraph_ExpDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
