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

// Function WBP_PartyModule.WBP_PartyModule_C.GetPrimaryFocus
struct UWBP_PartyModule_C_GetPrimaryFocus_Params
{
	class UWBP_PartyModuleCardSlot_C*                  PrimaryFocus;                                             // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.FindPlayerCardByVoiceId
struct UWBP_PartyModule_C_FindPlayerCardByVoiceId_Params
{
	struct FString*                                    VoiceId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWBP_player_card_module_C*                   PlayerCard;                                               // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Get Navigation Widgets
struct UWBP_PartyModule_C_Get_Navigation_Widgets_Params
{
	TArray<class UPUMG_Widget*>                        Return_Value;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Get Other Party Members
struct UWBP_PartyModule_C_Get_Other_Party_Members_Params
{
	TArray<struct FPUMG_PartyMemberData>               Party_Members;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FPUMG_PartyMemberData>               Return_Value;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_PartyModule.WBP_PartyModule_C.ApplyPartyData
struct UWBP_PartyModule_C_ApplyPartyData_Params
{
	TArray<struct FPUMG_PartyMemberData>*              PartyMembers;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_PartyModule.WBP_PartyModule_C.InitializeWidget
struct UWBP_PartyModule_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantAdded
struct UWBP_PartyModule_C_VoiceParticipantAdded_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantRemoved
struct UWBP_PartyModule_C_VoiceParticipantRemoved_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceParticipantUpdated
struct UWBP_PartyModule_C_VoiceParticipantUpdated_Params
{
	struct FString*                                    AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool*                                              IsTalking;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              IsMuted;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.VoiceStateChange
struct UWBP_PartyModule_C_VoiceStateChange_Params
{
	EKSVoiceActivityAudioState*                        State;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Clicked
struct UWBP_PartyModule_C_Handle_Player_Card_Clicked_Params
{
	class UWBP_player_card_module_C**                  Selected_Player_Card;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.Handle Player Card Back
struct UWBP_PartyModule_C_Handle_Player_Card_Back_Params
{
};

// Function WBP_PartyModule.WBP_PartyModule_C.HandlePartyLeaveVisibilityChange
struct UWBP_PartyModule_C_HandlePartyLeaveVisibilityChange_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.ExecuteUbergraph_WBP_PartyModule
struct UWBP_PartyModule_C_ExecuteUbergraph_WBP_PartyModule_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.OnPartyLeaveVisibilityChange__DelegateSignature
struct UWBP_PartyModule_C_OnPartyLeaveVisibilityChange__DelegateSignature_Params
{
	bool*                                              Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardBackButton__DelegateSignature
struct UWBP_PartyModule_C_OnPlayerCardBackButton__DelegateSignature_Params
{
};

// Function WBP_PartyModule.WBP_PartyModule_C.OnPlayerCardSelected__DelegateSignature
struct UWBP_PartyModule_C_OnPlayerCardSelected__DelegateSignature_Params
{
	class UWBP_player_card_module_C**                  Selected_Player_Card;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
