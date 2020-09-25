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

// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Get outro timer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage**           Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Outro_Duration_timer           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::Get_outro_timer(class UAnimMontage** Montage, float* Outro_Duration_timer)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Get outro timer");

	UReviveSelfOnActivateModInst_C_Get_outro_timer_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Outro_Duration_timer != nullptr)
		*Outro_Duration_timer = params.Outro_Duration_timer;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StopAnimationFromEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  AnimEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSCharacterAnimInst**   CharAnimInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReviveSelfOnActivateModInst_C::StopAnimationFromEvent(struct FName* AnimEventName, class UKSCharacterAnimInst** CharAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StopAnimationFromEvent");

	UReviveSelfOnActivateModInst_C_StopAnimationFromEvent_Params params;
	params.AnimEventName = AnimEventName;
	params.CharAnimInstance = CharAnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReactsToAnimationEvent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  AnimEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReviveSelfOnActivateModInst_C::ReactsToAnimationEvent(struct FName* AnimEventName, int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReactsToAnimationEvent");

	UReviveSelfOnActivateModInst_C_ReactsToAnimationEvent_Params params;
	params.AnimEventName = AnimEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;

	return params.ReturnValue;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426");

	UReviveSelfOnActivateModInst_C_OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426");

	UReviveSelfOnActivateModInst_C_OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnInterrupted_9E1EC10C43864E26E4E9E1B703588426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::OnInterrupted_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnInterrupted_9E1EC10C43864E26E4E9E1B703588426");

	UReviveSelfOnActivateModInst_C_OnInterrupted_9E1EC10C43864E26E4E9E1B703588426_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnBlendOut_9E1EC10C43864E26E4E9E1B703588426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::OnBlendOut_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnBlendOut_9E1EC10C43864E26E4E9E1B703588426");

	UReviveSelfOnActivateModInst_C_OnBlendOut_9E1EC10C43864E26E4E9E1B703588426_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnCompleted_9E1EC10C43864E26E4E9E1B703588426
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NotifyName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           MontageInstanceID              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::OnCompleted_9E1EC10C43864E26E4E9E1B703588426(struct FName* NotifyName, int* MontageInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnCompleted_9E1EC10C43864E26E4E9E1B703588426");

	UReviveSelfOnActivateModInst_C_OnCompleted_9E1EC10C43864E26E4E9E1B703588426_Params params;
	params.NotifyName = NotifyName;
	params.MontageInstanceID = MontageInstanceID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.VO_Revive_Activate
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::VO_Revive_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.VO_Revive_Activate");

	UReviveSelfOnActivateModInst_C_VO_Revive_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackDownedEndSFX
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackDownedEndSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackDownedEndSFX");

	UReviveSelfOnActivateModInst_C_StimPackDownedEndSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateStandingSFX
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackActivateStandingSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateStandingSFX");

	UReviveSelfOnActivateModInst_C_StimPackActivateStandingSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateDownedSFX
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackActivateDownedSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackActivateDownedSFX");

	UReviveSelfOnActivateModInst_C_StimPackActivateDownedSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Activate
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::SFX_Revive_Activate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Activate");

	UReviveSelfOnActivateModInst_C_SFX_Revive_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Complete
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::SFX_Revive_Complete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.SFX_Revive_Complete");

	UReviveSelfOnActivateModInst_C_SFX_Revive_Complete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackReviveCompleteSFX
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::StimPackReviveCompleteSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.StimPackReviveCompleteSFX");

	UReviveSelfOnActivateModInst_C_StimPackReviveCompleteSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.PlayAnimationFromEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName*                  AnimEventName                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSCharacterAnimInst**   CharAnimInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::PlayAnimationFromEvent(struct FName* AnimEventName, class UKSCharacterAnimInst** CharAnimInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.PlayAnimationFromEvent");

	UReviveSelfOnActivateModInst_C_PlayAnimationFromEvent_Params params;
	params.AnimEventName = AnimEventName;
	params.CharAnimInstance = CharAnimInstance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveBeginPlay");

	UReviveSelfOnActivateModInst_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnActivated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bActive                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::OnActivated(bool* bActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnActivated");

	UReviveSelfOnActivateModInst_C_OnActivated_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ReceiveEndPlay");

	UReviveSelfOnActivateModInst_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.AdjustImmunityEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::AdjustImmunityEffect(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.AdjustImmunityEffect");

	UReviveSelfOnActivateModInst_C_AdjustImmunityEffect_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnSetup
// (Event, Protected, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::OnSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnSetup");

	UReviveSelfOnActivateModInst_C_OnSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Stop
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::Brute_Strength_Effect_Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Stop");

	UReviveSelfOnActivateModInst_C_Brute_Strength_Effect_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Play Outro
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::Play_Outro()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Play Outro");

	UReviveSelfOnActivateModInst_C_Play_Outro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Play
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::Brute_Strength_Effect_Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.Brute Strength Effect Play");

	UReviveSelfOnActivateModInst_C_Brute_Strength_Effect_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNewCharacter
// (Event, Public, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::OnNewCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnNewCharacter");

	UReviveSelfOnActivateModInst_C_OnNewCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnDeathStateChanged
// (BlueprintCallable, BlueprintEvent)

void UReviveSelfOnActivateModInst_C::OnDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.OnDeathStateChanged");

	UReviveSelfOnActivateModInst_C_OnDeathStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ExecuteUbergraph_ReviveSelfOnActivateModInst
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UReviveSelfOnActivateModInst_C::ExecuteUbergraph_ReviveSelfOnActivateModInst(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C.ExecuteUbergraph_ReviveSelfOnActivateModInst");

	UReviveSelfOnActivateModInst_C_ExecuteUbergraph_ReviveSelfOnActivateModInst_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
