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

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Get outro timer
struct UReviveSelfOnActivateModInst_C_Get_outro_timer_Params
{
	class UAnimMontage**                               Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Outro_Duration_timer;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StopAnimationFromEvent
struct UReviveSelfOnActivateModInst_C_StopAnimationFromEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterAnimInst**                       CharAnimInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReactsToAnimationEvent
struct UReviveSelfOnActivateModInst_C_ReactsToAnimationEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426
struct UReviveSelfOnActivateModInst_C_OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426
struct UReviveSelfOnActivateModInst_C_OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnInterrupted_9E1EC10C43864E26E4E9E1B703588426
struct UReviveSelfOnActivateModInst_C_OnInterrupted_9E1EC10C43864E26E4E9E1B703588426_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnBlendOut_9E1EC10C43864E26E4E9E1B703588426
struct UReviveSelfOnActivateModInst_C_OnBlendOut_9E1EC10C43864E26E4E9E1B703588426_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnCompleted_9E1EC10C43864E26E4E9E1B703588426
struct UReviveSelfOnActivateModInst_C_OnCompleted_9E1EC10C43864E26E4E9E1B703588426_Params
{
	struct FName*                                      NotifyName;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MontageInstanceID;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.VO_Revive_Activate
struct UReviveSelfOnActivateModInst_C_VO_Revive_Activate_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackDownedEndSFX
struct UReviveSelfOnActivateModInst_C_StimPackDownedEndSFX_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateStandingSFX
struct UReviveSelfOnActivateModInst_C_StimPackActivateStandingSFX_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateDownedSFX
struct UReviveSelfOnActivateModInst_C_StimPackActivateDownedSFX_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Activate
struct UReviveSelfOnActivateModInst_C_SFX_Revive_Activate_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Complete
struct UReviveSelfOnActivateModInst_C_SFX_Revive_Complete_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackReviveCompleteSFX
struct UReviveSelfOnActivateModInst_C_StimPackReviveCompleteSFX_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.PlayAnimationFromEvent
struct UReviveSelfOnActivateModInst_C_PlayAnimationFromEvent_Params
{
	struct FName*                                      AnimEventName;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UKSCharacterAnimInst**                       CharAnimInstance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveBeginPlay
struct UReviveSelfOnActivateModInst_C_ReceiveBeginPlay_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnActivated
struct UReviveSelfOnActivateModInst_C_OnActivated_Params
{
	bool*                                              bActive;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveEndPlay
struct UReviveSelfOnActivateModInst_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.AdjustImmunityEffect
struct UReviveSelfOnActivateModInst_C_AdjustImmunityEffect_Params
{
	bool*                                              Active;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnSetup
struct UReviveSelfOnActivateModInst_C_OnSetup_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Stop
struct UReviveSelfOnActivateModInst_C_Brute_Strength_Effect_Stop_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Play Outro
struct UReviveSelfOnActivateModInst_C_Play_Outro_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Play
struct UReviveSelfOnActivateModInst_C_Brute_Strength_Effect_Play_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNewCharacter
struct UReviveSelfOnActivateModInst_C_OnNewCharacter_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnDeathStateChanged
struct UReviveSelfOnActivateModInst_C_OnDeathStateChanged_Params
{
};

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ExecuteUbergraph_ReviveSelfOnActivateModInst
struct UReviveSelfOnActivateModInst_C_ExecuteUbergraph_ReviveSelfOnActivateModInst_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
