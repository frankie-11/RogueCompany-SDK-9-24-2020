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

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ShowActivity
struct UWBP_VoiceParticipantElement_C_ShowActivity_Params
{
	bool*                                              IsActive;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.SetName
struct UWBP_VoiceParticipantElement_C_SetName_Params
{
	struct FText*                                      InText;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.OnInitialized
struct UWBP_VoiceParticipantElement_C_OnInitialized_Params
{
};

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationComplete
struct UWBP_VoiceParticipantElement_C_HandleAnimationComplete_Params
{
};

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.HandleAnimationStart
struct UWBP_VoiceParticipantElement_C_HandleAnimationStart_Params
{
};

// Function WBP_VoiceParticipantElement.WBP_VoiceParticipantElement_C.ExecuteUbergraph_WBP_VoiceParticipantElement
struct UWBP_VoiceParticipantElement_C_ExecuteUbergraph_WBP_VoiceParticipantElement_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
