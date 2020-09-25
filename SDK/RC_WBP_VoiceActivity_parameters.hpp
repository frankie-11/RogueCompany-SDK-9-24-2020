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

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.GetNameForMctsId
struct UWBP_VoiceActivity_C_GetNameForMctsId_Params
{
	int64_t*                                           MctsId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Name;                                                     // (Parm, OutParm)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.Voice Participant Updated
struct UWBP_VoiceActivity_C_Voice_Participant_Updated_Params
{
	struct FString*                                    Account;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.AddVoiceParticipant
struct UWBP_VoiceActivity_C_AddVoiceParticipant_Params
{
	struct FString*                                    Account;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.RemoveVoiceParticipant
struct UWBP_VoiceActivity_C_RemoveVoiceParticipant_Params
{
	struct FString*                                    Account;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.InitializeWidget
struct UWBP_VoiceActivity_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantRemoved
struct UWBP_VoiceActivity_C_OnVoiceParticipantRemoved_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantAdded
struct UWBP_VoiceActivity_C_OnVoiceParticipantAdded_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.OnVoiceParticipantUpdated
struct UWBP_VoiceActivity_C_OnVoiceParticipantUpdated_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              bIsTalking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsMuted;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoiceActivity.WBP_VoiceActivity_C.ExecuteUbergraph_WBP_VoiceActivity
struct UWBP_VoiceActivity_C_ExecuteUbergraph_WBP_VoiceActivity_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
