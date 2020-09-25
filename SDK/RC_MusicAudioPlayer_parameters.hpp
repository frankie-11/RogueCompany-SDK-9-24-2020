#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray
struct AMusicAudioPlayer_C_PrependStringToEventArray_Params
{
	struct FString*                                    PrependStringIn;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FString>                             EventNameArrayIn;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             EventNameArrayOut;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray
struct AMusicAudioPlayer_C_ComposeEventNamePriorityArray_Params
{
	struct FString*                                    EventName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UKSAudioPlayerStateParameterData**           CurrentStateParameters;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
