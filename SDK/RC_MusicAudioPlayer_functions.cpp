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

// Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString*                PrependStringIn                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FString>         EventNameArrayIn               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         EventNameArrayOut              (Parm, OutParm, ZeroConstructor)

void AMusicAudioPlayer_C::PrependStringToEventArray(struct FString* PrependStringIn, TArray<struct FString>* EventNameArrayIn, TArray<struct FString>* EventNameArrayOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray");

	AMusicAudioPlayer_C_PrependStringToEventArray_Params params;
	params.PrependStringIn = PrependStringIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventNameArrayIn != nullptr)
		*EventNameArrayIn = params.EventNameArrayIn;
	if (EventNameArrayOut != nullptr)
		*EventNameArrayOut = params.EventNameArrayOut;
}


// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                EventName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UKSAudioPlayerStateParameterData** CurrentStateParameters         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> AMusicAudioPlayer_C::ComposeEventNamePriorityArray(struct FString* EventName, class UKSAudioPlayerStateParameterData** CurrentStateParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray");

	AMusicAudioPlayer_C_ComposeEventNamePriorityArray_Params params;
	params.EventName = EventName;
	params.CurrentStateParameters = CurrentStateParameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
