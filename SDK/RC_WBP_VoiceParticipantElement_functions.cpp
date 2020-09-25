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

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ShowActivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoiceParticipantElement_C::ShowActivity(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ShowActivity");

	UWBP_VoiceParticipantElement_C_ShowActivity_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.SetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InText                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_VoiceParticipantElement_C::SetName(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.SetName");

	UWBP_VoiceParticipantElement_C_SetName_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_VoiceParticipantElement_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.OnInitialized");

	UWBP_VoiceParticipantElement_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationComplete
// (BlueprintCallable, BlueprintEvent)

void UWBP_VoiceParticipantElement_C::HandleAnimationComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationComplete");

	UWBP_VoiceParticipantElement_C_HandleAnimationComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_VoiceParticipantElement_C::HandleAnimationStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationStart");

	UWBP_VoiceParticipantElement_C_HandleAnimationStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ExecuteUbergraph_WBP_VoiceParticipantElement
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_VoiceParticipantElement_C::ExecuteUbergraph_WBP_VoiceParticipantElement(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ExecuteUbergraph_WBP_VoiceParticipantElement");

	UWBP_VoiceParticipantElement_C_ExecuteUbergraph_WBP_VoiceParticipantElement_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
