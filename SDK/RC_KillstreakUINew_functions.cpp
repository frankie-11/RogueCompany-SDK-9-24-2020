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

// Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.SetNPEGuidedCalloutSeen
// (Final, Native, Public)
// Parameters:
// EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene             (Parm, ZeroConstructor, IsPlainOldData)

void UGuidedMenuCalloutsViewRedirector::SetNPEGuidedCalloutSeen(EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.SetNPEGuidedCalloutSeen");

	UGuidedMenuCalloutsViewRedirector_SetNPEGuidedCalloutSeen_Params params;
	params.GuidedCalloutScene = GuidedCalloutScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.HasSeenNPEGuidedCallout
// (Final, Native, Public)
// Parameters:
// EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGuidedMenuCalloutsViewRedirector::HasSeenNPEGuidedCallout(EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.GuidedMenuCalloutsViewRedirector.HasSeenNPEGuidedCallout");

	UGuidedMenuCalloutsViewRedirector_HasSeenNPEGuidedCallout_Params params;
	params.GuidedCalloutScene = GuidedCalloutScene;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.UnbindFromViewportSizeChange
// (Final, Native, Public, BlueprintCallable)

void UKSWidget::UnbindFromViewportSizeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.UnbindFromViewportSizeChange");

	UKSWidget_UnbindFromViewportSizeChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.TriggerGlobalInvalidate
// (Final, Native, Public, BlueprintCallable)

void UKSWidget::TriggerGlobalInvalidate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.TriggerGlobalInvalidate");

	UKSWidget_TriggerGlobalInvalidate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.StopTickAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSWidget::StopTickAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.StopTickAnimation");

	UKSWidget_StopTickAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.SkipToEndTickAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSWidget::SkipToEndTickAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.SkipToEndTickAnimation");

	UKSWidget_SkipToEndTickAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.SetAllAnimationsPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float*                         PlaybackSpeed                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSWidget::SetAllAnimationsPlaybackSpeed(float* PlaybackSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.SetAllAnimationsPlaybackSpeed");

	UKSWidget_SetAllAnimationsPlaybackSpeed_Params params;
	params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.ResumeTickAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSWidget::ResumeTickAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.ResumeTickAnimation");

	UKSWidget_ResumeTickAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.RemoveTickAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSWidget::RemoveTickAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.RemoveTickAnimation");

	UKSWidget_RemoveTickAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.PlayTickAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSWidget::PlayTickAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.PlayTickAnimation");

	UKSWidget_PlayTickAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.PauseTickAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSWidget::PauseTickAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.PauseTickAnimation");

	UKSWidget_PauseTickAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.IsInKillCamPlayback
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSWidget::IsInKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.IsInKillCamPlayback");

	UKSWidget_IsInKillCamPlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UKSWidget::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.InitializeTickAnimations");

	UKSWidget_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.GetTickAnimationInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTickAnimationParams    OutAnimParams                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSWidget::GetTickAnimationInfo(struct FName* AnimName, struct FTickAnimationParams* OutAnimParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetTickAnimationInfo");

	UKSWidget_GetTickAnimationInfo_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAnimParams != nullptr)
		*OutAnimParams = params.OutAnimParams;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.GetNormalOwningPlayer
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UKSWidget::GetNormalOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetNormalOwningPlayer");

	UKSWidget_GetNormalOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.GetKillCamSpectatorController
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UKSWidget::GetKillCamSpectatorController()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetKillCamSpectatorController");

	UKSWidget_GetKillCamSpectatorController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.GetActivePlayerController
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UKSWidget::GetActivePlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.GetActivePlayerController");

	UKSWidget_GetActivePlayerController_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWidget.BlueprintPrepareKillCamPlayback
// (Event, Public, BlueprintEvent)

void UKSWidget::BlueprintPrepareKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.BlueprintPrepareKillCamPlayback");

	UKSWidget_BlueprintPrepareKillCamPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.BlueprintFinishKillCamPlayback
// (Event, Public, BlueprintEvent)

void UKSWidget::BlueprintFinishKillCamPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.BlueprintFinishKillCamPlayback");

	UKSWidget_BlueprintFinishKillCamPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.BindToViewportSizeChange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        InViewportEvent                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSWidget::BindToViewportSizeChange(struct FScriptDelegate* InViewportEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.BindToViewportSizeChange");

	UKSWidget_BindToViewportSizeChange_Params params;
	params.InViewportEvent = InViewportEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWidget.AddTickAnimation
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        UpdateEvent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate*        FinishedEvent                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSWidget::AddTickAnimation(struct FName* AnimName, float* Duration, struct FScriptDelegate* UpdateEvent, struct FScriptDelegate* FinishedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWidget.AddTickAnimation");

	UKSWidget_AddTickAnimation_Params params;
	params.AnimName = AnimName;
	params.Duration = Duration;
	params.UpdateEvent = UpdateEvent;
	params.FinishedEvent = FinishedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAccoladeQueueWidget.Queue
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<struct FAccoladeEventEntry>* Accolades                      (Parm, ZeroConstructor)

void UKSAccoladeQueueWidget::Queue(TArray<struct FAccoladeEventEntry>* Accolades)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.Queue");

	UKSAccoladeQueueWidget_Queue_Params params;
	params.Accolades = Accolades;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAccoladeQueueWidget.OnAccoladeRemovedFromScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FAccoladeDisplayInfo*   AccoladeRemoved                (Parm)

void UKSAccoladeQueueWidget::OnAccoladeRemovedFromScreen(struct FAccoladeDisplayInfo* AccoladeRemoved)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.OnAccoladeRemovedFromScreen");

	UKSAccoladeQueueWidget_OnAccoladeRemovedFromScreen_Params params;
	params.AccoladeRemoved = AccoladeRemoved;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAccoladeQueueWidget.GetNext
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAccoladeDisplayInfo    Accolade                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAccoladeQueueWidget::GetNext(struct FAccoladeDisplayInfo* Accolade)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.GetNext");

	UKSAccoladeQueueWidget_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accolade != nullptr)
		*Accolade = params.Accolade;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAccoladeQueueWidget.ClearAccoladeQueue
// (Final, Native, Protected, BlueprintCallable)

void UKSAccoladeQueueWidget::ClearAccoladeQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAccoladeQueueWidget.ClearAccoladeQueue");

	UKSAccoladeQueueWidget_ClearAccoladeQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAcquisitionModal.SetupBindings
// (Final, Native, Public, BlueprintCallable)

void UKSAcquisitionModal::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAcquisitionModal.SetupBindings");

	UKSAcquisitionModal_SetupBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAcquisitionModal.HandleShowAcquisitionModal
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        pItem                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSAcquisitionModal::HandleShowAcquisitionModal(class UPUMG_StoreItem** pItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAcquisitionModal.HandleShowAcquisitionModal");

	UKSAcquisitionModal_HandleShowAcquisitionModal_Params params;
	params.pItem = pItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAcquisitionModal.GetAcquisitionManager
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPUMG_AcquisitionManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_AcquisitionManager* UKSAcquisitionModal::GetAcquisitionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAcquisitionModal.GetAcquisitionManager");

	UKSAcquisitionModal_GetAcquisitionManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnWidget.SetPlayerStateUIRelevanceChanged
// (Native, Event, Protected, BlueprintEvent)

void UKSPawnWidget::SetPlayerStateUIRelevanceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.SetPlayerStateUIRelevanceChanged");

	UKSPawnWidget_SetPlayerStateUIRelevanceChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.SetPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AKSCharacter**           NewPawn                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSPawnWidget::SetPawn(class AKSCharacter** NewPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.SetPawn");

	UKSPawnWidget_SetPawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.PreClearPlayerState
// (Native, Event, Protected, BlueprintEvent)

void UKSPawnWidget::PreClearPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PreClearPlayerState");

	UKSPawnWidget_PreClearPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.PreClearPawn
// (Native, Event, Protected, BlueprintEvent)

void UKSPawnWidget::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PreClearPawn");

	UKSPawnWidget_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.PostSetPlayerState
// (Native, Event, Protected, BlueprintEvent)

void UKSPawnWidget::PostSetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PostSetPlayerState");

	UKSPawnWidget_PostSetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.PostSetPawn
// (Native, Event, Protected, BlueprintEvent)

void UKSPawnWidget::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.PostSetPawn");

	UKSPawnWidget_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.OnBoundPlayerStateDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor**                 DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UKSPawnWidget::OnBoundPlayerStateDestroyed(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.OnBoundPlayerStateDestroyed");

	UKSPawnWidget_OnBoundPlayerStateDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.OnBoundPawnDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor**                 DestroyedActor                 (Parm, ZeroConstructor, IsPlainOldData)

void UKSPawnWidget::OnBoundPawnDestroyed(class AActor** DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.OnBoundPawnDestroyed");

	UKSPawnWidget_OnBoundPawnDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnWidget.GetPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSPlayerState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSPlayerState* UKSPawnWidget::GetPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.GetPlayerState");

	UKSPawnWidget_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnWidget.GetPawnBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSCharacterBase*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSCharacterBase* UKSPawnWidget::GetPawnBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.GetPawnBase");

	UKSPawnWidget_GetPawnBase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnWidget.GetPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSCharacter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSCharacter* UKSPawnWidget::GetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnWidget.GetPawn");

	UKSPawnWidget_GetPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnInventoryWidget.RemoveWidgetFor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSWeaponComponent**     InWeaponComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPawnInventoryWidget::RemoveWidgetFor(class UKSWeaponComponent** InWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.RemoveWidgetFor");

	UKSPawnInventoryWidget_RemoveWidgetFor_Params params;
	params.InWeaponComponent = InWeaponComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnInventoryWidget.GetWidgetForWeaponComponent
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSWeaponComponent**     InWeaponComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UKSWeaponComponentWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSWeaponComponentWidget* UKSPawnInventoryWidget::GetWidgetForWeaponComponent(class UKSWeaponComponent** InWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.GetWidgetForWeaponComponent");

	UKSPawnInventoryWidget_GetWidgetForWeaponComponent_Params params;
	params.InWeaponComponent = InWeaponComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentRemoved
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     RemovedEquipment               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSPawnInventoryWidget::EquipmentRemoved(class UKSWeaponComponent** RemovedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentRemoved");

	UKSPawnInventoryWidget_EquipmentRemoved_Params params;
	params.RemovedEquipment = RemovedEquipment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentEndActive
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     InactiveEquipment              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSPawnInventoryWidget::EquipmentEndActive(class UKSWeaponComponent** InactiveEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentEndActive");

	UKSPawnInventoryWidget_EquipmentEndActive_Params params;
	params.InactiveEquipment = InactiveEquipment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentBecomeActive
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     ActiveEquipment                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSPawnInventoryWidget::EquipmentBecomeActive(class UKSWeaponComponent** ActiveEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentBecomeActive");

	UKSPawnInventoryWidget_EquipmentBecomeActive_Params params;
	params.ActiveEquipment = ActiveEquipment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnInventoryWidget.EquipmentAdded
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UKSWeaponComponent**     AddedEquipment                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSPawnInventoryWidget::EquipmentAdded(class UKSWeaponComponent** AddedEquipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.EquipmentAdded");

	UKSPawnInventoryWidget_EquipmentAdded_Params params;
	params.AddedEquipment = AddedEquipment;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPawnInventoryWidget.CreateWeaponComponentWidgetFor
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponComponent**     InWeaponComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UClass**                 WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      OwningPlayer                   (Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponComponentWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSWeaponComponentWidget* UKSPawnInventoryWidget::CreateWeaponComponentWidgetFor(class UObject** WorldContextObject, class UKSWeaponComponent** InWeaponComponent, class UClass** WidgetClass, class APlayerController** OwningPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPawnInventoryWidget.CreateWeaponComponentWidgetFor");

	UKSPawnInventoryWidget_CreateWeaponComponentWidgetFor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InWeaponComponent = InWeaponComponent;
	params.WidgetClass = WidgetClass;
	params.OwningPlayer = OwningPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSActiveWeaponComponentWidget.PreClearActiveWeaponComponent
// (Native, Event, Protected, BlueprintEvent)

void UKSActiveWeaponComponentWidget::PreClearActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActiveWeaponComponentWidget.PreClearActiveWeaponComponent");

	UKSActiveWeaponComponentWidget_PreClearActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSActiveWeaponComponentWidget.PostSetActiveWeaponComponent
// (Native, Event, Protected, BlueprintEvent)

void UKSActiveWeaponComponentWidget::PostSetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActiveWeaponComponentWidget.PostSetActiveWeaponComponent");

	UKSActiveWeaponComponentWidget_PostSetActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSActiveWeaponComponentWidget.GetActiveWeaponComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSWeaponComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSWeaponComponent* UKSActiveWeaponComponentWidget::GetActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActiveWeaponComponentWidget.GetActiveWeaponComponent");

	UKSActiveWeaponComponentWidget_GetActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSActivity_ViewRedirector.GetRelevantActivityManager
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UKSGameInstance**        GameInstance                   (Parm, ZeroConstructor, IsPlainOldData)
// class UKSActivityManagerBase*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSActivityManagerBase* UKSActivity_ViewRedirector::GetRelevantActivityManager(class UKSGameInstance** GameInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSActivity_ViewRedirector.GetRelevantActivityManager");

	UKSActivity_ViewRedirector_GetRelevantActivityManager_Params params;
	params.GameInstance = GameInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAimAssistDebugWidget.GetOwningKSPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSPlayerController*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSPlayerController* UKSAimAssistDebugWidget::GetOwningKSPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAimAssistDebugWidget.GetOwningKSPlayer");

	UKSAimAssistDebugWidget_GetOwningKSPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAimAssistDebugWidget.GetAimAssistComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSAimAssistComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSAimAssistComponent* UKSAimAssistDebugWidget::GetAimAssistComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAimAssistDebugWidget.GetAimAssistComponent");

	UKSAimAssistDebugWidget_GetAimAssistComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.UpdateScreenRegion
// (Final, Native, Public, BlueprintCallable)

void UKSMapIconWidgetBase::UpdateScreenRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.UpdateScreenRegion");

	UKSMapIconWidgetBase_UpdateScreenRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMetersAway
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           Meters                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::UpdateMetersAway(int* Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.UpdateMetersAway");

	UKSMapIconWidgetBase_UpdateMetersAway_Params params;
	params.Meters = Meters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.UpdateMeetsHeightThreshold
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHeight                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDepth                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::UpdateMeetsHeightThreshold(bool* bHeight, bool* bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.UpdateMeetsHeightThreshold");

	UKSMapIconWidgetBase_UpdateMeetsHeightThreshold_Params params;
	params.bHeight = bHeight;
	params.bDepth = bDepth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.Update
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UKSMapIconWidgetBase::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.Update");

	UKSMapIconWidgetBase_Update_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateHover
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMapIconWidgetBase::ShouldUpdateHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdateHover");

	UKSMapIconWidgetBase_ShouldUpdateHover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMapIconWidgetBase::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.ShouldUpdate");

	UKSMapIconWidgetBase_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.SetScreenRegion
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion*       ScreenRegion                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::SetScreenRegion(EIconMarkerScreenRegion* ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.SetScreenRegion");

	UKSMapIconWidgetBase_SetScreenRegion_Params params;
	params.ScreenRegion = ScreenRegion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.SetLifeSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InLifespan                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::SetLifeSpan(float* InLifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.SetLifeSpan");

	UKSMapIconWidgetBase_SetLifeSpan_Params params;
	params.InLifespan = InLifespan;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.SetArrowAngle
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::SetArrowAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.SetArrowAngle");

	UKSMapIconWidgetBase_SetArrowAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnUnhoverTimerComplete
// (Final, Native, Private)

void UKSMapIconWidgetBase::OnUnhoverTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnUnhoverTimerComplete");

	UKSMapIconWidgetBase_OnUnhoverTimerComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverTimerComplete
// (Final, Native, Private)

void UKSMapIconWidgetBase::OnHoverTimerComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnHoverTimerComplete");

	UKSMapIconWidgetBase_OnHoverTimerComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnHoverStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EIconHoverState*               NewHoverState                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::OnHoverStateChanged(EIconHoverState* NewHoverState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnHoverStateChanged");

	UKSMapIconWidgetBase_OnHoverStateChanged_Params params;
	params.NewHoverState = NewHoverState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.OnAssociatedActorDestroyed
// (Final, Native, Private)
// Parameters:
// class AActor**                 Actor                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::OnAssociatedActorDestroyed(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.OnAssociatedActorDestroyed");

	UKSMapIconWidgetBase_OnAssociatedActorDestroyed_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapIconWidgetBase.IsScreenRegion
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           InsideCenter                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           InsideMargins                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::IsScreenRegion(bool* InsideCenter, bool* InsideMargins)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.IsScreenRegion");

	UKSMapIconWidgetBase_IsScreenRegion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InsideCenter != nullptr)
		*InsideCenter = params.InsideCenter;
	if (InsideMargins != nullptr)
		*InsideMargins = params.InsideMargins;
}


// Function KillstreakUINew.KSMapIconWidgetBase.IsInCenteredScreenRect
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         PositionX                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PositionY                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XMargin                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YMargin                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMapIconWidgetBase::IsInCenteredScreenRect(float* PositionX, float* PositionY, float* XMargin, float* YMargin)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.IsInCenteredScreenRect");

	UKSMapIconWidgetBase_IsInCenteredScreenRect_Params params;
	params.PositionX = PositionX;
	params.PositionY = PositionY;
	params.XMargin = XMargin;
	params.YMargin = YMargin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.IsHovering
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMapIconWidgetBase::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.IsHovering");

	UKSMapIconWidgetBase_IsHovering_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldYaw
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSMapIconWidgetBase::GetWorldYaw()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetWorldYaw");

	UKSMapIconWidgetBase_GetWorldYaw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetWorldPosition
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UKSMapIconWidgetBase::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetWorldPosition");

	UKSMapIconWidgetBase_GetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetHoverState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EIconHoverState                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EIconHoverState UKSMapIconWidgetBase::GetHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetHoverState");

	UKSMapIconWidgetBase_GetHoverState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetEdgeArrowAngleBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSMapIconWidgetBase::GetEdgeArrowAngleBase(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetEdgeArrowAngleBase");

	UKSMapIconWidgetBase_GetEdgeArrowAngleBase_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetDistanceToIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSMapIconWidgetBase::GetDistanceToIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetDistanceToIcon");

	UKSMapIconWidgetBase_GetDistanceToIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapIconWidgetBase.GetArrowPosition
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// bool*                          IsIconVisible                  (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ArrowPosition                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKSMapIconWidgetBase::GetArrowPosition(bool* IsIconVisible, float* Angle, struct FVector2D* ArrowPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapIconWidgetBase.GetArrowPosition");

	UKSMapIconWidgetBase_GetArrowPosition_Params params;
	params.IsIconVisible = IsIconVisible;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArrowPosition != nullptr)
		*ArrowPosition = params.ArrowPosition;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetSelfPingIcon
// (Event, Public, BlueprintEvent)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::View_SetSelfPingIcon(EPingType* PingType, EPingMessage* PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetSelfPingIcon");

	UKSAllyMarkerWidget_View_SetSelfPingIcon_Params params;
	params.PingType = PingType;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetRevivePercent
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         PercentValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::View_SetRevivePercent(float* PercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetRevivePercent");

	UKSAllyMarkerWidget_View_SetRevivePercent_Params params;
	params.PercentValue = PercentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetNameText
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  NameText                       (ConstParm, Parm, OutParm, ReferenceParm)

void UKSAllyMarkerWidget::View_SetNameText(struct FText* NameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetNameText");

	UKSAllyMarkerWidget_View_SetNameText_Params params;
	params.NameText = NameText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetMode
// (Event, Public, BlueprintEvent)
// Parameters:
// EAllyMarkerState*              AllyMarkerState                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HasBomb                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HasSelfPing                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::View_SetMode(EAllyMarkerState* AllyMarkerState, bool* HasBomb, bool* HasSelfPing)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetMode");

	UKSAllyMarkerWidget_View_SetMode_Params params;
	params.AllyMarkerState = AllyMarkerState;
	params.HasBomb = HasBomb;
	params.HasSelfPing = HasSelfPing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetJob
// (Event, Public, BlueprintEvent)
// Parameters:
// class UKSJobItem**             Job                            (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::View_SetJob(class UKSJobItem** Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetJob");

	UKSAllyMarkerWidget_View_SetJob_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_SetHealthPercent
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         PercentValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::View_SetHealthPercent(float* PercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_SetHealthPercent");

	UKSAllyMarkerWidget_View_SetHealthPercent_Params params;
	params.PercentValue = PercentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.View_AcknowledgeSelfPing
// (Event, Public, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         AcknowledingPlayer             (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::View_AcknowledgeSelfPing(class AKSPlayerState** AcknowledingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.View_AcknowledgeSelfPing");

	UKSAllyMarkerWidget_View_AcknowledgeSelfPing_Params params;
	params.AcknowledingPlayer = AcknowledingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.SetPlayerName
// (Final, Native, Protected)

void UKSAllyMarkerWidget::SetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.SetPlayerName");

	UKSAllyMarkerWidget_SetPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.IsOwningPlayer
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAllyMarkerWidget::IsOwningPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.IsOwningPlayer");

	UKSAllyMarkerWidget_IsOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleUIRelevantChanged
// (Final, Native, Protected)
// Parameters:
// class AKSPlayerState**         InPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::HandleUIRelevantChanged(class AKSPlayerState** InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleUIRelevantChanged");

	UKSAllyMarkerWidget_HandleUIRelevantChanged_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleRemoveSelfPing
// (Final, Native, Protected)
// Parameters:
// class AKSPlayerState**         PingingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::HandleRemoveSelfPing(class AKSPlayerState** PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleRemoveSelfPing");

	UKSAllyMarkerWidget_HandleRemoveSelfPing_Params params;
	params.PingingPlayer = PingingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDown
// (Final, Native, Protected)
// Parameters:
// struct FCombatEventInfo*       CombatEventInfo                (Parm)
// int*                           ExpBonus                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::HandlePlayerDown(struct FCombatEventInfo* CombatEventInfo, int* ExpBonus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDown");

	UKSAllyMarkerWidget_HandlePlayerDown_Params params;
	params.CombatEventInfo = CombatEventInfo;
	params.ExpBonus = ExpBonus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDeath
// (Final, Native, Protected)
// Parameters:
// struct FCombatEventInfo*       DeathInfo                      (Parm)

void UKSAllyMarkerWidget::HandlePlayerDeath(struct FCombatEventInfo* DeathInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandlePlayerDeath");

	UKSAllyMarkerWidget_HandlePlayerDeath_Params params;
	params.DeathInfo = DeathInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleOnJobChanged
// (Final, Native, Protected)

void UKSAllyMarkerWidget::HandleOnJobChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleOnJobChanged");

	UKSAllyMarkerWidget_HandleOnJobChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleChangeSelfPing
// (Final, Native, Protected)
// Parameters:
// class AKSPlayerState**         PingingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         AcknowledgingPlayer            (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::HandleChangeSelfPing(class AKSPlayerState** PingingPlayer, class AKSPlayerState** AcknowledgingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleChangeSelfPing");

	UKSAllyMarkerWidget_HandleChangeSelfPing_Params params;
	params.PingingPlayer = PingingPlayer;
	params.AcknowledgingPlayer = AcknowledgingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleBombStateChanged
// (Final, Native, Protected)
// Parameters:
// struct FKSNeutralBombState*    BombState                      (Parm)

void UKSAllyMarkerWidget::HandleBombStateChanged(struct FKSNeutralBombState* BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleBombStateChanged");

	UKSAllyMarkerWidget_HandleBombStateChanged_Params params;
	params.BombState = BombState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.HandleAddSelfPing
// (Final, Native, Protected)
// Parameters:
// class AKSPlayerState**         PingingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::HandleAddSelfPing(class AKSPlayerState** PingingPlayer, EPingType* PingType, EPingMessage* PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.HandleAddSelfPing");

	UKSAllyMarkerWidget_HandleAddSelfPing_Params params;
	params.PingingPlayer = PingingPlayer;
	params.PingType = PingType;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByType
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAllyMarkerWidget::GetPingIconByType(EPingType* PingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByType");

	UKSAllyMarkerWidget_GetPingIconByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByMessage
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAllyMarkerWidget::GetPingIconByMessage(EPingMessage* PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetPingIconByMessage");

	UKSAllyMarkerWidget_GetPingIconByMessage_Params params;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetPingColorByType
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PingColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAllyMarkerWidget::GetPingColorByType(EPingType* PingType, struct FLinearColor* PingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetPingColorByType");

	UKSAllyMarkerWidget_GetPingColorByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PingColor != nullptr)
		*PingColor = params.PingColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.GetArrowPositionFromAngleBlueprint
// (Native, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UKSAllyMarkerWidget::GetArrowPositionFromAngleBlueprint(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.GetArrowPositionFromAngleBlueprint");

	UKSAllyMarkerWidget_GetArrowPositionFromAngleBlueprint_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.FindRowByType
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FContextualPingTypesRow ContextualPingTypesRow         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAllyMarkerWidget::FindRowByType(EPingType* PingType, struct FContextualPingTypesRow* ContextualPingTypesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.FindRowByType");

	UKSAllyMarkerWidget_FindRowByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextualPingTypesRow != nullptr)
		*ContextualPingTypesRow = params.ContextualPingTypesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.FindRowByMessage
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FContextualPingMessagesRow ContextualPingMessagesRow      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAllyMarkerWidget::FindRowByMessage(EPingMessage* PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.FindRowByMessage");

	UKSAllyMarkerWidget_FindRowByMessage_Params params;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextualPingMessagesRow != nullptr)
		*ContextualPingMessagesRow = params.ContextualPingMessagesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAllyMarkerWidget.ChangeOwnerContentVisibility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSAllyMarkerWidget::ChangeOwnerContentVisibility(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAllyMarkerWidget.ChangeOwnerContentVisibility");

	UKSAllyMarkerWidget_ChangeOwnerContentVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAlphaDisclaimer.LoadAlphaDisclaimerText
// (Final, Native, Static, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 SaveText                       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAlphaDisclaimer::STATIC_LoadAlphaDisclaimerText(struct FString* SaveText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAlphaDisclaimer.LoadAlphaDisclaimerText");

	UKSAlphaDisclaimer_LoadAlphaDisclaimerText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveText != nullptr)
		*SaveText = params.SaveText;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponWidget.SetOwningWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AKSWeapon**              InWeapon                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSWeaponWidget::SetOwningWeapon(class AKSWeapon** InWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.SetOwningWeapon");

	UKSWeaponWidget_SetOwningWeapon_Params params;
	params.InWeapon = InWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponWidget.PreClearWeapon
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponWidget::PreClearWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.PreClearWeapon");

	UKSWeaponWidget_PreClearWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponWidget.PostSetWeapon
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponWidget::PostSetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.PostSetWeapon");

	UKSWeaponWidget_PostSetWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponWidget.OtherWeaponUpdate
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponWidget::OtherWeaponUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.OtherWeaponUpdate");

	UKSWeaponWidget_OtherWeaponUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponWidget.OnOwningWeaponDestroyed
// (Final, Native, Protected)
// Parameters:
// class AActor**                 DestroyedWeapon                (Parm, ZeroConstructor, IsPlainOldData)

void UKSWeaponWidget::OnOwningWeaponDestroyed(class AActor** DestroyedWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.OnOwningWeaponDestroyed");

	UKSWeaponWidget_OnOwningWeaponDestroyed_Params params;
	params.DestroyedWeapon = DestroyedWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponWidget.GetOwningWeapon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSWeapon*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSWeapon* UKSWeaponWidget::GetOwningWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponWidget.GetOwningWeapon");

	UKSWeaponWidget_GetOwningWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAmmoWidget.StopReloading
// (Native, Event, Protected, BlueprintEvent)

void UKSAmmoWidget::StopReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAmmoWidget.StopReloading");

	UKSAmmoWidget_StopReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAmmoWidget.StartReloading
// (Native, Event, Protected, BlueprintEvent)

void UKSAmmoWidget::StartReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAmmoWidget.StartReloading");

	UKSAmmoWidget_StartReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAmmoWidget.OnAmmoChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int*                           OldInClip                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldClipSize                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldReserve                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewInClip                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewClipSize                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewReserve                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSAmmoWidget::OnAmmoChanged(int* OldInClip, int* OldClipSize, int* OldReserve, int* NewInClip, int* NewClipSize, int* NewReserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAmmoWidget.OnAmmoChanged");

	UKSAmmoWidget_OnAmmoChanged_Params params;
	params.OldInClip = OldInClip;
	params.OldClipSize = OldClipSize;
	params.OldReserve = OldReserve;
	params.NewInClip = NewInClip;
	params.NewClipSize = NewClipSize;
	params.NewReserve = NewReserve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAnnouncementQueuedMessageWidget.DisplayAnnouncement
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UKSAnnouncementQueuedMessageWidget::DisplayAnnouncement()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueuedMessageWidget.DisplayAnnouncement");

	UKSAnnouncementQueuedMessageWidget_DisplayAnnouncement_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAnnouncementQueueWidget.Queue
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FAnnouncementData*      Announcement                   (Parm)

void UKSAnnouncementQueueWidget::Queue(struct FAnnouncementData* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueueWidget.Queue");

	UKSAnnouncementQueueWidget_Queue_Params params;
	params.Announcement = Announcement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAnnouncementQueueWidget.GetNext
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAnnouncementData       Announcement                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSAnnouncementQueueWidget::GetNext(struct FAnnouncementData* Announcement)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueueWidget.GetNext");

	UKSAnnouncementQueueWidget_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Announcement != nullptr)
		*Announcement = params.Announcement;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSAnnouncementQueueWidget.ClearAnnoucementQueue
// (Final, Native, Protected, BlueprintCallable)

void UKSAnnouncementQueueWidget::ClearAnnoucementQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAnnouncementQueueWidget.ClearAnnoucementQueue");

	UKSAnnouncementQueueWidget_ClearAnnoucementQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAsyncImage.SetMaterialToUse
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic** InMID                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSAsyncImage::SetMaterialToUse(class UMaterialInstanceDynamic** InMID)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAsyncImage.SetMaterialToUse");

	UKSAsyncImage_SetMaterialToUse_Params params;
	params.InMID = InMID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAsyncImage.SetBrushFromTextureOnItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlatformInventoryItem** Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSAsyncImage::SetBrushFromTextureOnItem(class UPlatformInventoryItem** Item, bool* bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAsyncImage.SetBrushFromTextureOnItem");

	UKSAsyncImage_SetBrushFromTextureOnItem_Params params;
	params.Item = Item;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSAsyncImage.SetBrushFromItemIcon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPlatformInventoryItem** Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMatchSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSAsyncImage::SetBrushFromItemIcon(class UPlatformInventoryItem** Item, bool* bMatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSAsyncImage.SetBrushFromItemIcon");

	UKSAsyncImage_SetBrushFromItemIcon_Params params;
	params.Item = Item;
	params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.ViewedPawnInstigatedDamageNotify
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FCombatEventInfo*       DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UKSComponentReticleWidgetBase::ViewedPawnInstigatedDamageNotify(struct FCombatEventInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.ViewedPawnInstigatedDamageNotify");

	UKSComponentReticleWidgetBase_ViewedPawnInstigatedDamageNotify_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateReticleOffset
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         OffsetFromCenterScreen         (Parm, ZeroConstructor, IsPlainOldData)

void UKSComponentReticleWidgetBase::UpdateReticleOffset(float* OffsetFromCenterScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateReticleOffset");

	UKSComponentReticleWidgetBase_UpdateReticleOffset_Params params;
	params.OffsetFromCenterScreen = OffsetFromCenterScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateBlockedShotIcon
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// bool*                          IconVisible                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Translation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              IconScale                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSComponentReticleWidgetBase::UpdateBlockedShotIcon(bool* IconVisible, struct FVector2D* Translation, struct FVector2D* IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.UpdateBlockedShotIcon");

	UKSComponentReticleWidgetBase_UpdateBlockedShotIcon_Params params;
	params.IconVisible = IconVisible;
	params.Translation = Translation;
	params.IconScale = IconScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateReticleOffset
// (Final, Native, Protected)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSComponentReticleWidgetBase::CalculateReticleOffset(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateReticleOffset");

	UKSComponentReticleWidgetBase_CalculateReticleOffset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateBlockedShotIcon
// (Final, Native, Protected)

void UKSComponentReticleWidgetBase::CalculateBlockedShotIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSComponentReticleWidgetBase.CalculateBlockedShotIcon");

	UKSComponentReticleWidgetBase_CalculateBlockedShotIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.ContextActionData.TriggerContextAction
// (Final, Native, Public, BlueprintCallable)

void UContextActionData::TriggerContextAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.ContextActionData.TriggerContextAction");

	UContextActionData_TriggerContextAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.UpdateContextActions
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UContextActionData*>* ContextActions                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FName*                  CurrentRoute                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextBarWidget::UpdateContextActions(TArray<class UContextActionData*>* ContextActions, struct FName* CurrentRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.UpdateContextActions");

	UKSContextBarWidget_UpdateContextActions_Params params;
	params.ContextActions = ContextActions;
	params.CurrentRoute = CurrentRoute;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.SetPrompts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>*          ContextNames                   (Parm, ZeroConstructor)

void UKSContextBarWidget::SetPrompts(struct FName* Route, TArray<struct FName>* ContextNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetPrompts");

	UKSContextBarWidget_SetPrompts_Params params;
	params.Route = Route;
	params.ContextNames = ContextNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.SetPromptAction
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ContextName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        EventCallback                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSContextBarWidget::SetPromptAction(struct FName* Route, struct FName* ContextName, struct FScriptDelegate* EventCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetPromptAction");

	UKSContextBarWidget_SetPromptAction_Params params;
	params.Route = Route;
	params.ContextName = ContextName;
	params.EventCallback = EventCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.SetPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ContextName                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextBarWidget::SetPrompt(struct FName* Route, struct FName* ContextName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetPrompt");

	UKSContextBarWidget_SetPrompt_Params params;
	params.Route = Route;
	params.ContextName = ContextName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.SetOverrideRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextBarWidget::SetOverrideRoute(struct FName* Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetOverrideRoute");

	UKSContextBarWidget_SetOverrideRoute_Params params;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.SetActiveRoute
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextBarWidget::SetActiveRoute(struct FName* Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.SetActiveRoute");

	UKSContextBarWidget_SetActiveRoute_Params params;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.RefreshContextBar
// (Final, Native, Protected)

void UKSContextBarWidget::RefreshContextBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.RefreshContextBar");

	UKSContextBarWidget_RefreshContextBar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.OverrideKeyButtons
// (Final, Native, Protected)

void UKSContextBarWidget::OverrideKeyButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.OverrideKeyButtons");

	UKSContextBarWidget_OverrideKeyButtons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.GetCurrentContextRoute
// (Final, Native, Protected, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName UKSContextBarWidget::GetCurrentContextRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.GetCurrentContextRoute");

	UKSContextBarWidget_GetCurrentContextRoute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextBarWidget.ClearPromptByKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FKey*                   Key                            (Parm)

void UKSContextBarWidget::ClearPromptByKey(struct FName* Route, struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearPromptByKey");

	UKSContextBarWidget_ClearPromptByKey_Params params;
	params.Route = Route;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.ClearPrompt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  ContextName                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextBarWidget::ClearPrompt(struct FName* Route, struct FName* ContextName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearPrompt");

	UKSContextBarWidget_ClearPrompt_Params params;
	params.Route = Route;
	params.ContextName = ContextName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.ClearOverrideRoute
// (Final, Native, Public, BlueprintCallable)

void UKSContextBarWidget::ClearOverrideRoute()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearOverrideRoute");

	UKSContextBarWidget_ClearOverrideRoute_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextBarWidget.ClearAllPrompts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  Route                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextBarWidget::ClearAllPrompts(struct FName* Route)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextBarWidget.ClearAllPrompts");

	UKSContextBarWidget_ClearAllPrompts_Params params;
	params.Route = Route;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.SetupPingOnReady
// (Event, Public, BlueprintEvent)

void UKSContextualPingMarkerWidget::SetupPingOnReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.SetupPingOnReady");

	UKSContextualPingMarkerWidget_SetupPingOnReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.SetPingInfo
// (Final, Native, Public)
// Parameters:
// struct FPingInfo*              PingInfoVal                    (Parm)

void UKSContextualPingMarkerWidget::SetPingInfo(struct FPingInfo* PingInfoVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.SetPingInfo");

	UKSContextualPingMarkerWidget_SetPingInfo_Params params;
	params.PingInfoVal = PingInfoVal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingUnhovered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           PingId                         (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         PingingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextualPingMarkerWidget::OnPingUnhovered(int* PingId, class AKSPlayerState** PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingUnhovered");

	UKSContextualPingMarkerWidget_OnPingUnhovered_Params params;
	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingHovered
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           PingId                         (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         PingingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextualPingMarkerWidget::OnPingHovered(int* PingId, class AKSPlayerState** PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.OnPingHovered");

	UKSContextualPingMarkerWidget_OnPingHovered_Params params;
	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.OnInitializePing
// (Final, Native, Public, BlueprintCallable)

void UKSContextualPingMarkerWidget::OnInitializePing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.OnInitializePing");

	UKSContextualPingMarkerWidget_OnInitializePing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.IsInvisiblePingType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSContextualPingMarkerWidget::IsInvisiblePingType(EPingType* PingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.IsInvisiblePingType");

	UKSContextualPingMarkerWidget_IsInvisiblePingType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingRemoved
// (Native, Public)
// Parameters:
// int*                           PingId                         (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         PingingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextualPingMarkerWidget::HandleOnContextualPingRemoved(int* PingId, class AKSPlayerState** PingingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingRemoved");

	UKSContextualPingMarkerWidget_HandleOnContextualPingRemoved_Params params;
	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingChanged
// (Native, Public)
// Parameters:
// int*                           PingId                         (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         PingingPlayer                  (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         AcknowledgingPlayer            (Parm, ZeroConstructor, IsPlainOldData)

void UKSContextualPingMarkerWidget::HandleOnContextualPingChanged(int* PingId, class AKSPlayerState** PingingPlayer, class AKSPlayerState** AcknowledgingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.HandleOnContextualPingChanged");

	UKSContextualPingMarkerWidget_HandleOnContextualPingChanged_Params params;
	params.PingId = PingId;
	params.PingingPlayer = PingingPlayer;
	params.AcknowledgingPlayer = AcknowledgingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingLifeSpan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSContextualPingMarkerWidget::GetPingLifeSpan(EPingType* PingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingLifeSpan");

	UKSContextualPingMarkerWidget_GetPingLifeSpan_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByType
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSContextualPingMarkerWidget::GetPingIconByType(EPingType* PingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByType");

	UKSContextualPingMarkerWidget_GetPingIconByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSContextualPingMarkerWidget::GetPingIconByMessage(EPingMessage* PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingIconByMessage");

	UKSContextualPingMarkerWidget_GetPingIconByMessage_Params params;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingColorByType
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PingColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSContextualPingMarkerWidget::GetPingColorByType(EPingType* PingType, struct FLinearColor* PingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.GetPingColorByType");

	UKSContextualPingMarkerWidget_GetPingColorByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PingColor != nullptr)
		*PingColor = params.PingColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByType
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FContextualPingTypesRow ContextualPingTypesRow         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSContextualPingMarkerWidget::FindRowByType(EPingType* PingType, struct FContextualPingTypesRow* ContextualPingTypesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByType");

	UKSContextualPingMarkerWidget_FindRowByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextualPingTypesRow != nullptr)
		*ContextualPingTypesRow = params.ContextualPingTypesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByMessage
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FContextualPingMessagesRow ContextualPingMessagesRow      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSContextualPingMarkerWidget::FindRowByMessage(EPingMessage* PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSContextualPingMarkerWidget.FindRowByMessage");

	UKSContextualPingMarkerWidget_FindRowByMessage_Params params;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextualPingMessagesRow != nullptr)
		*ContextualPingMessagesRow = params.ContextualPingMessagesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.SetWingSuitAsset
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSWeaponAsset**         WingSuit                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSCustomizationSelection::SetWingSuitAsset(class UKSWeaponAsset** WingSuit)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.SetWingSuitAsset");

	UKSCustomizationSelection_SetWingSuitAsset_Params params;
	params.WingSuit = WingSuit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSCustomizationSelection.OnVendorLoaded
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   VendorIds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSCustomizationSelection::OnVendorLoaded(int* GroupId, TArray<int>* VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.OnVendorLoaded");

	UKSCustomizationSelection_OnVendorLoaded_Params params;
	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWingSuitItems
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UPUMG_StoreItem*> WingSuitSkinItems              (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSCustomizationSelection::GetWingSuitItems(TArray<class UPUMG_StoreItem*>* WingSuitSkinItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWingSuitItems");

	UKSCustomizationSelection_GetWingSuitItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WingSuitSkinItems != nullptr)
		*WingSuitSkinItems = params.WingSuitSkinItems;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWingSuitAsset
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSWeaponAsset*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSWeaponAsset* UKSCustomizationSelection::GetWingSuitAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWingSuitAsset");

	UKSCustomizationSelection_GetWingSuitAsset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWeaponSlotItems
// (Final, Native, Protected, HasOutParms)
// Parameters:
// EWeaponSlot*                   WeaponSlotType                 (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPUMG_StoreItem*> WeaponSkinItems                (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSCustomizationSelection::GetWeaponSlotItems(EWeaponSlot* WeaponSlotType, class UKSJobItem** JobItem, TArray<class UPUMG_StoreItem*>* WeaponSkinItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWeaponSlotItems");

	UKSCustomizationSelection_GetWeaponSlotItems_Params params;
	params.WeaponSlotType = WeaponSlotType;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WeaponSkinItems != nullptr)
		*WeaponSkinItems = params.WeaponSkinItems;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetWeaponItem
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// EWeaponSlot*                   WeaponSlotType                 (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponAsset*          Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSCustomizationSelection::GetWeaponItem(EWeaponSlot* WeaponSlotType, class UKSJobItem** JobItem, class UKSWeaponAsset** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetWeaponItem");

	UKSCustomizationSelection_GetWeaponItem_Params params;
	params.WeaponSlotType = WeaponSlotType;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetSkinItemsForJobItem
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPUMG_StoreItem*> JobSkinItems                   (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSCustomizationSelection::GetSkinItemsForJobItem(class UKSJobItem** JobItem, TArray<class UPUMG_StoreItem*>* JobSkinItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetSkinItemsForJobItem");

	UKSCustomizationSelection_GetSkinItemsForJobItem_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobSkinItems != nullptr)
		*JobSkinItems = params.JobSkinItems;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetRadialMenuItems
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UPUMG_StoreItem*> RadialMenuItems                (Parm, OutParm, ZeroConstructor)
// int*                           LootTableId                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSCustomizationSelection::GetRadialMenuItems(int* LootTableId, TArray<class UPUMG_StoreItem*>* RadialMenuItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetRadialMenuItems");

	UKSCustomizationSelection_GetRadialMenuItems_Params params;
	params.LootTableId = LootTableId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RadialMenuItems != nullptr)
		*RadialMenuItems = params.RadialMenuItems;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetItemsForSlot
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// EMercCosmeticSlot*             SlotType                       (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponSlot*                   WeaponSlotType                 (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPUMG_StoreItem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_StoreItem*> UKSCustomizationSelection::GetItemsForSlot(EMercCosmeticSlot* SlotType, EWeaponSlot* WeaponSlotType, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetItemsForSlot");

	UKSCustomizationSelection_GetItemsForSlot_Params params;
	params.SlotType = SlotType;
	params.WeaponSlotType = WeaponSlotType;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSCustomizationSelection.GetItemHelper
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSCustomizationSelection::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSCustomizationSelection.GetItemHelper");

	UKSCustomizationSelection_GetItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.TryConsumeOpenOnUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSDataSocialCategory::TryConsumeOpenOnUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.TryConsumeOpenOnUpdate");

	UKSDataSocialCategory_TryConsumeOpenOnUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.SetOpenOnUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSDataSocialCategory::SetOpenOnUpdate(bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.SetOpenOnUpdate");

	UKSDataSocialCategory_SetOpenOnUpdate_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSDataSocialCategory.SetMessageText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool*                          bProcessing                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  MessageText                    (ConstParm, Parm, OutParm, ReferenceParm)

void UKSDataSocialCategory::SetMessageText(bool* bProcessing, struct FText* MessageText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.SetMessageText");

	UKSDataSocialCategory_SetMessageText_Params params;
	params.bProcessing = bProcessing;
	params.MessageText = MessageText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSDataSocialCategory.SetHeaderText
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  Header                         (ConstParm, Parm, OutParm, ReferenceParm)

void UKSDataSocialCategory::SetHeaderText(struct FText* Header)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.SetHeaderText");

	UKSDataSocialCategory_SetHeaderText_Params params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSDataSocialCategory.Num
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSDataSocialCategory::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.Num");

	UKSDataSocialCategory_Num_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.IsProcessing
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSDataSocialCategory::IsProcessing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.IsProcessing");

	UKSDataSocialCategory_IsProcessing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.GetPlayerList
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSDataSocialPlayer*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSDataSocialPlayer*> UKSDataSocialCategory::GetPlayerList()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.GetPlayerList");

	UKSDataSocialCategory_GetPlayerList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.GetMessageText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSDataSocialCategory::GetMessageText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.GetMessageText");

	UKSDataSocialCategory_GetMessageText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.GetHeaderText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSDataSocialCategory::GetHeaderText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.GetHeaderText");

	UKSDataSocialCategory_GetHeaderText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialCategory.BP_GetSectionValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

unsigned char UKSDataSocialCategory::BP_GetSectionValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialCategory.BP_GetSectionValue");

	UKSDataSocialCategory_BP_GetSectionValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataSocialPlayer.KSSocialPlayerUpdate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSDataSocialPlayer::KSSocialPlayerUpdate__DelegateSignature(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataSocialPlayer.KSSocialPlayerUpdate__DelegateSignature");

	UKSDataSocialPlayer_KSSocialPlayerUpdate__DelegateSignature_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSDataSocialPlayer.IsValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSDataSocialPlayer::IsValid()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialPlayer.IsValid");

	UKSDataSocialPlayer_IsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataSocialPlayer.GetPlayerInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSPlayerInfo*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPlayerInfo* UKSDataSocialPlayer::GetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataSocialPlayer.GetPlayerInfo");

	UKSDataSocialPlayer_GetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDebugMenu.GetSubmenu
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FDebugMenuCommandInfo*  BaseCommand                    (Parm)
// TArray<struct FDebugMenuCommandInfo> Submenu                        (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSDebugMenu::GetSubmenu(struct FDebugMenuCommandInfo* BaseCommand, TArray<struct FDebugMenuCommandInfo>* Submenu)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDebugMenu.GetSubmenu");

	UKSDebugMenu_GetSubmenu_Params params;
	params.BaseCommand = BaseCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Submenu != nullptr)
		*Submenu = params.Submenu;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDebugMenu.GetSortedBaseDebugCommands
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FDebugMenuCommandInfo> SortedCommands                 (Parm, OutParm, ZeroConstructor)

void UKSDebugMenu::GetSortedBaseDebugCommands(TArray<struct FDebugMenuCommandInfo>* SortedCommands)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDebugMenu.GetSortedBaseDebugCommands");

	UKSDebugMenu_GetSortedBaseDebugCommands_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SortedCommands != nullptr)
		*SortedCommands = params.SortedCommands;
}


// Function KillstreakUINew.KSDebugMenu.GetParamTypeForSubCommand
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                BaseCommandString              (Parm, ZeroConstructor)
// EConsoleCommandParamType       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EConsoleCommandParamType UKSDebugMenu::GetParamTypeForSubCommand(struct FString* BaseCommandString)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDebugMenu.GetParamTypeForSubCommand");

	UKSDebugMenu_GetParamTypeForSubCommand_Params params;
	params.BaseCommandString = BaseCommandString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueuedMessageWidget.QueueMessage
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FText*                  Message                        (Parm)

void UKSQueuedMessageWidget::QueueMessage(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueuedMessageWidget.QueueMessage");

	UKSQueuedMessageWidget_QueueMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueuedMessageWidget.GetNextMessage
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   Message                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueuedMessageWidget::GetNextMessage(struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueuedMessageWidget.GetNextMessage");

	UKSQueuedMessageWidget_GetNextMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Message != nullptr)
		*Message = params.Message;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEliminationMessageWidget.QueueCombatMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FEliminationMessage*    CombatMessage                  (Parm)

void UKSEliminationMessageWidget::QueueCombatMessage(struct FEliminationMessage* CombatMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.QueueCombatMessage");

	UKSEliminationMessageWidget_QueueCombatMessage_Params params;
	params.CombatMessage = CombatMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDownReceived
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (Parm)

void UKSEliminationMessageWidget::OnPlayerDownReceived(struct FCombatEventInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDownReceived");

	UKSEliminationMessageWidget_OnPlayerDownReceived_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDeathReceived
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FCombatEventInfo*       EventInfo                      (Parm)

void UKSEliminationMessageWidget::OnPlayerDeathReceived(struct FCombatEventInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerDeathReceived");

	UKSEliminationMessageWidget_OnPlayerDeathReceived_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerAssistReceived
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAssistInfo*            EventInfo                      (Parm)

void UKSEliminationMessageWidget::OnPlayerAssistReceived(struct FAssistInfo* EventInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.OnPlayerAssistReceived");

	UKSEliminationMessageWidget_OnPlayerAssistReceived_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEliminationMessageWidget.IsViewedPlayerStateSelf
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState**           ViewedPlayerState              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSEliminationMessageWidget::IsViewedPlayerStateSelf(class APlayerState** ViewedPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.IsViewedPlayerStateSelf");

	UKSEliminationMessageWidget_IsViewedPlayerStateSelf_Params params;
	params.ViewedPlayerState = ViewedPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEliminationMessageWidget.IsViewedKillCamPlayerState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerState**           KillCamPlayerState             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSEliminationMessageWidget::IsViewedKillCamPlayerState(class APlayerState** KillCamPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.IsViewedKillCamPlayerState");

	UKSEliminationMessageWidget_IsViewedKillCamPlayerState_Params params;
	params.KillCamPlayerState = KillCamPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEliminationMessageWidget.GetNextCombatMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FEliminationMessage     CombatMessage                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSEliminationMessageWidget::GetNextCombatMessage(struct FEliminationMessage* CombatMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.GetNextCombatMessage");

	UKSEliminationMessageWidget_GetNextCombatMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CombatMessage != nullptr)
		*CombatMessage = params.CombatMessage;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEliminationMessageWidget.ClearCombatMessages
// (Final, Native, Public, BlueprintCallable)

void UKSEliminationMessageWidget::ClearCombatMessages()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEliminationMessageWidget.ClearCombatMessages");

	UKSEliminationMessageWidget_ClearCombatMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEMODataFactory.SetupTestData
// (Final, Native, Public)

void UKSEMODataFactory::SetupTestData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.SetupTestData");

	UKSEMODataFactory_SetupTestData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEMODataFactory.IsLocalPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSEMODataFactory::IsLocalPlayer(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.IsLocalPlayer");

	UKSEMODataFactory_IsLocalPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewards
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPlayerRewardsSummary*  PlayerRewardSummary            (Parm)
// bool*                          bFakeTestData                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSEMODataFactory::HandlePlayerRewards(struct FPlayerRewardsSummary* PlayerRewardSummary, bool* bFakeTestData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.HandlePlayerRewards");

	UKSEMODataFactory_HandlePlayerRewards_Params params;
	params.PlayerRewardSummary = PlayerRewardSummary;
	params.bFakeTestData = bFakeTestData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEMODataFactory.HandleEOMDetail
// (Final, Native, Public)

void UKSEMODataFactory::HandleEOMDetail()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.HandleEOMDetail");

	UKSEMODataFactory_HandleEOMDetail_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEMODataFactory.GetScoreboardStats
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScoreboardStats        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FScoreboardStats UKSEMODataFactory::GetScoreboardStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.GetScoreboardStats");

	UKSEMODataFactory_GetScoreboardStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.GetPlayerRewardsSummary
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FPlayerRewardsSummary   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPlayerRewardsSummary UKSEMODataFactory::GetPlayerRewardsSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.GetPlayerRewardsSummary");

	UKSEMODataFactory_GetPlayerRewardsSummary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.GetLastMatchQueueId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSEMODataFactory::GetLastMatchQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.GetLastMatchQueueId");

	UKSEMODataFactory_GetLastMatchQueueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.FindPlayerProgressionActivity
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UKSActivityInstance*     PlayerProgressionActivity      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSEMODataFactory::FindPlayerProgressionActivity(class UKSActivityInstance** PlayerProgressionActivity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.FindPlayerProgressionActivity");

	UKSEMODataFactory_FindPlayerProgressionActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerProgressionActivity != nullptr)
		*PlayerProgressionActivity = params.PlayerProgressionActivity;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSEMODataFactory.ComputeEOMResults
// (Final, Native, Public, BlueprintCallable)

void UKSEMODataFactory::ComputeEOMResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.ComputeEOMResults");

	UKSEMODataFactory_ComputeEOMResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSEMODataFactory.CalcPlayerProgression
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           XpEarned                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bFakeTestData                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSEMODataFactory::CalcPlayerProgression(int* XpEarned, bool* bFakeTestData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSEMODataFactory.CalcPlayerProgression");

	UKSEMODataFactory_CalcPlayerProgression_Params params;
	params.XpEarned = XpEarned;
	params.bFakeTestData = bFakeTestData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSExpDisplayWidget.QueueExpDisplays
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FExpDisplayInfo*        ExpInfo                        (Parm)

void UKSExpDisplayWidget::QueueExpDisplays(struct FExpDisplayInfo* ExpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.QueueExpDisplays");

	UKSExpDisplayWidget_QueueExpDisplays_Params params;
	params.ExpInfo = ExpInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSExpDisplayWidget.NativeHandleDisplayExpInfo
// (Native, Protected)

void UKSExpDisplayWidget::NativeHandleDisplayExpInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.NativeHandleDisplayExpInfo");

	UKSExpDisplayWidget_NativeHandleDisplayExpInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSExpDisplayWidget.GetNextExpDisplay
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FExpDisplayInfo         ExpInfo                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSExpDisplayWidget::GetNextExpDisplay(struct FExpDisplayInfo* ExpInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.GetNextExpDisplay");

	UKSExpDisplayWidget_GetNextExpDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExpInfo != nullptr)
		*ExpInfo = params.ExpInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSExpDisplayWidget.DisplayExpInfo
// (Native, Event, Protected, BlueprintEvent)

void UKSExpDisplayWidget::DisplayExpInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSExpDisplayWidget.DisplayExpInfo");

	UKSExpDisplayWidget_DisplayExpInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetTargetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSFloatTickLerpWidgetBase::SetTargetValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetTargetValue");

	UKSFloatTickLerpWidgetBase_SetTargetValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UKSFloatTickLerpWidgetBase::SetLerpTime(float* Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpTime");

	UKSFloatTickLerpWidgetBase_SetLerpTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpPower
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Power                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSFloatTickLerpWidgetBase::SetLerpPower(float* Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.SetLerpPower");

	UKSFloatTickLerpWidgetBase_SetLerpPower_Params params;
	params.Power = Power;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.IsLerping
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSFloatTickLerpWidgetBase::IsLerping()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.IsLerping");

	UKSFloatTickLerpWidgetBase_IsLerping_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.GetCurrentValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSFloatTickLerpWidgetBase::GetCurrentValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.GetCurrentValue");

	UKSFloatTickLerpWidgetBase_GetCurrentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.ForceCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSFloatTickLerpWidgetBase::ForceCurrentValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.ForceCurrentValue");

	UKSFloatTickLerpWidgetBase_ForceCurrentValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFloatTickLerpWidgetBase.DisplayForValue
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSFloatTickLerpWidgetBase::DisplayForValue(float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFloatTickLerpWidgetBase.DisplayForValue");

	UKSFloatTickLerpWidgetBase_DisplayForValue_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFriendDataFactory.UIX_ShowExternalProfile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSFriendDataFactory::UIX_ShowExternalProfile(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.UIX_ShowExternalProfile");

	UKSFriendDataFactory_UIX_ShowExternalProfile_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFriendDataFactory.OnEOMRewardsReceived
// (Final, Native, Protected)
// Parameters:
// struct FPlayerRewardsSummary*  PlayerRewardsSummary           (Parm)
// struct FScoreboardStats*       ScoreboardStats                (Parm)

void UKSFriendDataFactory::OnEOMRewardsReceived(struct FPlayerRewardsSummary* PlayerRewardsSummary, struct FScoreboardStats* ScoreboardStats)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.OnEOMRewardsReceived");

	UKSFriendDataFactory_OnEOMRewardsReceived_Params params;
	params.PlayerRewardsSummary = PlayerRewardsSummary;
	params.ScoreboardStats = ScoreboardStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction KillstreakUINew.KSFriendDataFactory.KSUpdateRecentlyPlayedPlayers__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UKSFriendDataFactory**   Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSFriendDataFactory::KSUpdateRecentlyPlayedPlayers__DelegateSignature(class UKSFriendDataFactory** Source)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSFriendDataFactory.KSUpdateRecentlyPlayedPlayers__DelegateSignature");

	UKSFriendDataFactory_KSUpdateRecentlyPlayedPlayers__DelegateSignature_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSFriendDataFactory.GetSuggestedFriends_Info
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetSuggestedFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetSuggestedFriends_Info");

	UKSFriendDataFactory_GetSuggestedFriends_Info_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetPlayersPlayedWithThisClientSession_Info
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UKSPlayerInfo*>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSPlayerInfo*> UKSFriendDataFactory::GetPlayersPlayedWithThisClientSession_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetPlayersPlayedWithThisClientSession_Info");

	UKSFriendDataFactory_GetPlayersPlayedWithThisClientSession_Info_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetPendingFriends_Info
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetPendingFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetPendingFriends_Info");

	UKSFriendDataFactory_GetPendingFriends_Info_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetOnlineFriends_Info
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetOnlineFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetOnlineFriends_Info");

	UKSFriendDataFactory_GetOnlineFriends_Info_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetFriends_Info
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetFriends_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetFriends_Info");

	UKSFriendDataFactory_GetFriends_Info_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSFriendDataFactory.GetFriendRequests_Info
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UKSFriendDataFactory::GetFriendRequests_Info()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSFriendDataFactory.GetFriendRequests_Info");

	UKSFriendDataFactory_GetFriendRequests_Info_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.UpdateIcon
// (Final, Native, Protected)
// Parameters:
// class UKSMapIconWidgetBase**   Icon                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSMapWidgetBase::UpdateIcon(class UKSMapIconWidgetBase** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.UpdateIcon");

	UKSMapWidgetBase_UpdateIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderCoords
// (Native, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D*              MapCoords                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UKSMapWidgetBase::ToIconRenderCoords(struct FVector2D* MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.ToIconRenderCoords");

	UKSMapWidgetBase_ToIconRenderCoords_Params params;
	params.MapCoords = MapCoords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.ToIconRenderAngle
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float*                         PlayerAngle                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSMapWidgetBase::ToIconRenderAngle(float* PlayerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.ToIconRenderAngle");

	UKSMapWidgetBase_ToIconRenderAngle_Params params;
	params.PlayerAngle = PlayerAngle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.TickCachedTransform
// (Final, Native, Public, BlueprintCallable)

void UKSMapWidgetBase::TickCachedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.TickCachedTransform");

	UKSMapWidgetBase_TickCachedTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapWidgetBase.SetScrambleState
// (Final, Native, Protected)
// Parameters:
// bool*                          Scrambled                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapWidgetBase::SetScrambleState(bool* Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.SetScrambleState");

	UKSMapWidgetBase_SetScrambleState_Params params;
	params.Scrambled = Scrambled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapWidgetBase.OnScrambleStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Scrambled                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapWidgetBase::OnScrambleStateChanged(bool* Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.OnScrambleStateChanged");

	UKSMapWidgetBase_OnScrambleStateChanged_Params params;
	params.Scrambled = Scrambled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapWidgetBase.OnReceiveDisplayWidgetInfo
// (Native, Public)
// Parameters:
// struct FDisplayInfo*           DisplayInfo                    (Parm)

void UKSMapWidgetBase::OnReceiveDisplayWidgetInfo(struct FDisplayInfo* DisplayInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.OnReceiveDisplayWidgetInfo");

	UKSMapWidgetBase_OnReceiveDisplayWidgetInfo_Params params;
	params.DisplayInfo = DisplayInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapWidgetBase.OnGameStateSet
// (Final, Native, Public)
// Parameters:
// class AGameStateBase**         GameStateBase                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSMapWidgetBase::OnGameStateSet(class AGameStateBase** GameStateBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.OnGameStateSet");

	UKSMapWidgetBase_OnGameStateSet_Params params;
	params.GameStateBase = GameStateBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMapWidgetBase.IsOnMap
// (Native, Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D*              MapCoords                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMapWidgetBase::IsOnMap(struct FVector2D* MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.IsOnMap");

	UKSMapWidgetBase_IsOnMap_Params params;
	params.MapCoords = MapCoords;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.GetDistanceToIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSMapIconWidgetBase**   Icon                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSMapWidgetBase::GetDistanceToIcon(class UKSMapIconWidgetBase** Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.GetDistanceToIcon");

	UKSMapWidgetBase_GetDistanceToIcon_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.GetCachedViewedPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APawn*                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APawn* UKSMapWidgetBase::GetCachedViewedPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.GetCachedViewedPawn");

	UKSMapWidgetBase_GetCachedViewedPawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.GetCachedTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform              ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FTransform UKSMapWidgetBase::GetCachedTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.GetCachedTransform");

	UKSMapWidgetBase_GetCachedTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMapWidgetBase.CreateNewIconWidget
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// class UClass**                 WidgetClass                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UniqueId                       (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         CreatingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// EDisplayType*                  ParentMapDisplayType           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 AssociatedActor                (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                AssociatedObject               (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DefaultLocation                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Lifespan                       (Parm, ZeroConstructor, IsPlainOldData)
// class UKSMapIconWidgetBase*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSMapIconWidgetBase* UKSMapWidgetBase::CreateNewIconWidget(class UClass** WidgetClass, int* UniqueId, class AKSPlayerState** CreatingPlayer, EDisplayType* ParentMapDisplayType, class AActor** AssociatedActor, class UObject** AssociatedObject, struct FVector* DefaultLocation, float* Lifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMapWidgetBase.CreateNewIconWidget");

	UKSMapWidgetBase_CreateNewIconWidget_Params params;
	params.WidgetClass = WidgetClass;
	params.UniqueId = UniqueId;
	params.CreatingPlayer = CreatingPlayer;
	params.ParentMapDisplayType = ParentMapDisplayType;
	params.AssociatedActor = AssociatedActor;
	params.AssociatedObject = AssociatedObject;
	params.DefaultLocation = DefaultLocation;
	params.Lifespan = Lifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.TestChallengeNotification
// (Final, Exec, Native, Protected)

void AKSHUDCommon::TestChallengeNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.TestChallengeNotification");

	AKSHUDCommon_TestChallengeNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.ShowErrorPopup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  ErrorMsg                       (Parm)

void AKSHUDCommon::ShowErrorPopup(struct FText* ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ShowErrorPopup");

	AKSHUDCommon_ShowErrorPopup_Params params;
	params.ErrorMsg = ErrorMsg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSPlayerState**         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSHUDCommon::ShouldShowCrossplayIconForPlayerState(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayerState");

	AKSHUDCommon_ShouldShowCrossplayIconForPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSHUDCommon::ShouldShowCrossplayIconForPlayer(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ShouldShowCrossplayIconForPlayer");

	AKSHUDCommon_ShouldShowCrossplayIconForPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.SetPreferredSiteId
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           SiteId                         (Parm, ZeroConstructor, IsPlainOldData)

void AKSHUDCommon::SetPreferredSiteId(int* SiteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.SetPreferredSiteId");

	AKSHUDCommon_SetPreferredSiteId_Params params;
	params.SiteId = SiteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.PrintToLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InText                         (Parm)

void AKSHUDCommon::PrintToLog(struct FText* InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.PrintToLog");

	AKSHUDCommon_PrintToLog_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.OpenTextChatToPlayer
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void AKSHUDCommon::OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.OpenTextChatToPlayer");

	AKSHUDCommon_OpenTextChatToPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.LogErrorMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  ErrorMsg                       (Parm)

void AKSHUDCommon::LogErrorMessage(struct FText* ErrorMsg)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.LogErrorMessage");

	AKSHUDCommon_LogErrorMessage_Params params;
	params.ErrorMsg = ErrorMsg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.IsSamePortalAsLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSHUDCommon::IsSamePortalAsLocalPlayer(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.IsSamePortalAsLocalPlayer");

	AKSHUDCommon_IsSamePortalAsLocalPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.HandleOpenTextChat
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (Parm, ZeroConstructor, IsPlainOldData)

void AKSHUDCommon::HandleOpenTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.HandleOpenTextChat");

	AKSHUDCommon_HandleOpenTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.HandleControllerDisconnect
// (Final, Native, Protected)

void AKSHUDCommon::HandleControllerDisconnect()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.HandleControllerDisconnect");

	AKSHUDCommon_HandleControllerDisconnect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.GetUISessionManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSUISessionManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSUISessionManager* AKSHUDCommon::GetUISessionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetUISessionManager");

	AKSHUDCommon_GetUISessionManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetSiteList
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<int, struct FText>        OutSiteIdToNameMap             (Parm, OutParm, ZeroConstructor)

void AKSHUDCommon::GetSiteList(TMap<int, struct FText>* OutSiteIdToNameMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetSiteList");

	AKSHUDCommon_GetSiteList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSiteIdToNameMap != nullptr)
		*OutSiteIdToNameMap = params.OutSiteIdToNameMap;
}


// Function KillstreakUINew.KSHUDCommon.GetSettingsDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSSettingsDataFactory*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSSettingsDataFactory* AKSHUDCommon::GetSettingsDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetSettingsDataFactory");

	AKSHUDCommon_GetSettingsDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetPreferredSiteId
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            OutSiteId                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSHUDCommon::GetPreferredSiteId(int* OutSiteId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetPreferredSiteId");

	AKSHUDCommon_GetPreferredSiteId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSiteId != nullptr)
		*OutSiteId = params.OutSiteId;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetPartyDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPartyDataFactory* AKSHUDCommon::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetPartyDataFactory");

	AKSHUDCommon_GetPartyDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetNPEDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSNPEDataFactory*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSNPEDataFactory* AKSHUDCommon::GetNPEDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetNPEDataFactory");

	AKSHUDCommon_GetNPEDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetMercManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSMercManager*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSMercManager* AKSHUDCommon::GetMercManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetMercManager");

	AKSHUDCommon_GetMercManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetLoginDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_LoginDataFactory*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_LoginDataFactory* AKSHUDCommon::GetLoginDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetLoginDataFactory");

	AKSHUDCommon_GetLoginDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetLoadoutDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSLoadoutDataFactory*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSLoadoutDataFactory* AKSHUDCommon::GetLoadoutDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetLoadoutDataFactory");

	AKSHUDCommon_GetLoadoutDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetItemHelper
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* AKSHUDCommon::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetItemHelper");

	AKSHUDCommon_GetItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetFont
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  FontName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateFontInfo          ReturnFont                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSHUDCommon::GetFont(struct FName* FontName, struct FSlateFontInfo* ReturnFont)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetFont");

	AKSHUDCommon_GetFont_Params params;
	params.FontName = FontName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnFont != nullptr)
		*ReturnFont = params.ReturnFont;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetFocusableWidgetContainers
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UPanelWidget*>    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPanelWidget*> AKSHUDCommon::GetFocusableWidgetContainers()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetFocusableWidgetContainers");

	AKSHUDCommon_GetFocusableWidgetContainers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetContextBarWidget
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSContextBarWidget*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSContextBarWidget* AKSHUDCommon::GetContextBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetContextBarWidget");

	AKSHUDCommon_GetContextBarWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetColor
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  ColorName                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ReturnColor                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSHUDCommon::GetColor(struct FName* ColorName, struct FLinearColor* ReturnColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetColor");

	AKSHUDCommon_GetColor_Params params;
	params.ColorName = ColorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnColor != nullptr)
		*ReturnColor = params.ReturnColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetChatDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSChatDataFactory*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSChatDataFactory* AKSHUDCommon::GetChatDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetChatDataFactory");

	AKSHUDCommon_GetChatDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.GetAcquisitionManager
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSAcquisitionManager*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSAcquisitionManager* AKSHUDCommon::GetAcquisitionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.GetAcquisitionManager");

	AKSHUDCommon_GetAcquisitionManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSHUDCommon.DisplayWatermark
// (Event, Protected, BlueprintEvent)

void AKSHUDCommon::DisplayWatermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.DisplayWatermark");

	AKSHUDCommon_DisplayWatermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDCommon.ApplySafeFrameScale
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         SafeFrameScale                 (Parm, ZeroConstructor, IsPlainOldData)

void AKSHUDCommon::ApplySafeFrameScale(float* SafeFrameScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDCommon.ApplySafeFrameScale");

	AKSHUDCommon_ApplySafeFrameScale_Params params;
	params.SafeFrameScale = SafeFrameScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.UIX_ReturnLobby
// (Final, Native, Public, BlueprintCallable)

void AKSGameHUDNew::UIX_ReturnLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.UIX_ReturnLobby");

	AKSGameHUDNew_UIX_ReturnLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.UIX_MutePlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Mute                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSGameHUDNew::UIX_MutePlayer(class AKSPlayerState** KSPlayerState, bool* Mute)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.UIX_MutePlayer");

	AKSGameHUDNew_UIX_MutePlayer_Params params;
	params.KSPlayerState = KSPlayerState;
	params.Mute = Mute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGameHUDNew.ToggleAimAssistDebug
// (Final, Exec, Native, Public)

void AKSGameHUDNew::ToggleAimAssistDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.ToggleAimAssistDebug");

	AKSGameHUDNew_ToggleAimAssistDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.SetHUDVisible
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void AKSGameHUDNew::SetHUDVisible(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.SetHUDVisible");

	AKSGameHUDNew_SetHUDVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.ReturnToHome
// (Final, Exec, Native, Public, BlueprintCallable)

void AKSGameHUDNew::ReturnToHome()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.ReturnToHome");

	AKSGameHUDNew_ReturnToHome_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModRemoved
// (Final, Native, Private)
// Parameters:
// class UKSPlayerMod**           PlayerMod                      (Parm, ZeroConstructor, IsPlainOldData)
// class UKSPlayerModInstance**   ModInstance                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AKSGameHUDNew::OnViewedPlayerStateModRemoved(class UKSPlayerMod** PlayerMod, class UKSPlayerModInstance** ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModRemoved");

	AKSGameHUDNew_OnViewedPlayerStateModRemoved_Params params;
	params.PlayerMod = PlayerMod;
	params.ModInstance = ModInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModAdded
// (Final, Native, Private)
// Parameters:
// class UKSPlayerMod**           PlayerMod                      (Parm, ZeroConstructor, IsPlainOldData)
// class UKSPlayerModInstance**   ModInstance                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AKSGameHUDNew::OnViewedPlayerStateModAdded(class UKSPlayerMod** PlayerMod, class UKSPlayerModInstance** ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnViewedPlayerStateModAdded");

	AKSGameHUDNew_OnViewedPlayerStateModAdded_Params params;
	params.PlayerMod = PlayerMod;
	params.ModInstance = ModInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.OnViewedPawnChanged
// (Final, Native, Private)
// Parameters:
// class AKSPlayerController**    Controller                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OldViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 NewViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)

void AKSGameHUDNew::OnViewedPawnChanged(class AKSPlayerController** Controller, class AActor** OldViewTarget, class AActor** NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnViewedPawnChanged");

	AKSGameHUDNew_OnViewedPawnChanged_Params params;
	params.Controller = Controller;
	params.OldViewTarget = OldViewTarget;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.OnToggleHUD
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void AKSGameHUDNew::OnToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnToggleHUD");

	AKSGameHUDNew_OnToggleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.OnAssetDataTableManagerChanged
// (Final, Native, Private, HasOutParms)

void AKSGameHUDNew::OnAssetDataTableManagerChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.OnAssetDataTableManagerChanged");

	AKSGameHUDNew_OnAssetDataTableManagerChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.IsPlayerMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSGameHUDNew::IsPlayerMuted(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.IsPlayerMuted");

	AKSGameHUDNew_IsPlayerMuted_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGameHUDNew.HandleLoginStateChange
// (Final, Native, Protected)
// Parameters:
// EPUMG_LoginState*              LoginState                     (Parm, ZeroConstructor, IsPlainOldData)

void AKSGameHUDNew::HandleLoginStateChange(EPUMG_LoginState* LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.HandleLoginStateChange");

	AKSGameHUDNew_HandleLoginStateChange_Params params;
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.HandleFubar
// (Final, Native, Private)

void AKSGameHUDNew::HandleFubar()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.HandleFubar");

	AKSGameHUDNew_HandleFubar_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGameHUDNew.GetHUDStateTracker
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSHUDStateTracker*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSHUDStateTracker* AKSGameHUDNew::GetHUDStateTracker()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameHUDNew.GetHUDStateTracker");

	AKSGameHUDNew_GetHUDStateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGameInfoOverlayBase.HandlePlayerStateReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSGameInfoOverlayBase::HandlePlayerStateReady(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGameInfoOverlayBase.HandlePlayerStateReady");

	UKSGameInfoOverlayBase_HandlePlayerStateReady_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGamepadPromptWidget.SetContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FButtonPromptContext*   PromptContext                  (Parm)

void UKSGamepadPromptWidget::SetContext(struct FButtonPromptContext* PromptContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.SetContext");

	UKSGamepadPromptWidget_SetContext_Params params;
	params.PromptContext = PromptContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGamepadPromptWidget.PushContext
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FButtonPromptContext*   PromptContext                  (Parm)

void UKSGamepadPromptWidget::PushContext(struct FButtonPromptContext* PromptContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.PushContext");

	UKSGamepadPromptWidget_PushContext_Params params;
	params.PromptContext = PromptContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGamepadPromptWidget.PopContext
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FButtonPromptContext    OutContext                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSGamepadPromptWidget::PopContext(struct FButtonPromptContext* OutContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.PopContext");

	UKSGamepadPromptWidget_PopContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutContext != nullptr)
		*OutContext = params.OutContext;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSGamepadPromptWidget.ClearAllContext
// (Final, Native, Public, BlueprintCallable)

void UKSGamepadPromptWidget::ClearAllContext()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.ClearAllContext");

	UKSGamepadPromptWidget_ClearAllContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSGamepadPromptWidget.ApplyContext
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FButtonPromptContext*   Context                        (Parm)

void UKSGamepadPromptWidget::ApplyContext(struct FButtonPromptContext* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSGamepadPromptWidget.ApplyContext");

	UKSGamepadPromptWidget_ApplyContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHealthWidget.OverhealChangeFromChar
// (Final, Native, Private)
// Parameters:
// class AKSCharacterBase**       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimatedChange                (Parm, ZeroConstructor, IsPlainOldData)

void UKSHealthWidget::OverhealChangeFromChar(class AKSCharacterBase** Character, bool* bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OverhealChangeFromChar");

	UKSHealthWidget_OverhealChangeFromChar_Params params;
	params.Character = Character;
	params.bAnimatedChange = bAnimatedChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHealthWidget.OnOverhealChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float*                         OldOverheal                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewOverheal                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimatedChange                (Parm, ZeroConstructor, IsPlainOldData)

void UKSHealthWidget::OnOverhealChanged(float* OldOverheal, float* NewOverheal, bool* bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OnOverhealChanged");

	UKSHealthWidget_OnOverhealChanged_Params params;
	params.OldOverheal = OldOverheal;
	params.NewOverheal = NewOverheal;
	params.bAnimatedChange = bAnimatedChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHealthWidget.OnHealthChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float*                         OldHealth                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OldMaxHealth                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewHealth                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewMaxHealth                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimatedChange                (Parm, ZeroConstructor, IsPlainOldData)

void UKSHealthWidget::OnHealthChanged(float* OldHealth, float* OldMaxHealth, float* NewHealth, float* NewMaxHealth, bool* bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OnHealthChanged");

	UKSHealthWidget_OnHealthChanged_Params params;
	params.OldHealth = OldHealth;
	params.OldMaxHealth = OldMaxHealth;
	params.NewHealth = NewHealth;
	params.NewMaxHealth = NewMaxHealth;
	params.bAnimatedChange = bAnimatedChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHealthWidget.OnArmorChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float*                         OldArmor                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NewArmor                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSHealthWidget::OnArmorChanged(float* OldArmor, float* NewArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.OnArmorChanged");

	UKSHealthWidget_OnArmorChanged_Params params;
	params.OldArmor = OldArmor;
	params.NewArmor = NewArmor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHealthWidget.HealthChangeFromChar
// (Final, Native, Private)
// Parameters:
// class AKSCharacterBase**       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bAnimatedChange                (Parm, ZeroConstructor, IsPlainOldData)

void UKSHealthWidget::HealthChangeFromChar(class AKSCharacterBase** Character, bool* bAnimatedChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.HealthChangeFromChar");

	UKSHealthWidget_HealthChangeFromChar_Params params;
	params.Character = Character;
	params.bAnimatedChange = bAnimatedChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHealthWidget.HandlePawnOverhealChange
// (Final, Native, Private)
// Parameters:
// class AKSCharacterBase**       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UKSHealthWidget::HandlePawnOverhealChange(class AKSCharacterBase** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.HandlePawnOverhealChange");

	UKSHealthWidget_HandlePawnOverhealChange_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHealthWidget.HandlePawnHealthChange
// (Final, Native, Private)
// Parameters:
// class AKSCharacterBase**       Character                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UKSHealthWidget::HandlePawnHealthChange(class AKSCharacterBase** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHealthWidget.HandlePawnHealthChange");

	UKSHealthWidget_HandlePawnHealthChange_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDStateTracker.PollMatchPhase
// (Final, Native, Protected)

void UKSHUDStateTracker::PollMatchPhase()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDStateTracker.PollMatchPhase");

	UKSHUDStateTracker_PollMatchPhase_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDStateTracker.HandleUpdatedMatchPhase
// (Final, Native, Protected)
// Parameters:
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (Parm, ZeroConstructor, IsPlainOldData)

void UKSHUDStateTracker::HandleUpdatedMatchPhase(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDStateTracker.HandleUpdatedMatchPhase");

	UKSHUDStateTracker_HandleUpdatedMatchPhase_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSHUDStateTracker.HandleGameStateBeginPlay
// (Final, Native, Protected)
// Parameters:
// class AKSGameState**           GameState                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSHUDStateTracker::HandleGameStateBeginPlay(class AKSGameState** GameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSHUDStateTracker.HandleGameStateBeginPlay");

	UKSHUDStateTracker_HandleGameStateBeginPlay_Params params;
	params.GameState = GameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSInfoActorWidgetInterface.SetInfoActor
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSWidgetInfoActor**     InfoActor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSInfoActorWidgetInterface::SetInfoActor(class AKSWidgetInfoActor** InfoActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInfoActorWidgetInterface.SetInfoActor");

	UKSInfoActorWidgetInterface_SetInfoActor_Params params;
	params.InfoActor = InfoActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSInspectPlayerInterface.UnbindEventFromInspectPlayerChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate*        Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSInspectPlayerInterface::UnbindEventFromInspectPlayerChanged(struct FScriptDelegate* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInspectPlayerInterface.UnbindEventFromInspectPlayerChanged");

	UKSInspectPlayerInterface_UnbindEventFromInspectPlayerChanged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSInspectPlayerInterface.GetInspectPlayerState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSPlayerState* UKSInspectPlayerInterface::GetInspectPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInspectPlayerInterface.GetInspectPlayerState");

	UKSInspectPlayerInterface_GetInspectPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSInspectPlayerInterface.BindEventToInspectPlayerChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate*        Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSInspectPlayerInterface::BindEventToInspectPlayerChanged(struct FScriptDelegate* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSInspectPlayerInterface.BindEventToInspectPlayerChanged");

	UKSInspectPlayerInterface_BindEventToInspectPlayerChanged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSJobSelectionWidget.RefreshJobItems
// (Event, Protected, BlueprintEvent)

void UKSJobSelectionWidget::RefreshJobItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSJobSelectionWidget.RefreshJobItems");

	UKSJobSelectionWidget_RefreshJobItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSJobSelectionWidget.OnJobVendorLoaded
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   VendorIds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSJobSelectionWidget::OnJobVendorLoaded(int* GroupId, TArray<int>* VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSJobSelectionWidget.OnJobVendorLoaded");

	UKSJobSelectionWidget_OnJobVendorLoaded_Params params;
	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSJobSelectionWidget.GetJobStoreItems
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UPUMG_StoreItem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_StoreItem*> UKSJobSelectionWidget::GetJobStoreItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSJobSelectionWidget.GetJobStoreItems");

	UKSJobSelectionWidget_GetJobStoreItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSJobSelectionWidget.GetItemHelper
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSJobSelectionWidget::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSJobSelectionWidget.GetItemHelper");

	UKSJobSelectionWidget_GetItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSKevinTest.RequestJobItems
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSKevinTest::RequestJobItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSKevinTest.RequestJobItems");

	UKSKevinTest_RequestJobItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSKevinTest.GetJobStoreItems
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<class UPUMG_StoreItem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_StoreItem*> UKSKevinTest::GetJobStoreItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSKevinTest.GetJobStoreItems");

	UKSKevinTest_GetJobStoreItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSKevinTest.GetItemHelper
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSKevinTest::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSKevinTest.GetItemHelper");

	UKSKevinTest_GetItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoadoutDataFactory.GetEquippedAccountItem
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// EPlayerAccountSlot*            eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem*                 EquippedItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSLoadoutDataFactory::GetEquippedAccountItem(EPlayerAccountSlot* eSlot, class UKSItem** EquippedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoadoutDataFactory.GetEquippedAccountItem");

	UKSLoadoutDataFactory_GetEquippedAccountItem_Params params;
	params.eSlot = eSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquippedItem != nullptr)
		*EquippedItem = params.EquippedItem;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoadoutDataFactory.EquipAccountItemToSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPlayerAccountSlot*            eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                Item                           (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSave                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSLoadoutDataFactory::EquipAccountItemToSlot(EPlayerAccountSlot* eSlot, class UKSItem** Item, bool* bSave)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoadoutDataFactory.EquipAccountItemToSlot");

	UKSLoadoutDataFactory_EquipAccountItemToSlot_Params params;
	params.eSlot = eSlot;
	params.Item = Item;
	params.bSave = bSave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoadoutDataFactory.CheckForDefaultCosmeticItemsForJob
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UPUMG_Loadout*           Loadout                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSLoadoutDataFactory::CheckForDefaultCosmeticItemsForJob(class UKSJobItem** JobItem, class UPUMG_Loadout** Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoadoutDataFactory.CheckForDefaultCosmeticItemsForJob");

	UKSLoadoutDataFactory_CheckForDefaultCosmeticItemsForJob_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loadout != nullptr)
		*Loadout = params.Loadout;
}


// Function KillstreakUINew.KSLoadoutDataFactory.CheckForDefaultCosmeticItems
// (Final, Native, Public, BlueprintCallable)

void UKSLoadoutDataFactory::CheckForDefaultCosmeticItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoadoutDataFactory.CheckForDefaultCosmeticItems");

	UKSLoadoutDataFactory_CheckForDefaultCosmeticItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLoadoutDataFactory.AssignDefaultCosmeticItemsToJob
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UPUMG_Loadout*           Loadout                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSLoadoutDataFactory::AssignDefaultCosmeticItemsToJob(class UKSJobItem** JobItem, class UPUMG_Loadout** Loadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoadoutDataFactory.AssignDefaultCosmeticItemsToJob");

	UKSLoadoutDataFactory_AssignDefaultCosmeticItemsToJob_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loadout != nullptr)
		*Loadout = params.Loadout;
}


// Function KillstreakUINew.KSLobbyHUDNew.UpdateLobbySkinToEquippedSkin
// (Final, Native, Public, BlueprintCallable)

void AKSLobbyHUDNew::UpdateLobbySkinToEquippedSkin()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.UpdateLobbySkinToEquippedSkin");

	AKSLobbyHUDNew_UpdateLobbySkinToEquippedSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.UIX_MutePlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UPUMG_PlayerInfo**       PlayerData                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Mute                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSLobbyHUDNew::UIX_MutePlayer(class UPUMG_PlayerInfo** PlayerData, bool* Mute)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.UIX_MutePlayer");

	AKSLobbyHUDNew_UIX_MutePlayer_Params params;
	params.PlayerData = PlayerData;
	params.Mute = Mute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.TransitionCamera
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  CameraTag                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         BlendTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::TransitionCamera(struct FName* CameraTag, float* BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.TransitionCamera");

	AKSLobbyHUDNew_TransitionCamera_Params params;
	params.CameraTag = CameraTag;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.ToggleDisablePartyLobbyCharacters
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// bool*                          Disable                        (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::ToggleDisablePartyLobbyCharacters(bool* Disable)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ToggleDisablePartyLobbyCharacters");

	AKSLobbyHUDNew_ToggleDisablePartyLobbyCharacters_Params params;
	params.Disable = Disable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.TestPostMatchLobby
// (Final, Exec, Native, Protected)

void AKSLobbyHUDNew::TestPostMatchLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.TestPostMatchLobby");

	AKSLobbyHUDNew_TestPostMatchLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.ShowPopupConfirmation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  Message                        (Parm)
// ESocialMessageType*            MessageType                    (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::ShowPopupConfirmation(struct FText* Message, ESocialMessageType* MessageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ShowPopupConfirmation");

	AKSLobbyHUDNew_ShowPopupConfirmation_Params params;
	params.Message = Message;
	params.MessageType = MessageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.SetNewLobbyAnimState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// ELobbyCharacterAnimState*      TargetState                    (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::SetNewLobbyAnimState(ELobbyCharacterAnimState* TargetState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.SetNewLobbyAnimState");

	AKSLobbyHUDNew_SetNewLobbyAnimState_Params params;
	params.TargetState = TargetState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharactersByIndex
// (Final, Native, Protected)
// Parameters:
// TArray<ELobbyCharacterIndex>*  IndicesToReset                 (Parm, ZeroConstructor)

void AKSLobbyHUDNew::ResetLobbyCharactersByIndex(TArray<ELobbyCharacterIndex>* IndicesToReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharactersByIndex");

	AKSLobbyHUDNew_ResetLobbyCharactersByIndex_Params params;
	params.IndicesToReset = IndicesToReset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharacters
// (Final, Native, Protected)

void AKSLobbyHUDNew::ResetLobbyCharacters()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ResetLobbyCharacters");

	AKSLobbyHUDNew_ResetLobbyCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.PlayLoopingLevelSequence
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FName*                  LvlSeqTag                      (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::PlayLoopingLevelSequence(struct FName* LvlSeqTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.PlayLoopingLevelSequence");

	AKSLobbyHUDNew_PlayLoopingLevelSequence_Params params;
	params.LvlSeqTag = LvlSeqTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.OnStoreVendorsLoaded
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   VendorIds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void AKSLobbyHUDNew::OnStoreVendorsLoaded(int* GroupId, TArray<int>* VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.OnStoreVendorsLoaded");

	AKSLobbyHUDNew_OnStoreVendorsLoaded_Params params;
	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.OnNotEnoughCurreny
// (Final, Native, Protected)
// Parameters:
// class UPUMG_StorePurchaseRequest** PurchaseRequest                (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::OnNotEnoughCurreny(class UPUMG_StorePurchaseRequest** PurchaseRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.OnNotEnoughCurreny");

	AKSLobbyHUDNew_OnNotEnoughCurreny_Params params;
	params.PurchaseRequest = PurchaseRequest;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.NotifyViewStateChange
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName*                  NewRoute                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FName*                  PreviousRoute                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void AKSLobbyHUDNew::NotifyViewStateChange(struct FName* NewRoute, struct FName* PreviousRoute)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.NotifyViewStateChange");

	AKSLobbyHUDNew_NotifyViewStateChange_Params params;
	params.NewRoute = NewRoute;
	params.PreviousRoute = PreviousRoute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.IsPlayerMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPUMG_PlayerInfo**       PlayerData                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSLobbyHUDNew::IsPlayerMuted(class UPUMG_PlayerInfo** PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.IsPlayerMuted");

	AKSLobbyHUDNew_IsPlayerMuted_Params params;
	params.PlayerData = PlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyIdDataUpdated
// (Final, Native, Protected)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::HandleSpecificPartyIdDataUpdated(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyIdDataUpdated");

	AKSLobbyHUDNew_HandleSpecificPartyIdDataUpdated_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataUpdated
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_PartyMemberData*  PartyMember                    (Parm)

void AKSLobbyHUDNew::HandleSpecificPartyDataUpdated(struct FPUMG_PartyMemberData* PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataUpdated");

	AKSLobbyHUDNew_HandleSpecificPartyDataUpdated_Params params;
	params.PartyMember = PartyMember;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataAdded
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_PartyMemberData*  PartyMember                    (Parm)

void AKSLobbyHUDNew::HandleSpecificPartyDataAdded(struct FPUMG_PartyMemberData* PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleSpecificPartyDataAdded");

	AKSLobbyHUDNew_HandleSpecificPartyDataAdded_Params params;
	params.PartyMember = PartyMember;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleReturnFromBattleLevelSeqStopped
// (Final, Native, Public)

void AKSLobbyHUDNew::HandleReturnFromBattleLevelSeqStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleReturnFromBattleLevelSeqStopped");

	AKSLobbyHUDNew_HandleReturnFromBattleLevelSeqStopped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandlePlayerLoadoutsUpdated
// (Final, Native, Protected)

void AKSLobbyHUDNew::HandlePlayerLoadoutsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandlePlayerLoadoutsUpdated");

	AKSLobbyHUDNew_HandlePlayerLoadoutsUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyMemberDataUpdated
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FPUMG_PartyMemberData*  PartyMember                    (ConstParm, Parm, OutParm, ReferenceParm)
// int*                           MemberIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember, int* MemberIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandlePartyMemberDataUpdated");

	AKSLobbyHUDNew_HandlePartyMemberDataUpdated_Params params;
	params.PartyMember = PartyMember;
	params.MemberIndex = MemberIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandlePartyDataUpdated
// (Final, Native, Protected)

void AKSLobbyHUDNew::HandlePartyDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandlePartyDataUpdated");

	AKSLobbyHUDNew_HandlePartyDataUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleMatchStatusUpdated
// (Final, Native, Protected)
// Parameters:
// EPUMG_MatchStatus*             MatchStatus                    (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::HandleMatchStatusUpdated(EPUMG_MatchStatus* MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleMatchStatusUpdated");

	AKSLobbyHUDNew_HandleMatchStatusUpdated_Params params;
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleLoginUserChange
// (Final, Native, Protected)

void AKSLobbyHUDNew::HandleLoginUserChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleLoginUserChange");

	AKSLobbyHUDNew_HandleLoginUserChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleLoginStateChange
// (Final, Native, Protected)
// Parameters:
// EPUMG_LoginState*              LoginState                     (Parm, ZeroConstructor, IsPlainOldData)

void AKSLobbyHUDNew::HandleLoginStateChange(EPUMG_LoginState* LoginState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleLoginStateChange");

	AKSLobbyHUDNew_HandleLoginStateChange_Params params;
	params.LoginState = LoginState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleExitToGameLevelSeqStopped
// (Final, Native, Public)

void AKSLobbyHUDNew::HandleExitToGameLevelSeqStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleExitToGameLevelSeqStopped");

	AKSLobbyHUDNew_HandleExitToGameLevelSeqStopped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleDenyPartyInvitation
// (Final, Native, Public)

void AKSLobbyHUDNew::HandleDenyPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleDenyPartyInvitation");

	AKSLobbyHUDNew_HandleDenyPartyInvitation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.HandleAcceptPartyInvitation
// (Final, Native, Public)

void AKSLobbyHUDNew::HandleAcceptPartyInvitation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.HandleAcceptPartyInvitation");

	AKSLobbyHUDNew_HandleAcceptPartyInvitation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerWhoDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSPlayerWhoDataFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPlayerWhoDataFactory* AKSLobbyHUDNew::GetPlayerWhoDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetPlayerWhoDataFactory");

	AKSLobbyHUDNew_GetPlayerWhoDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerQueryDataFactory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSPlayerQueryDataFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPlayerQueryDataFactory* AKSLobbyHUDNew::GetPlayerQueryDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetPlayerQueryDataFactory");

	AKSLobbyHUDNew_GetPlayerQueryDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetPlayerDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_PlayerDataFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PlayerDataFactory* AKSLobbyHUDNew::GetPlayerDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetPlayerDataFactory");

	AKSLobbyHUDNew_GetPlayerDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSLobbyWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSLobbyWidget* AKSLobbyHUDNew::GetLobbyWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetLobbyWidget");

	AKSLobbyHUDNew_GetLobbyWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetLobbyCharacterByPosition
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// ELobbyCharacterIndex*          CharacterIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// class AKSLobbyCharacter*       LobbyCharacter                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AKSLobbyHUDNew::GetLobbyCharacterByPosition(ELobbyCharacterIndex* CharacterIndex, class AKSLobbyCharacter** LobbyCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetLobbyCharacterByPosition");

	AKSLobbyHUDNew_GetLobbyCharacterByPosition_Params params;
	params.CharacterIndex = CharacterIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LobbyCharacter != nullptr)
		*LobbyCharacter = params.LobbyCharacter;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetKSQueueDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSQueueDataFactory* AKSLobbyHUDNew::GetKSQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetKSQueueDataFactory");

	AKSLobbyHUDNew_GetKSQueueDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetJsonDataFactory
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSJsonDataFactory*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSJsonDataFactory* AKSLobbyHUDNew::GetJsonDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetJsonDataFactory");

	AKSLobbyHUDNew_GetJsonDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetFriendDataFactory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSFriendDataFactory*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSFriendDataFactory* AKSLobbyHUDNew::GetFriendDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetFriendDataFactory");

	AKSLobbyHUDNew_GetFriendDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.GetEMODataFactory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSEMODataFactory*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSEMODataFactory* AKSLobbyHUDNew::GetEMODataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.GetEMODataFactory");

	AKSLobbyHUDNew_GetEMODataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLobbyHUDNew.ForceEulaAccept
// (Final, Native, Public, BlueprintCallable)

void AKSLobbyHUDNew::ForceEulaAccept()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.ForceEulaAccept");

	AKSLobbyHUDNew_ForceEulaAccept_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.CreateInitialPlayerLoadout
// (Final, Native, Protected)

void AKSLobbyHUDNew::CreateInitialPlayerLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CreateInitialPlayerLoadout");

	AKSLobbyHUDNew_CreateInitialPlayerLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.CheckForVoucherRedemption
// (Final, Native, Protected, BlueprintCallable)

void AKSLobbyHUDNew::CheckForVoucherRedemption()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CheckForVoucherRedemption");

	AKSLobbyHUDNew_CheckForVoucherRedemption_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.CheckForExistingPenaltyTime
// (Final, Native, Protected, BlueprintCallable)

void AKSLobbyHUDNew::CheckForExistingPenaltyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CheckForExistingPenaltyTime");

	AKSLobbyHUDNew_CheckForExistingPenaltyTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLobbyHUDNew.CancelExitToGameLevelAnimStoppedHandling
// (Final, Native, Public)

void AKSLobbyHUDNew::CancelExitToGameLevelAnimStoppedHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLobbyHUDNew.CancelExitToGameLevelAnimStoppedHandling");

	AKSLobbyHUDNew_CancelExitToGameLevelAnimStoppedHandling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLoginInventoryCheck.GetTimeUntilForcedProceed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSLoginInventoryCheck::GetTimeUntilForcedProceed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginInventoryCheck.GetTimeUntilForcedProceed");

	UKSLoginInventoryCheck_GetTimeUntilForcedProceed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoginInventoryCheck.GetTimeElapsed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSLoginInventoryCheck::GetTimeElapsed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginInventoryCheck.GetTimeElapsed");

	UKSLoginInventoryCheck_GetTimeElapsed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLoginProcessRewards.ProcessAccountRewards
// (Final, Native, Protected, BlueprintCallable)

void UKSLoginProcessRewards::ProcessAccountRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLoginProcessRewards.ProcessAccountRewards");

	UKSLoginProcessRewards_ProcessAccountRewards_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSLowAmmoAlertWidget.GetAmmoState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELowAmmoState                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ELowAmmoState UKSLowAmmoAlertWidget::GetAmmoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLowAmmoAlertWidget.GetAmmoState");

	UKSLowAmmoAlertWidget_GetAmmoState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLowAmmoAlertWidget.CalcAmmoState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ELowAmmoState                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ELowAmmoState UKSLowAmmoAlertWidget::CalcAmmoState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLowAmmoAlertWidget.CalcAmmoState");

	UKSLowAmmoAlertWidget_CalcAmmoState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSLowAmmoAlertWidget.AmmoStateChanged
// (Native, Event, Protected, BlueprintEvent)

void UKSLowAmmoAlertWidget::AmmoStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSLowAmmoAlertWidget.AmmoStateChanged");

	UKSLowAmmoAlertWidget_AmmoStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMarkerDisplayBase.GetScreenPositionForMarker
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                TargetLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         AnchorHeight                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MarginX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MarginY                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenLocation                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMarkerDisplayBase::GetScreenPositionForMarker(struct FVector* TargetLocation, float* AnchorHeight, float* MarginX, float* MarginY, struct FVector2D* ScreenLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMarkerDisplayBase.GetScreenPositionForMarker");

	UKSMarkerDisplayBase_GetScreenPositionForMarker_Params params;
	params.TargetLocation = TargetLocation;
	params.AnchorHeight = AnchorHeight;
	params.MarginX = MarginX;
	params.MarginY = MarginY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLocation != nullptr)
		*ScreenLocation = params.ScreenLocation;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataIndividualInviteSetup.SetCallbacks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        GetIsSelected                  (Parm, ZeroConstructor)
// struct FScriptDelegate*        Select                         (Parm, ZeroConstructor)
// struct FScriptDelegate*        ShouldShowPlayer               (Parm, ZeroConstructor)
// struct FScriptDelegate*        Close                          (Parm, ZeroConstructor)
// class UKSDataIndividualInviteSetup* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSDataIndividualInviteSetup* UKSDataIndividualInviteSetup::SetCallbacks(struct FScriptDelegate* GetIsSelected, struct FScriptDelegate* Select, struct FScriptDelegate* ShouldShowPlayer, struct FScriptDelegate* Close)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataIndividualInviteSetup.SetCallbacks");

	UKSDataIndividualInviteSetup_SetCallbacks_Params params;
	params.GetIsSelected = GetIsSelected;
	params.Select = Select;
	params.ShouldShowPlayer = ShouldShowPlayer;
	params.Close = Close;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteSelect__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)
// EKSInviteSelectResult          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSInviteSelectResult UKSDataIndividualInviteSetup::KSInviteSelect__DelegateSignature(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteSelect__DelegateSignature");

	UKSDataIndividualInviteSetup_KSInviteSelect__DelegateSignature_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteGetIsSelected__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSDataIndividualInviteSetup::KSInviteGetIsSelected__DelegateSignature(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataIndividualInviteSetup.KSInviteGetIsSelected__DelegateSignature");

	UKSDataIndividualInviteSetup_KSInviteGetIsSelected__DelegateSignature_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSDataBatchInviteSetup.SetCallbacks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        Select                         (Parm, ZeroConstructor)
// struct FScriptDelegate*        ShouldShowPlayer               (Parm, ZeroConstructor)
// struct FScriptDelegate*        Cancel                         (Parm, ZeroConstructor)
// class UKSDataBatchInviteSetup* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSDataBatchInviteSetup* UKSDataBatchInviteSetup::SetCallbacks(struct FScriptDelegate* Select, struct FScriptDelegate* ShouldShowPlayer, struct FScriptDelegate* Cancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSDataBatchInviteSetup.SetCallbacks");

	UKSDataBatchInviteSetup_SetCallbacks_Params params;
	params.Select = Select;
	params.ShouldShowPlayer = ShouldShowPlayer;
	params.Cancel = Cancel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSDataBatchInviteSetup.KSBatchSelect__DelegateSignature
// (Public, Delegate)
// Parameters:
// TArray<class UKSPlayerInfo*>*  playerinfo                     (ConstParm, Parm, ZeroConstructor)

void UKSDataBatchInviteSetup::KSBatchSelect__DelegateSignature(TArray<class UKSPlayerInfo*>* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSDataBatchInviteSetup.KSBatchSelect__DelegateSignature");

	UKSDataBatchInviteSetup_KSBatchSelect__DelegateSignature_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMassInviteModal.UpdateRouteData
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMassInviteModal::UpdateRouteData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.UpdateRouteData");

	UKSMassInviteModal_UpdateRouteData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMassInviteModal.SelectPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSPlayerInfo**          Player                         (Parm, ZeroConstructor, IsPlainOldData)
// EKSInviteSelectResult          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSInviteSelectResult UKSMassInviteModal::SelectPlayer(class UKSPlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.SelectPlayer");

	UKSMassInviteModal_SelectPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMassInviteModal.RequestFriends
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        OnReceivePlayers               (Parm, ZeroConstructor)

void UKSMassInviteModal::RequestFriends(struct FScriptDelegate* OnReceivePlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.RequestFriends");

	UKSMassInviteModal_RequestFriends_Params params;
	params.OnReceivePlayers = OnReceivePlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction KillstreakUINew.KSMassInviteModal.KSInviteReceivePlayers__DelegateSignature
// (Public, Delegate, HasOutParms)
// Parameters:
// TArray<class UKSPlayerInfo*>*  Players                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSMassInviteModal::KSInviteReceivePlayers__DelegateSignature(TArray<class UKSPlayerInfo*>* Players)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSMassInviteModal.KSInviteReceivePlayers__DelegateSignature");

	UKSMassInviteModal_KSInviteReceivePlayers__DelegateSignature_Params params;
	params.Players = Players;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMassInviteModal.GetShouldSelect
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSPlayerInfo**          Player                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMassInviteModal::GetShouldSelect(class UKSPlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.GetShouldSelect");

	UKSMassInviteModal_GetShouldSelect_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMassInviteModal.CloseScreen
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// EKSInviteCloseAction*          CloseAction                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSMassInviteModal::CloseScreen(EKSInviteCloseAction* CloseAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMassInviteModal.CloseScreen");

	UKSMassInviteModal_CloseScreen_Params params;
	params.CloseAction = CloseAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchInvitationModal.ShowInvitation
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientQueueInfo*       QueueInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UKSMatchInvitationModal::ShowInvitation(class UKSPlayerInfo** playerinfo, struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.ShowInvitation");

	UKSMatchInvitationModal_ShowInvitation_Params params;
	params.playerinfo = playerinfo;
	params.QueueInfo = QueueInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchInvitationModal.ShowError
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  ErrorMessage                   (ConstParm, Parm, OutParm, ReferenceParm)

void UKSMatchInvitationModal::ShowError(struct FText* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.ShowError");

	UKSMatchInvitationModal_ShowError_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchInvitationModal.OnInvitationExpired
// (Final, Native, Private)

void UKSMatchInvitationModal::OnInvitationExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.OnInvitationExpired");

	UKSMatchInvitationModal_OnInvitationExpired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchInvitationModal.HandleReceivePlayerName
// (Final, Native, Private)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSMatchInvitationModal::HandleReceivePlayerName(class UPUMG_PlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.HandleReceivePlayerName");

	UKSMatchInvitationModal_HandleReceivePlayerName_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchInvitationModal.GetQueueDataFactory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSQueueDataFactory* UKSMatchInvitationModal::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.GetQueueDataFactory");

	UKSMatchInvitationModal_GetQueueDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTotalTimeToExpire
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSMatchInvitationModal::GetInvitationTotalTimeToExpire()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTotalTimeToExpire");

	UKSMatchInvitationModal_GetInvitationTotalTimeToExpire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTimeRemaining
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSMatchInvitationModal::GetInvitationTimeRemaining()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.GetInvitationTimeRemaining");

	UKSMatchInvitationModal_GetInvitationTimeRemaining_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMatchInvitationModal.DeclineInvite
// (Final, Native, Protected, BlueprintCallable)

void UKSMatchInvitationModal::DeclineInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.DeclineInvite");

	UKSMatchInvitationModal_DeclineInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchInvitationModal.CloseScreen
// (Final, Native, Protected, BlueprintCallable)

void UKSMatchInvitationModal::CloseScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.CloseScreen");

	UKSMatchInvitationModal_CloseScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchInvitationModal.AcceptInvite
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           mapId                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSMatchInvitationModal::AcceptInvite(int* mapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchInvitationModal.AcceptInvite");

	UKSMatchInvitationModal_AcceptInvite_Params params;
	params.mapId = mapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchResult.UpdateRoundBaseScore
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class AKSGameState_RoundGame** pGameState                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSMatchResult::UpdateRoundBaseScore(class AKSGameState_RoundGame** pGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.UpdateRoundBaseScore");

	UKSMatchResult_UpdateRoundBaseScore_Params params;
	params.pGameState = pGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchResult.UpdateResultStatus
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// EGameResult*                   Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Status                         (Parm, OutParm)

void UKSMatchResult::UpdateResultStatus(EGameResult* Result, struct FText* Status)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.UpdateResultStatus");

	UKSMatchResult_UpdateResultStatus_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Status != nullptr)
		*Status = params.Status;
}


// Function KillstreakUINew.KSMatchResult.ProcessResultAnnoucement
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// EGameResult*                   Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSMatchResult::ProcessResultAnnoucement(EGameResult* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.ProcessResultAnnoucement");

	UKSMatchResult_ProcessResultAnnoucement_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchResult.HandleResultReceived
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FRoundResultAnnoucement* ResultAnnoucement              (Parm)

void UKSMatchResult::HandleResultReceived(struct FRoundResultAnnoucement* ResultAnnoucement)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.HandleResultReceived");

	UKSMatchResult_HandleResultReceived_Params params;
	params.ResultAnnoucement = ResultAnnoucement;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchResult.HandleEndOfMatch
// (Final, Native, Protected, BlueprintCallable)

void UKSMatchResult::HandleEndOfMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.HandleEndOfMatch");

	UKSMatchResult_HandleEndOfMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMatchResult.GetTeamNames
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   pTeamName                      (Parm, OutParm)
// struct FText                   pOpposingTeamName              (Parm, OutParm)

void UKSMatchResult::GetTeamNames(struct FText* pTeamName, struct FText* pOpposingTeamName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.GetTeamNames");

	UKSMatchResult_GetTeamNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pTeamName != nullptr)
		*pTeamName = params.pTeamName;
	if (pOpposingTeamName != nullptr)
		*pOpposingTeamName = params.pOpposingTeamName;
}


// Function KillstreakUINew.KSMatchResult.GetSurrenderText
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   pSurrenderText                 (Parm, OutParm)

void UKSMatchResult::GetSurrenderText(struct FText* pSurrenderText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMatchResult.GetSurrenderText");

	UKSMatchResult_GetSurrenderText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (pSurrenderText != nullptr)
		*pSurrenderText = params.pSurrenderText;
}


// Function KillstreakUINew.KSMediaPlayerWidget.UIX_SkipEntry
// (Final, Native, Public, BlueprintCallable)

void UKSMediaPlayerWidget::UIX_SkipEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.UIX_SkipEntry");

	UKSMediaPlayerWidget_UIX_SkipEntry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnShouldShowPromptChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanSkipEntry                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSMediaPlayerWidget::OnShouldShowPromptChanged(bool* bCanSkipEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnShouldShowPromptChanged");

	UKSMediaPlayerWidget_OnShouldShowPromptChanged_Params params;
	params.bCanSkipEntry = bCanSkipEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnReadyForPlayback
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPlatformMediaSource**   PlatformMediaSource            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          PlayEvent                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          StopEvent                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UKSMediaPlayerWidget::OnReadyForPlayback(class UPlatformMediaSource** PlatformMediaSource, class UAkAudioEvent** PlayEvent, class UAkAudioEvent** StopEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnReadyForPlayback");

	UKSMediaPlayerWidget_OnReadyForPlayback_Params params;
	params.PlatformMediaSource = PlatformMediaSource;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnEndLoadingPlaylist
// (Event, Public, BlueprintEvent)

void UKSMediaPlayerWidget::OnEndLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnEndLoadingPlaylist");

	UKSMediaPlayerWidget_OnEndLoadingPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMediaPlayerWidget.OnBeginLoadingPlaylist
// (Event, Public, BlueprintEvent)

void UKSMediaPlayerWidget::OnBeginLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.OnBeginLoadingPlaylist");

	UKSMediaPlayerWidget_OnBeginLoadingPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMediaPlayerWidget.IsCurrentEntrySkippable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMediaPlayerWidget::IsCurrentEntrySkippable()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMediaPlayerWidget.IsCurrentEntrySkippable");

	UKSMediaPlayerWidget_IsCurrentEntrySkippable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMercManager.Uninitialize
// (Native, Public)

void UKSMercManager::Uninitialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.Uninitialize");

	UKSMercManager_Uninitialize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMercManager.IsItemEquippedInSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSItem**                CosmeticItem                   (Parm, ZeroConstructor, IsPlainOldData)
// EMercCosmeticSlot*             eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMercManager::IsItemEquippedInSlot(class UKSItem** CosmeticItem, EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.IsItemEquippedInSlot");

	UKSMercManager_IsItemEquippedInSlot_Params params;
	params.CosmeticItem = CosmeticItem;
	params.eSlot = eSlot;
	params.SlotPosition = SlotPosition;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMercManager.IsItemEquippedInAnySlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSItem**                CosmeticItem                   (Parm, ZeroConstructor, IsPlainOldData)
// EMercCosmeticSlot*             eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   SlotPosition                   (Parm, ZeroConstructor)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMercManager::IsItemEquippedInAnySlot(class UKSItem** CosmeticItem, EMercCosmeticSlot* eSlot, TArray<int>* SlotPosition, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.IsItemEquippedInAnySlot");

	UKSMercManager_IsItemEquippedInAnySlot_Params params;
	params.CosmeticItem = CosmeticItem;
	params.eSlot = eSlot;
	params.SlotPosition = SlotPosition;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMercManager.Initialize
// (Native, Public)
// Parameters:
// class APUMG_HUD**              InHud                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSMercManager::Initialize(class APUMG_HUD** InHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.Initialize");

	UKSMercManager_Initialize_Params params;
	params.InHud = InHud;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMercManager.GetLoadoutDataFactory
// (Final, Native, Protected, Const)
// Parameters:
// class UKSLoadoutDataFactory*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSLoadoutDataFactory* UKSMercManager::GetLoadoutDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.GetLoadoutDataFactory");

	UKSMercManager_GetLoadoutDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMercManager.GetEquippedCosmeticItemBySlot
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMercCosmeticSlot*             eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem*                 CosmeticItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMercManager::GetEquippedCosmeticItemBySlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem, class UKSItem** CosmeticItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.GetEquippedCosmeticItemBySlot");

	UKSMercManager_GetEquippedCosmeticItemBySlot_Params params;
	params.eSlot = eSlot;
	params.SlotPosition = SlotPosition;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CosmeticItem != nullptr)
		*CosmeticItem = params.CosmeticItem;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMercManager.EquipCosmeticItemToSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMercCosmeticSlot*             eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                CosmeticItem                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bGlobal                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSMercManager::EquipCosmeticItemToSlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem, class UKSItem** CosmeticItem, bool* bGlobal)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.EquipCosmeticItemToSlot");

	UKSMercManager_EquipCosmeticItemToSlot_Params params;
	params.eSlot = eSlot;
	params.SlotPosition = SlotPosition;
	params.JobItem = JobItem;
	params.CosmeticItem = CosmeticItem;
	params.bGlobal = bGlobal;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSMercManager.ClearCosmeticItemOnSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EMercCosmeticSlot*             eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           SlotPosition                   (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSMercManager::ClearCosmeticItemOnSlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMercManager.ClearCosmeticItemOnSlot");

	UKSMercManager_ClearCosmeticItemOnSlot_Params params;
	params.eSlot = eSlot;
	params.SlotPosition = SlotPosition;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSMinimapWidgetBase.UpdateMapMaterialTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic** MapMaterial                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedX                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         NormalizedY                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Rotation                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSMinimapWidgetBase::UpdateMapMaterialTransform(class UMaterialInstanceDynamic** MapMaterial, float* NormalizedX, float* NormalizedY, float* Rotation, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSMinimapWidgetBase.UpdateMapMaterialTransform");

	UKSMinimapWidgetBase_UpdateMapMaterialTransform_Params params;
	params.MapMaterial = MapMaterial;
	params.NormalizedX = NormalizedX;
	params.NormalizedY = NormalizedY;
	params.Rotation = Rotation;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.ViewModelByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InTargetItem                   (Parm, ZeroConstructor, IsPlainOldData)
// class UDataTable**             InDataTable                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_ViewModelByName(class UObject** WorldContextObject, struct FName* InTargetItem, class UDataTable** InDataTable)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ViewModelByName");

	UKSModelViewer_ViewModelByName_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InTargetItem = InTargetItem;
	params.InDataTable = InDataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.ViewModelAttachment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWeaponAttachment**    InAttachment                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnOnActorName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_ViewModelAttachment(class UObject** WorldContextObject, class UKSWeaponAttachment** InAttachment, struct FName* InSpawnOnActorName, unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ViewModelAttachment");

	UKSModelViewer_ViewModelAttachment_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InAttachment = InAttachment;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.ViewModel
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                InItem                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnOnActorName             (Parm, ZeroConstructor, IsPlainOldData)
// EWeaponStateNew*               DefaultWeaponState             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InScaleToFitTargetActor        (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator*               InDefaultRotation              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InBindControllerToSpawner      (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_ViewModel(class UObject** WorldContextObject, class UKSItem** InItem, struct FName* InSpawnOnActorName, EWeaponStateNew* DefaultWeaponState, bool* InScaleToFitTargetActor, struct FRotator* InDefaultRotation, bool* InBindControllerToSpawner)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ViewModel");

	UKSModelViewer_ViewModel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InItem = InItem;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.DefaultWeaponState = DefaultWeaponState;
	params.InScaleToFitTargetActor = InScaleToFitTargetActor;
	params.InDefaultRotation = InDefaultRotation;
	params.InBindControllerToSpawner = InBindControllerToSpawner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.UnbindControllerFromSpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnActorName               (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_UnbindControllerFromSpawner(class UObject** WorldContextObject, struct FName* InSpawnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.UnbindControllerFromSpawner");

	UKSModelViewer_UnbindControllerFromSpawner_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSpawnActorName = InSpawnActorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.UnbindAllControllersFromSpawners
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_UnbindAllControllersFromSpawners(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.UnbindAllControllersFromSpawners");

	UKSModelViewer_UnbindAllControllersFromSpawners_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.SetAnimation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence**          InAnim                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnOnActorName             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bLooping                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_SetAnimation(class UObject** WorldContextObject, class UAnimSequence** InAnim, struct FName* InSpawnOnActorName, bool* bLooping)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.SetAnimation");

	UKSModelViewer_SetAnimation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InAnim = InAnim;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.bLooping = bLooping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.HideModelAttachment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnOnActorName             (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 Slot                           (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_HideModelAttachment(class UObject** WorldContextObject, struct FName* InSpawnOnActorName, unsigned char* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.HideModelAttachment");

	UKSModelViewer_HideModelAttachment_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.ClearModelAttachments
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnOnActorName             (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_ClearModelAttachments(class UObject** WorldContextObject, struct FName* InSpawnOnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ClearModelAttachments");

	UKSModelViewer_ClearModelAttachments_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.ClearModel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnOnActorName             (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_ClearModel(class UObject** WorldContextObject, struct FName* InSpawnOnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.ClearModel");

	UKSModelViewer_ClearModel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModelViewer.BindDelForWeaponModelSet
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnOnActorName             (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        InEventCallback                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSModelViewer::STATIC_BindDelForWeaponModelSet(class UObject** WorldContextObject, struct FName* InSpawnOnActorName, struct FScriptDelegate* InEventCallback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.BindDelForWeaponModelSet");

	UKSModelViewer_BindDelForWeaponModelSet_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSpawnOnActorName = InSpawnOnActorName;
	params.InEventCallback = InEventCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSModelViewer.BindControllerToSpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  InSpawnActorName               (Parm, ZeroConstructor, IsPlainOldData)

void UKSModelViewer::STATIC_BindControllerToSpawner(class UObject** WorldContextObject, struct FName* InSpawnActorName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModelViewer.BindControllerToSpawner");

	UKSModelViewer_BindControllerToSpawner_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InSpawnActorName = InSpawnActorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModWidget_DetectEnemy.OnDetectChanged
// (Final, Native, Private)
// Parameters:
// class UKSModInst_DetectEnemy** DetectEnemyModInst             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bIsDetectingEnemy              (Parm, ZeroConstructor, IsPlainOldData)

void UKSModWidget_DetectEnemy::OnDetectChanged(class UKSModInst_DetectEnemy** DetectEnemyModInst, bool* bIsDetectingEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidget_DetectEnemy.OnDetectChanged");

	UKSModWidget_DetectEnemy_OnDetectChanged_Params params;
	params.DetectEnemyModInst = DetectEnemyModInst;
	params.bIsDetectingEnemy = bIsDetectingEnemy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSModWidget_DetectEnemy.GetIconBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHorizontalBox*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHorizontalBox* UKSModWidget_DetectEnemy::GetIconBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidget_DetectEnemy.GetIconBox");

	UKSModWidget_DetectEnemy_GetIconBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSModWidgetInterface.RemoveModInstance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerModInstance**   InInstance                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSModWidgetInterface::RemoveModInstance(class UKSPlayerModInstance** InInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidgetInterface.RemoveModInstance");

	UKSModWidgetInterface_RemoveModInstance_Params params;
	params.InInstance = InInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSModWidgetInterface.AddModInstance
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerModInstance**   InInstance                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSModWidgetInterface::AddModInstance(class UKSPlayerModInstance** InInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSModWidgetInterface.AddModInstance");

	UKSModWidgetInterface_AddModInstance_Params params;
	params.InInstance = InInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNewsRotatorWidget.OnJsonChanged
// (Event, Protected, BlueprintEvent)

void UKSNewsRotatorWidget::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNewsRotatorWidget.OnJsonChanged");

	UKSNewsRotatorWidget_OnJsonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSNewsRotatorWidget.GetPanelData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSNewsRotatorData*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSNewsRotatorData*> UKSNewsRotatorWidget::GetPanelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNewsRotatorWidget.GetPanelData");

	UKSNewsRotatorWidget_GetPanelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNewsRotatorWidget.GetJsonDataFactory
// (Final, Native, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSJsonDataFactory*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSJsonDataFactory* UKSNewsRotatorWidget::GetJsonDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNewsRotatorWidget.GetJsonDataFactory");

	UKSNewsRotatorWidget_GetJsonDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimTutorialActivity
// (Final, Native, Public, BlueprintCallable)

void UKSNPEDataFactory::UIX_ClaimTutorialActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimTutorialActivity");

	UKSNPEDataFactory_UIX_ClaimTutorialActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimRegionSelectedActivity
// (Final, Native, Public, BlueprintCallable)

void UKSNPEDataFactory::UIX_ClaimRegionSelectedActivity()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.UIX_ClaimRegionSelectedActivity");

	UKSNPEDataFactory_UIX_ClaimRegionSelectedActivity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSNPEDataFactory.SkipTutorial
// (Final, Native, Protected, BlueprintCallable)

void UKSNPEDataFactory::SkipTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.SkipTutorial");

	UKSNPEDataFactory_SkipTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSNPEDataFactory.QueueTutorial
// (Final, Native, Protected, BlueprintCallable)

void UKSNPEDataFactory::QueueTutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.QueueTutorial");

	UKSNPEDataFactory_QueueTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSNPEDataFactory.HasClaimedActivity
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EKSNPEActivityType*            ActivityType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSNPEDataFactory::HasClaimedActivity(EKSNPEActivityType* ActivityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.HasClaimedActivity");

	UKSNPEDataFactory_HasClaimedActivity_Params params;
	params.ActivityType = ActivityType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNPEDataFactory.GetQueueDataFactory
// (Final, Native, Protected)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSQueueDataFactory* UKSNPEDataFactory::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.GetQueueDataFactory");

	UKSNPEDataFactory_GetQueueDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSNPEDataFactory.ClaimActivity
// (Final, Native, Protected)
// Parameters:
// EKSNPEActivityType*            ActivityType                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSNPEDataFactory::ClaimActivity(EKSNPEActivityType* ActivityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSNPEDataFactory.ClaimActivity");

	UKSNPEDataFactory_ClaimActivity_Params params;
	params.ActivityType = ActivityType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPartyDataFactory.BroadcastPartyInvitationError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  InvitationError                (Parm)

void UKSPartyDataFactory::BroadcastPartyInvitationError(struct FText* InvitationError)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyDataFactory.BroadcastPartyInvitationError");

	UKSPartyDataFactory_BroadcastPartyInvitationError_Params params;
	params.InvitationError = InvitationError;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.RefreshFromPartyData
// (Final, Native, Protected, BlueprintCallable)

void UKSPartyManagerWidgetBase::RefreshFromPartyData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.RefreshFromPartyData");

	UKSPartyManagerWidgetBase_RefreshFromPartyData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByName
// (Final, Native, Protected)
// Parameters:
// struct FText*                  PlayerName                     (Parm)

void UKSPartyManagerWidgetBase::HandlePartyMemberUpdateByName(struct FText* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByName");

	UKSPartyManagerWidgetBase_HandlePartyMemberUpdateByName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByInfo
// (Final, Native, Protected)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSPartyManagerWidgetBase::HandlePartyMemberUpdateByInfo(class UPUMG_PlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateByInfo");

	UKSPartyManagerWidgetBase_HandlePartyMemberUpdateByInfo_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateById
// (Final, Native, Protected)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSPartyManagerWidgetBase::HandlePartyMemberUpdateById(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberUpdateById");

	UKSPartyManagerWidgetBase_HandlePartyMemberUpdateById_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberDataUpdated
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_PartyMemberData*  MemberData                     (Parm)

void UKSPartyManagerWidgetBase::HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* MemberData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.HandlePartyMemberDataUpdated");

	UKSPartyManagerWidgetBase_HandlePartyMemberDataUpdated_Params params;
	params.MemberData = MemberData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.GetSuggestedInvite
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UPUMG_PlayerInfo*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PlayerInfo* UKSPartyManagerWidgetBase::GetSuggestedInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.GetSuggestedInvite");

	UKSPartyManagerWidgetBase_GetSuggestedInvite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.GetPartyDataFactory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPartyDataFactory* UKSPartyManagerWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.GetPartyDataFactory");

	UKSPartyManagerWidgetBase_GetPartyDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyPartyData
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPUMG_PartyMemberData>* PartyMembers                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSPartyManagerWidgetBase::ApplyPartyData(TArray<struct FPUMG_PartyMemberData>* PartyMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPartyManagerWidgetBase.ApplyPartyData");

	UKSPartyManagerWidgetBase_ApplyPartyData_Params params;
	params.PartyMembers = PartyMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeBase.SetCursorLerping
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          bLerping                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSPerkTreeBase::SetCursorLerping(bool* bLerping)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.SetCursorLerping");

	UKSPerkTreeBase_SetCursorLerping_Params params;
	params.bLerping = bLerping;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeBase.RefreshEdge
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSPerkTreeEdgeBase**    Edge                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           column                         (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Row                            (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FIntPoint, class UKSPerkTreeNodeBase*>* NodesMap                       (Parm, ZeroConstructor)

void UKSPerkTreeBase::RefreshEdge(class UKSPerkTreeEdgeBase** Edge, int* column, int* Row, TMap<struct FIntPoint, class UKSPerkTreeNodeBase*>* NodesMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.RefreshEdge");

	UKSPerkTreeBase_RefreshEdge_Params params;
	params.Edge = Edge;
	params.column = column;
	params.Row = Row;
	params.NodesMap = NodesMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeBase.InitializeNodes
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> UKSPerkTreeBase::InitializeNodes()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.InitializeNodes");

	UKSPerkTreeBase_InitializeNodes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeSelected
// (Final, Native, Public)
// Parameters:
// class UKSPerkTreeNodeBase**    SelectedNode                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCustomLoadoutItem*     SelectedPerk                   (Parm)
// bool*                          bAlreadyEquipped               (Parm, ZeroConstructor, IsPlainOldData)

void UKSPerkTreeBase::HandleTreeNodeSelected(class UKSPerkTreeNodeBase** SelectedNode, struct FCustomLoadoutItem* SelectedPerk, bool* bAlreadyEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeSelected");

	UKSPerkTreeBase_HandleTreeNodeSelected_Params params;
	params.SelectedNode = SelectedNode;
	params.SelectedPerk = SelectedPerk;
	params.bAlreadyEquipped = bAlreadyEquipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeHovered
// (Final, Native, Public)
// Parameters:
// class UKSPerkTreeNodeBase**    HoveredNode                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCustomLoadoutItem*     HoveredPerk                    (Parm)

void UKSPerkTreeBase::HandleTreeNodeHovered(class UKSPerkTreeNodeBase** HoveredNode, struct FCustomLoadoutItem* HoveredPerk)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.HandleTreeNodeHovered");

	UKSPerkTreeBase_HandleTreeNodeHovered_Params params;
	params.HoveredNode = HoveredNode;
	params.HoveredPerk = HoveredPerk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeBase.GetHoverCursor
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UKSPerkTreeBase::GetHoverCursor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.GetHoverCursor");

	UKSPerkTreeBase_GetHoverCursor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPerkTreeBase.GetDefaultFocusNode
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSPerkTreeNodeBase*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSPerkTreeNodeBase* UKSPerkTreeBase::GetDefaultFocusNode()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.GetDefaultFocusNode");

	UKSPerkTreeBase_GetDefaultFocusNode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPerkTreeBase.BindNode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKSPerkTreeNodeBase**    TreeNode                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSPerkTreeBase::BindNode(class UKSPerkTreeNodeBase** TreeNode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeBase.BindNode");

	UKSPerkTreeBase_BindNode_Params params;
	params.TreeNode = TreeNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeEdgeBase.SetViewByState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSPerkTreeEdgeInfo*    EdgeInfo                       (Parm)

void UKSPerkTreeEdgeBase::SetViewByState(struct FKSPerkTreeEdgeInfo* EdgeInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeEdgeBase.SetViewByState");

	UKSPerkTreeEdgeBase_SetViewByState_Params params;
	params.EdgeInfo = EdgeInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeNodeBase.SetNodeState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// EPerkTreeNodeState*            NewNodeState                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSPerkTreeNodeBase::SetNodeState(EPerkTreeNodeState* NewNodeState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeNodeBase.SetNodeState");

	UKSPerkTreeNodeBase_SetNodeState_Params params;
	params.NewNodeState = NewNodeState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeNodeBase.RefreshView
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UKSPerkTreeNodeBase::RefreshView()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeNodeBase.RefreshView");

	UKSPerkTreeNodeBase_RefreshView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPerkTreeNodeBase.GetNodeState
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EPerkTreeNodeState             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EPerkTreeNodeState UKSPerkTreeNodeBase::GetNodeState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPerkTreeNodeBase.GetNodeState");

	UKSPerkTreeNodeBase_GetNodeState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.SetActiveAmmoWidget
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UClass**                 NewWidgetClass                 (Parm, ZeroConstructor, IsPlainOldData)
// class AKSWeapon**              NewWeapon                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerAmmoLoaderWidget::SetActiveAmmoWidget(class UClass** NewWidgetClass, class AKSWeapon** NewWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAmmoLoaderWidget.SetActiveAmmoWidget");

	UKSPlayerAmmoLoaderWidget_SetActiveAmmoWidget_Params params;
	params.NewWidgetClass = NewWidgetClass;
	params.NewWeapon = NewWeapon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.GetActiveAmmoWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UKSAmmoWidget*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSAmmoWidget* UKSPlayerAmmoLoaderWidget::GetActiveAmmoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAmmoLoaderWidget.GetActiveAmmoWidget");

	UKSPlayerAmmoLoaderWidget_GetActiveAmmoWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerAmmoLoaderWidget.ClearActiveAmmoWidget
// (Native, Event, Protected, BlueprintEvent)

void UKSPlayerAmmoLoaderWidget::ClearActiveAmmoWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerAmmoLoaderWidget.ClearActiveAmmoWidget");

	UKSPlayerAmmoLoaderWidget_ClearActiveAmmoWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerCardModuleBase.View_SetPlayer
// (Native, Public, BlueprintCallable)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)
// EKSPlayerOnlineStatus*         PlayerStatus                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPortalFriend                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPending                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerCardModuleBase::View_SetPlayer(class UPUMG_PlayerInfo** playerinfo, EKSPlayerOnlineStatus* PlayerStatus, bool* IsPortalFriend, bool* IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerCardModuleBase.View_SetPlayer");

	UKSPlayerCardModuleBase_View_SetPlayer_Params params;
	params.playerinfo = playerinfo;
	params.PlayerStatus = PlayerStatus;
	params.IsPortalFriend = IsPortalFriend;
	params.IsPending = IsPending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerCardModuleBase.OnPlayerUpdate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)
// EKSPlayerOnlineStatus*         PlayerStatus                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPortalFriend                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPending                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerCardModuleBase::OnPlayerUpdate(class UPUMG_PlayerInfo** playerinfo, EKSPlayerOnlineStatus* PlayerStatus, bool* IsPortalFriend, bool* IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerCardModuleBase.OnPlayerUpdate");

	UKSPlayerCardModuleBase_OnPlayerUpdate_Params params;
	params.playerinfo = playerinfo;
	params.PlayerStatus = PlayerStatus;
	params.IsPortalFriend = IsPortalFriend;
	params.IsPending = IsPending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerCardModuleBase.HandlePlayerDataUpdated
// (Final, Native, Protected)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerCardModuleBase::HandlePlayerDataUpdated(class UPUMG_PlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerCardModuleBase.HandlePlayerDataUpdated");

	UKSPlayerCardModuleBase_HandlePlayerDataUpdated_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelIncremented
// (Final, Native, Protected)
// Parameters:
// class UKSActivityInstance**    ActivityInstance               (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerDataFactory::HandlePlayerLevelIncremented(class UKSActivityInstance** ActivityInstance, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelIncremented");

	UKSPlayerDataFactory_HandlePlayerLevelIncremented_Params params;
	params.ActivityInstance = ActivityInstance;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelChanged
// (Final, Native, Protected)
// Parameters:
// class UKSActivityInstance**    Activity                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Tier                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Count                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerDataFactory::HandlePlayerLevelChanged(class UKSActivityInstance** Activity, int* Tier, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.HandlePlayerLevelChanged");

	UKSPlayerDataFactory_HandlePlayerLevelChanged_Params params;
	params.Activity = Activity;
	params.Tier = Tier;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetRogueBucksCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSPlayerDataFactory::GetRogueBucksCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetRogueBucksCount");

	UKSPlayerDataFactory_GetRogueBucksCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetReputationCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSPlayerDataFactory::GetReputationCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetReputationCount");

	UKSPlayerDataFactory_GetReputationCount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSPlayerDataFactory::GetPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetPlayerLevel");

	UKSPlayerDataFactory_GetPlayerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSPlayerDataFactory::GetPlayerId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetPlayerId");

	UKSPlayerDataFactory_GetPlayerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerDataFactory.GetPlayerBannerIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSPlayerDataFactory::GetPlayerBannerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerDataFactory.GetPlayerBannerIndex");

	UKSPlayerDataFactory_GetPlayerBannerIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PercentValue                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthSegmentBase::View_SetResidualValue(float* PercentValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualValue");

	UKSPlayerHealthSegmentBase_View_SetResidualValue_Params params;
	params.PercentValue = PercentValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualColor
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthSegmentBase::View_SetResidualColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetResidualColor");

	UKSPlayerHealthSegmentBase_View_SetResidualColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainValue
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PercentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCanTriggerPulse               (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthSegmentBase::View_SetMainValue(float* PercentValue, bool* bCanTriggerPulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainValue");

	UKSPlayerHealthSegmentBase_View_SetMainValue_Params params;
	params.PercentValue = PercentValue;
	params.bCanTriggerPulse = bCanTriggerPulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainColor
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           Color                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthSegmentBase::View_SetMainColor(struct FLinearColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_SetMainColor");

	UKSPlayerHealthSegmentBase_View_SetMainColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayEmptiedPulse
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKSPlayerHealthSegmentBase::View_PlayEmptiedPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayEmptiedPulse");

	UKSPlayerHealthSegmentBase_View_PlayEmptiedPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayDamagePulse
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           PeakColor                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           BaseColor                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthSegmentBase::View_PlayDamagePulse(struct FLinearColor* PeakColor, struct FLinearColor* BaseColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthSegmentBase.View_PlayDamagePulse");

	UKSPlayerHealthSegmentBase_View_PlayDamagePulse_Params params;
	params.PeakColor = PeakColor;
	params.BaseColor = BaseColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualPercent
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         ResidualPercent                (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::View_SetResidualPercent(float* ResidualPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualPercent");

	UKSPlayerHealthWidgetBase_View_SetResidualPercent_Params params;
	params.ResidualPercent = ResidualPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualMode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsHealing                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::View_SetResidualMode(bool* IsHealing)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualMode");

	UKSPlayerHealthWidgetBase_View_SetResidualMode_Params params;
	params.IsHealing = IsHealing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualAlpha
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         ResidualAlpha                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::View_SetResidualAlpha(float* ResidualAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetResidualAlpha");

	UKSPlayerHealthWidgetBase_View_SetResidualAlpha_Params params;
	params.ResidualAlpha = ResidualAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthTextValue
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         HealthValue                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OverhealValue                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::View_SetHealthTextValue(float* HealthValue, float* OverhealValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthTextValue");

	UKSPlayerHealthWidgetBase_View_SetHealthTextValue_Params params;
	params.HealthValue = HealthValue;
	params.OverhealValue = OverhealValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthPercent
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         HealthPercent                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::View_SetHealthPercent(float* HealthPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthPercent");

	UKSPlayerHealthWidgetBase_View_SetHealthPercent_Params params;
	params.HealthPercent = HealthPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthMode
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDowned                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsOverhealed                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::View_SetHealthMode(bool* IsDowned, bool* IsOverhealed)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_SetHealthMode");

	UKSPlayerHealthWidgetBase_View_SetHealthMode_Params params;
	params.IsDowned = IsDowned;
	params.IsOverhealed = IsOverhealed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayDamagePulse
// (Event, Public, BlueprintEvent)

void UKSPlayerHealthWidgetBase::View_PlayDamagePulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_PlayDamagePulse");

	UKSPlayerHealthWidgetBase_View_PlayDamagePulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.View_OnDeathStateChanged
// (Event, Public, BlueprintEvent)

void UKSPlayerHealthWidgetBase::View_OnDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.View_OnDeathStateChanged");

	UKSPlayerHealthWidgetBase_View_OnDeathStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnJobChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UKSJobItem**             Job                            (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::OnJobChanged(class UKSJobItem** Job)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.OnJobChanged");

	UKSPlayerHealthWidgetBase_OnJobChanged_Params params;
	params.Job = Job;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthMeterStateChanged
// (Event, Public, BlueprintEvent)

void UKSPlayerHealthWidgetBase::OnHealthMeterStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthMeterStateChanged");

	UKSPlayerHealthWidgetBase_OnHealthMeterStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthDecreased
// (Event, Public, BlueprintEvent)

void UKSPlayerHealthWidgetBase::OnHealthDecreased()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.OnHealthDecreased");

	UKSPlayerHealthWidgetBase_OnHealthDecreased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandlePlayerDownedChanged
// (Final, Native, Protected)
// Parameters:
// class AKSPlayerState**         pKSPlayerState                 (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerHealthWidgetBase::HandlePlayerDownedChanged(class AKSPlayerState** pKSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.HandlePlayerDownedChanged");

	UKSPlayerHealthWidgetBase_HandlePlayerDownedChanged_Params params;
	params.pKSPlayerState = pKSPlayerState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleJobChanged
// (Final, Native, Protected)

void UKSPlayerHealthWidgetBase::HandleJobChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleJobChanged");

	UKSPlayerHealthWidgetBase_HandleJobChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleDeathStateChanged
// (Final, Native, Protected)

void UKSPlayerHealthWidgetBase::HandleDeathStateChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerHealthWidgetBase.HandleDeathStateChanged");

	UKSPlayerHealthWidgetBase_HandleDeathStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerInfo.ViewExternalProfile
// (Final, Native, Public, BlueprintCallable, Const)

void UKSPlayerInfo::ViewExternalProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.ViewExternalProfile");

	UKSPlayerInfo_ViewExternalProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerInfo.ToggleDND
// (Final, Native, Public, BlueprintCallable)

void UKSPlayerInfo::ToggleDND()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.ToggleDND");

	UKSPlayerInfo_ToggleDND_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerInfo.ShouldShowViewGamercardForPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::ShouldShowViewGamercardForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.ShouldShowViewGamercardForPlayer");

	UKSPlayerInfo_ShouldShowViewGamercardForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.ShouldShowViewExternalProfile
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::ShouldShowViewExternalProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.ShouldShowViewExternalProfile");

	UKSPlayerInfo_ShouldShowViewExternalProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.ShouldShowInviteToPartyForPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::ShouldShowInviteToPartyForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.ShouldShowInviteToPartyForPlayer");

	UKSPlayerInfo_ShouldShowInviteToPartyForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.ShouldShowCrossplayIconForPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::ShouldShowCrossplayIconForPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.ShouldShowCrossplayIconForPlayer");

	UKSPlayerInfo_ShouldShowCrossplayIconForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsSuggestedFriend
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsSuggestedFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsSuggestedFriend");

	UKSPlayerInfo_IsSuggestedFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsSamePortalAsLocalPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsSamePortalAsLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsSamePortalAsLocalPlayer");

	UKSPlayerInfo_IsSamePortalAsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsRequestingFriend
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsRequestingFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsRequestingFriend");

	UKSPlayerInfo_IsRequestingFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsPendingFriend
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsPendingFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsPendingFriend");

	UKSPlayerInfo_IsPendingFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsOnline
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsOnline()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsOnline");

	UKSPlayerInfo_IsOnline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsMuted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsMuted()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsMuted");

	UKSPlayerInfo_IsMuted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsInQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsInQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsInQueue");

	UKSPlayerInfo_IsInQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsInMatch
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsInMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsInMatch");

	UKSPlayerInfo_IsInMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsInLocalParty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsInLocalParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsInLocalParty");

	UKSPlayerInfo_IsInLocalParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsInLobby
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsInLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsInLobby");

	UKSPlayerInfo_IsInLobby_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsFriend
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsFriend()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsFriend");

	UKSPlayerInfo_IsFriend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.IsDND
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::IsDND()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.IsDND");

	UKSPlayerInfo_IsDND_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.InviteToParty
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   OutErrorText                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::InviteToParty(struct FText* OutErrorText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.InviteToParty");

	UKSPlayerInfo_InviteToParty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutErrorText != nullptr)
		*OutErrorText = params.OutErrorText;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.HasPortalRelationship
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::HasPortalRelationship()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.HasPortalRelationship");

	UKSPlayerInfo_HasPortalRelationship_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.HasPortalInfoForClientPortal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::HasPortalInfoForClientPortal()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.HasPortalInfoForClientPortal");

	UKSPlayerInfo_HasPortalInfoForClientPortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.HasHRRelationship
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::HasHRRelationship()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.HasHRRelationship");

	UKSPlayerInfo_HasHRRelationship_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetStatusMessage
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSPlayerInfo::GetStatusMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetStatusMessage");

	UKSPlayerInfo_GetStatusMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetRichPresenceText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSPlayerInfo::GetRichPresenceText()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetRichPresenceText");

	UKSPlayerInfo_GetRichPresenceText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetPlayerSelectedInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EKSPlayerInputType             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSPlayerInputType UKSPlayerInfo::GetPlayerSelectedInputType()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetPlayerSelectedInputType");

	UKSPlayerInfo_GetPlayerSelectedInputType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetPlayersDisplayedSkin
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSItem*                 SkinItem                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::GetPlayersDisplayedSkin(class UKSItem** SkinItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetPlayersDisplayedSkin");

	UKSPlayerInfo_GetPlayersDisplayedSkin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkinItem != nullptr)
		*SkinItem = params.SkinItem;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetPlayerPlatformType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EKSPlatformType                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSPlatformType UKSPlayerInfo::GetPlayerPlatformType()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetPlayerPlatformType");

	UKSPlayerInfo_GetPlayerPlatformType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetPlayerOnlineStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EKSPlayerOnlineStatus          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSPlayerOnlineStatus UKSPlayerInfo::GetPlayerOnlineStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetPlayerOnlineStatus");

	UKSPlayerInfo_GetPlayerOnlineStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetPlayerLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSPlayerInfo::GetPlayerLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetPlayerLevel");

	UKSPlayerInfo_GetPlayerLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetPlayerAliases
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPlayerAlias>    ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FPlayerAlias> UKSPlayerInfo::GetPlayerAliases()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetPlayerAliases");

	UKSPlayerInfo_GetPlayerAliases_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.GetEquippedAccountItem
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPlayerAccountSlot*            eSlot                          (Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem*                 EquippedItem                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::GetEquippedAccountItem(EPlayerAccountSlot* eSlot, class UKSItem** EquippedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.GetEquippedAccountItem");

	UKSPlayerInfo_GetEquippedAccountItem_Params params;
	params.eSlot = eSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EquippedItem != nullptr)
		*EquippedItem = params.EquippedItem;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.CanBeSpectated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::CanBeSpectated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.CanBeSpectated");

	UKSPlayerInfo_CanBeSpectated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerInfo.CanBeChallenged
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerInfo::CanBeChallenged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerInfo.CanBeChallenged");

	UKSPlayerInfo_CanBeChallenged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.JobSelectionEntryDetails.IsSelf
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJobSelectionEntryDetails::IsSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.IsSelf");

	UJobSelectionEntryDetails_IsSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.JobSelectionEntryDetails.IsOwned
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UJobSelectionEntryDetails::IsOwned()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.IsOwned");

	UJobSelectionEntryDetails_IsOwned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.JobSelectionEntryDetails.GetJobName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UJobSelectionEntryDetails::GetJobName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.GetJobName");

	UJobSelectionEntryDetails_GetJobName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.JobSelectionEntryDetails.GetJobItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSJobItem*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSJobItem* UJobSelectionEntryDetails::GetJobItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.JobSelectionEntryDetails.GetJobItem");

	UJobSelectionEntryDetails_GetJobItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.UIX_RequestJobSelect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (Parm, ZeroConstructor, IsPlainOldData)
// EJobSelectionState*            RequestedState                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerJobSelectWidgetBase::UIX_RequestJobSelect(class UJobSelectionEntryDetails** JobEntry, EJobSelectionState* RequestedState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.UIX_RequestJobSelect");

	UKSPlayerJobSelectWidgetBase_UIX_RequestJobSelect_Params params;
	params.JobEntry = JobEntry;
	params.RequestedState = RequestedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnResetSelection
// (Event, Public, BlueprintEvent)

void UKSPlayerJobSelectWidgetBase::OnResetSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnResetSelection");

	UKSPlayerJobSelectWidgetBase_OnResetSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnPlayerSelectionStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EPlayerSelectionState*         NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerJobSelectWidgetBase::OnPlayerSelectionStateChanged(EPlayerSelectionState* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnPlayerSelectionStateChanged");

	UKSPlayerJobSelectWidgetBase_OnPlayerSelectionStateChanged_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          EnemyTeam                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerJobSelectWidgetBase::OnJobEntryChanged(class UJobSelectionEntryDetails** JobEntry, bool* EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntryChanged");

	UKSPlayerJobSelectWidgetBase_OnJobEntryChanged_Params params;
	params.JobEntry = JobEntry;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntriesReady
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class UJobSelectionEntryDetails*>* JobEntries                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          EnemyTeam                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerJobSelectWidgetBase::OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*>* JobEntries, bool* EnemyTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.OnJobEntriesReady");

	UKSPlayerJobSelectWidgetBase_OnJobEntriesReady_Params params;
	params.JobEntries = JobEntries;
	params.EnemyTeam = EnemyTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionManagerReady
// (Final, Native, Protected)
// Parameters:
// class UKSJobSelectionManager** JobSelectionManager            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSPlayerJobSelectWidgetBase::HandleJobSelectionManagerReady(class UKSJobSelectionManager** JobSelectionManager)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionManagerReady");

	UKSPlayerJobSelectWidgetBase_HandleJobSelectionManagerReady_Params params;
	params.JobSelectionManager = JobSelectionManager;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionInitialized
// (Final, Native, Protected)

void UKSPlayerJobSelectWidgetBase::HandleJobSelectionInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobSelectionInitialized");

	UKSPlayerJobSelectWidgetBase_HandleJobSelectionInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChangedForEnemies
// (Final, Native, Protected)
// Parameters:
// struct FJobSelectionEntry*     JobEntry                       (Parm)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryStateChangedForEnemies(struct FJobSelectionEntry* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChangedForEnemies");

	UKSPlayerJobSelectWidgetBase_HandleJobEntryStateChangedForEnemies_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChanged
// (Final, Native, Protected)
// Parameters:
// struct FJobSelectionEntry*     JobEntry                       (Parm)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryStateChanged(struct FJobSelectionEntry* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryStateChanged");

	UKSPlayerJobSelectWidgetBase_HandleJobEntryStateChanged_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAddedForEnemies
// (Final, Native, Protected)
// Parameters:
// struct FJobSelectionEntry*     JobEntry                       (Parm)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryAddedForEnemies(struct FJobSelectionEntry* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAddedForEnemies");

	UKSPlayerJobSelectWidgetBase_HandleJobEntryAddedForEnemies_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAdded
// (Final, Native, Protected)
// Parameters:
// struct FJobSelectionEntry*     JobEntry                       (Parm)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryAdded(struct FJobSelectionEntry* JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAdded");

	UKSPlayerJobSelectWidgetBase_HandleJobEntryAdded_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAcknowledge
// (Final, Native, Protected)
// Parameters:
// int*                           ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)
// EJobSelectionState*            RequestState                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerJobSelectWidgetBase::HandleJobEntryAcknowledge(int* ItemId, bool* bSuccess, EJobSelectionState* RequestState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.HandleJobEntryAcknowledge");

	UKSPlayerJobSelectWidgetBase_HandleJobEntryAcknowledge_Params params;
	params.ItemId = ItemId;
	params.bSuccess = bSuccess;
	params.RequestState = RequestState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobSelectionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSJobSelectionComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSJobSelectionComponent* UKSPlayerJobSelectWidgetBase::GetJobSelectionComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobSelectionComponent");

	UKSPlayerJobSelectWidgetBase_GetJobSelectionComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobItemById
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           JobItemId                      (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSJobItem* UKSPlayerJobSelectWidgetBase::GetJobItemById(int* JobItemId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.GetJobItemById");

	UKSPlayerJobSelectWidgetBase_GetJobItemById_Params params;
	params.JobItemId = JobItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerJobSelectWidgetBase.BindListenersForTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AKSTeamState**           Team                           (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerJobSelectWidgetBase::BindListenersForTeam(class AKSTeamState** Team)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerJobSelectWidgetBase.BindListenersForTeam");

	UKSPlayerJobSelectWidgetBase_BindListenersForTeam_Params params;
	params.Team = Team;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByNameWithProfiles
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  PlayerName                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        OnReponse                      (Parm, ZeroConstructor)
// struct FKSPlayerQueryHandle    OutHandle                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerQueryDataFactory::QueryPlayersByNameWithProfiles(struct FText* PlayerName, struct FScriptDelegate* OnReponse, struct FKSPlayerQueryHandle* OutHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByNameWithProfiles");

	UKSPlayerQueryDataFactory_QueryPlayersByNameWithProfiles_Params params;
	params.PlayerName = PlayerName;
	params.OnReponse = OnReponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHandle != nullptr)
		*OutHandle = params.OutHandle;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText*                  PlayerName                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate*        OnReponse                      (Parm, ZeroConstructor)
// struct FKSPlayerQueryHandle    OutHandle                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPlayerQueryDataFactory::QueryPlayersByName(struct FText* PlayerName, struct FScriptDelegate* OnReponse, struct FKSPlayerQueryHandle* OutHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.QueryPlayersByName");

	UKSPlayerQueryDataFactory_QueryPlayersByName_Params params;
	params.PlayerName = PlayerName;
	params.OnReponse = OnReponse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHandle != nullptr)
		*OutHandle = params.OutHandle;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.OnTimeoutCheck
// (Final, Native, Protected)

void UKSPlayerQueryDataFactory::OnTimeoutCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.OnTimeoutCheck");

	UKSPlayerQueryDataFactory_OnTimeoutCheck_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.GetQueriedName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKSPlayerQueryHandle*   InHandle                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FText UKSPlayerQueryDataFactory::GetQueriedName(struct FKSPlayerQueryHandle* InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.GetQueriedName");

	UKSPlayerQueryDataFactory_GetQueriedName_Params params;
	params.InHandle = InHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.GetPlayerQueryErrorMessage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EKSPlayerQueryError*           Error                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSPlayerQueryDataFactory::STATIC_GetPlayerQueryErrorMessage(EKSPlayerQueryError* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.GetPlayerQueryErrorMessage");

	UKSPlayerQueryDataFactory_GetPlayerQueryErrorMessage_Params params;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPlayerQueryDataFactory.CancelQuery
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FKSPlayerQueryHandle    InHandle                       (Parm, OutParm, ReferenceParm)

void UKSPlayerQueryDataFactory::CancelQuery(struct FKSPlayerQueryHandle* InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerQueryDataFactory.CancelQuery");

	UKSPlayerQueryDataFactory_CancelQuery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InHandle != nullptr)
		*InHandle = params.InHandle;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.TriggerDisplayUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          ForceUpdate                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::TriggerDisplayUpdate(bool* ForceUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.TriggerDisplayUpdate");

	UKSPlayerShopWidgetBase_TriggerDisplayUpdate_Params params;
	params.ForceUpdate = ForceUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.ShopItemChanged
// (Native, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FShopItem*              ChangedItem                    (ConstParm, Parm, OutParm, ReferenceParm)

void UKSPlayerShopWidgetBase::ShopItemChanged(struct FShopItem* ChangedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.ShopItemChanged");

	UKSPlayerShopWidgetBase_ShopItemChanged_Params params;
	params.ChangedItem = ChangedItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopState
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsOpen                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::SetShopState(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopState");

	UKSPlayerShopWidgetBase_SetShopState_Params params;
	params.IsOpen = IsOpen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopContent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UKSPlayerShopWidgetBase::SetShopContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetShopContent");

	UKSPlayerShopWidgetBase_SetShopContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetPromptShow
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          ShouldShowPrompt               (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::SetPromptShow(bool* ShouldShowPrompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetPromptShow");

	UKSPlayerShopWidgetBase_SetPromptShow_Params params;
	params.ShouldShowPrompt = ShouldShowPrompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.SetCashValue
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// int*                           CashValue                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::SetCashValue(int* CashValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.SetCashValue");

	UKSPlayerShopWidgetBase_SetCashValue_Params params;
	params.CashValue = CashValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.PurchaseAcknowledge
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// EShopItemType*                 ShopItemType                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::PurchaseAcknowledge(EShopItemType* ShopItemType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.PurchaseAcknowledge");

	UKSPlayerShopWidgetBase_PurchaseAcknowledge_Params params;
	params.ShopItemType = ShopItemType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleTeamsFlipped
// (Final, Native, Protected)

void UKSPlayerShopWidgetBase::HandleTeamsFlipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleTeamsFlipped");

	UKSPlayerShopWidgetBase_HandleTeamsFlipped_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOpened
// (Final, Native, Protected)

void UKSPlayerShopWidgetBase::HandleShopOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopOpened");

	UKSPlayerShopWidgetBase_HandleShopOpened_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopItemChanged
// (Final, Native, Protected)
// Parameters:
// struct FShopItem*              ChangedItem                    (Parm)

void UKSPlayerShopWidgetBase::HandleShopItemChanged(struct FShopItem* ChangedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopItemChanged");

	UKSPlayerShopWidgetBase_HandleShopItemChanged_Params params;
	params.ChangedItem = ChangedItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopClosed
// (Final, Native, Protected)

void UKSPlayerShopWidgetBase::HandleShopClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopClosed");

	UKSPlayerShopWidgetBase_HandleShopClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopAvailabilityChanged
// (Final, Native, Protected)
// Parameters:
// bool*                          bAvailable                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::HandleShopAvailabilityChanged(bool* bAvailable)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleShopAvailabilityChanged");

	UKSPlayerShopWidgetBase_HandleShopAvailabilityChanged_Params params;
	params.bAvailable = bAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandlePurchaseAcknowledged
// (Final, Native, Protected)
// Parameters:
// EShopItemType*                 ShopItemType                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSuccess                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::HandlePurchaseAcknowledged(EShopItemType* ShopItemType, bool* bSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandlePurchaseAcknowledged");

	UKSPlayerShopWidgetBase_HandlePurchaseAcknowledged_Params params;
	params.ShopItemType = ShopItemType;
	params.bSuccess = bSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.HandleCashChanged
// (Final, Native, Protected)
// Parameters:
// int*                           Cash                           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSPlayerShopWidgetBase::HandleCashChanged(int* Cash, int* Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.HandleCashChanged");

	UKSPlayerShopWidgetBase_HandleCashChanged_Params params;
	params.Cash = Cash;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerShopWidgetBase.CheckForValidPlayerState
// (Final, Native, Protected)

void UKSPlayerShopWidgetBase::CheckForValidPlayerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerShopWidgetBase.CheckForValidPlayerState");

	UKSPlayerShopWidgetBase_CheckForValidPlayerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPlayerWhoDataFactory.ClearSearchResults
// (Final, Native, Public, BlueprintCallable)

void UKSPlayerWhoDataFactory::ClearSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPlayerWhoDataFactory.ClearSearchResults");

	UKSPlayerWhoDataFactory_ClearSearchResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewSetCaptureProgress
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float*                         ProgressPercent                (Parm, ZeroConstructor, IsPlainOldData)

void UKSPointObjectiveMarkerWidget::ViewSetCaptureProgress(float* ProgressPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewSetCaptureProgress");

	UKSPointObjectiveMarkerWidget_ViewSetCaptureProgress_Params params;
	params.ProgressPercent = ProgressPercent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerValue
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         TimerSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalTimerSeconds              (Parm, ZeroConstructor, IsPlainOldData)

void UKSPointObjectiveMarkerWidget::ViewApplyTimerValue(float* TimerSeconds, float* TotalTimerSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ViewApplyTimerValue");

	UKSPointObjectiveMarkerWidget_ViewApplyTimerValue_Params params;
	params.TimerSeconds = TimerSeconds;
	params.TotalTimerSeconds = TotalTimerSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ShouldHideObjectiveIcon
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::ShouldHideObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ShouldHideObjectiveIcon");

	UKSPointObjectiveMarkerWidget_ShouldHideObjectiveIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetView
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FKSPointObjectiveMarkerViewState* ViewState                      (Parm)

void UKSPointObjectiveMarkerWidget::SetView(struct FKSPointObjectiveMarkerViewState* ViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetView");

	UKSPointObjectiveMarkerWidget_SetView_Params params;
	params.ViewState = ViewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorsForState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TMap<EPointObjectiveMarkerTeamState, struct FLinearColor>* StateColors                    (Parm, ZeroConstructor)

void UKSPointObjectiveMarkerWidget::SetTeamColorsForState(TMap<EPointObjectiveMarkerTeamState, struct FLinearColor>* StateColors)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorsForState");

	UKSPointObjectiveMarkerWidget_SetTeamColorsForState_Params params;
	params.StateColors = StateColors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorForState
// (Final, Native, Protected, HasDefaults, BlueprintCallable)
// Parameters:
// EPointObjectiveMarkerTeamState* ObjectiveState                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           StateColor                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::SetTeamColorForState(EPointObjectiveMarkerTeamState* ObjectiveState, struct FLinearColor* StateColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.SetTeamColorForState");

	UKSPointObjectiveMarkerWidget_SetTeamColorForState_Params params;
	params.ObjectiveState = ObjectiveState;
	params.StateColor = StateColor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.OnControlTeamScoreUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AKSTeamState**           TeamState                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPointObjectiveMarkerWidget::OnControlTeamScoreUpdated(class AKSTeamState** TeamState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.OnControlTeamScoreUpdated");

	UKSPointObjectiveMarkerWidget_OnControlTeamScoreUpdated_Params params;
	params.TeamState = TeamState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInTimerState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::IsInTimerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInTimerState");

	UKSPointObjectiveMarkerWidget_IsInTimerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInProgressState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::IsInProgressState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInProgressState");

	UKSPointObjectiveMarkerWidget_IsInProgressState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInMatchTimerState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::IsInMatchTimerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInMatchTimerState");

	UKSPointObjectiveMarkerWidget_IsInMatchTimerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInLockedState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::IsInLockedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInLockedState");

	UKSPointObjectiveMarkerWidget_IsInLockedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCountdownState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::IsInCountdownState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCountdownState");

	UKSPointObjectiveMarkerWidget_IsInCountdownState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInContestedState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::IsInContestedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInContestedState");

	UKSPointObjectiveMarkerWidget_IsInContestedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCapturedState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::IsInCapturedState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.IsInCapturedState");

	UKSPointObjectiveMarkerWidget_IsInCapturedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandlePhaseChanged
// (Final, Native, Protected)
// Parameters:
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (Parm, ZeroConstructor, IsPlainOldData)

void UKSPointObjectiveMarkerWidget::HandlePhaseChanged(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandlePhaseChanged");

	UKSPointObjectiveMarkerWidget_HandlePhaseChanged_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleControlTeamScoreUpdated
// (Final, Native, Protected)
// Parameters:
// class AKSTeamState**           TeamState                      (Parm, ZeroConstructor, IsPlainOldData)
// class AKSControlPoint**        ControlPoint                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSPointObjectiveMarkerWidget::HandleControlTeamScoreUpdated(class AKSTeamState** TeamState, class AKSControlPoint** ControlPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleControlTeamScoreUpdated");

	UKSPointObjectiveMarkerWidget_HandleControlTeamScoreUpdated_Params params;
	params.TeamState = TeamState;
	params.ControlPoint = ControlPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleBombStateChanged
// (Final, Native, Protected)
// Parameters:
// struct FKSNeutralBombState*    BombState                      (Parm)

void UKSPointObjectiveMarkerWidget::HandleBombStateChanged(struct FKSNeutralBombState* BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.HandleBombStateChanged");

	UKSPointObjectiveMarkerWidget_HandleBombStateChanged_Params params;
	params.BombState = BombState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetTeamColorForState
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            TeamColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::GetTeamColorForState(struct FLinearColor* TeamColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetTeamColorForState");

	UKSPointObjectiveMarkerWidget_GetTeamColorForState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamColor != nullptr)
		*TeamColor = params.TeamColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetCurrentViewState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FKSPointObjectiveMarkerViewState ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FKSPointObjectiveMarkerViewState UKSPointObjectiveMarkerWidget::GetCurrentViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetCurrentViewState");

	UKSPointObjectiveMarkerWidget_GetCurrentViewState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedObjective
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSObjectiveBase*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSObjectiveBase* UKSPointObjectiveMarkerWidget::GetAssociatedObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.GetAssociatedObjective");

	UKSPointObjectiveMarkerWidget_GetAssociatedObjective_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.DoesAttackingTeamExist
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           IsLocalPlayerOnAttackingTeam   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPointObjectiveMarkerWidget::DoesAttackingTeamExist(bool* IsLocalPlayerOnAttackingTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.DoesAttackingTeamExist");

	UKSPointObjectiveMarkerWidget_DoesAttackingTeamExist_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocalPlayerOnAttackingTeam != nullptr)
		*IsLocalPlayerOnAttackingTeam = params.IsLocalPlayerOnAttackingTeam;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPointObjectiveMarkerWidget.ControlPointStateUpdated
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class AKSControlPoint**        Objective                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSPointObjectiveMarkerWidget::ControlPointStateUpdated(class AKSControlPoint** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPointObjectiveMarkerWidget.ControlPointStateUpdated");

	UKSPointObjectiveMarkerWidget_ControlPointStateUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPortalOffersWidget.GetPortalOfferItems
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UPUMG_StoreItem*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_StoreItem*> UKSPortalOffersWidget::GetPortalOfferItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPortalOffersWidget.GetPortalOfferItems");

	UKSPortalOffersWidget_GetPortalOfferItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPortalOffersWidget.GetItemHelper
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSPortalOffersWidget::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPortalOffersWidget.GetItemHelper");

	UKSPortalOffersWidget_GetItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPurchaseConfirmationWidget.GetStoreItemHelper
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSPurchaseConfirmationWidget::GetStoreItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseConfirmationWidget.GetStoreItemHelper");

	UKSPurchaseConfirmationWidget_GetStoreItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPurchaseConfirmationWidget.GetBundleContents
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UPUMG_StoreItem*> BundleItems                    (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSPurchaseConfirmationWidget::GetBundleContents(class UPUMG_StoreItem** StoreItem, TArray<class UPUMG_StoreItem*>* BundleItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseConfirmationWidget.GetBundleContents");

	UKSPurchaseConfirmationWidget_GetBundleContents_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BundleItems != nullptr)
		*BundleItems = params.BundleItems;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSPurchaseModal.SetupBindings
// (Final, Native, Public, BlueprintCallable)

void UKSPurchaseModal::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseModal.SetupBindings");

	UKSPurchaseModal_SetupBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPurchaseModal.HandleShowPurchaseModal
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItem**        Item                           (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItemPrice**   Price                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSPurchaseModal::HandleShowPurchaseModal(class UPUMG_StoreItem** Item, class UPUMG_StoreItemPrice** Price)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseModal.HandleShowPurchaseModal");

	UKSPurchaseModal_HandleShowPurchaseModal_Params params;
	params.Item = Item;
	params.Price = Price;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSPurchaseModal.GetStoreItemHelper
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPUMG_StoreItemHelper*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_StoreItemHelper* UKSPurchaseModal::GetStoreItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSPurchaseModal.GetStoreItemHelper");

	UKSPurchaseModal_GetStoreItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.SetSelectedQueueId
// (Native, Public, BlueprintCallable)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::SetSelectedQueueId(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.SetSelectedQueueId");

	UKSQueueDataFactory_SetSelectedQueueId_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.SetPreviousCustomMatchMemberIds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int64_t>*               PreviousMembers                (Parm, ZeroConstructor)

void UKSQueueDataFactory::SetPreviousCustomMatchMemberIds(TArray<int64_t>* PreviousMembers)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.SetPreviousCustomMatchMemberIds");

	UKSQueueDataFactory_SetPreviousCustomMatchMemberIds_Params params;
	params.PreviousMembers = PreviousMembers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.SetPendingMapForCustomQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           mapId                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueDataFactory::SetPendingMapForCustomQueue(int* mapId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.SetPendingMapForCustomQueue");

	UKSQueueDataFactory_SetPendingMapForCustomQueue_Params params;
	params.mapId = mapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.RetryQueuingForSheltered
// (Final, Native, Public)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueDataFactory::RetryQueuingForSheltered(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.RetryQueuingForSheltered");

	UKSQueueDataFactory_RetryQueuingForSheltered_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberUpdate
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_PartyMemberData*  Member                         (Parm)

void UKSQueueDataFactory::OnPartyMemberUpdate(struct FPUMG_PartyMemberData* Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberUpdate");

	UKSQueueDataFactory_OnPartyMemberUpdate_Params params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberEvent
// (Final, Native, Protected)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueDataFactory::OnPartyMemberEvent(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnPartyMemberEvent");

	UKSQueueDataFactory_OnPartyMemberEvent_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.OnPartyEvent
// (Final, Native, Protected)

void UKSQueueDataFactory::OnPartyEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnPartyEvent");

	UKSQueueDataFactory_OnPartyEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.OnInputStateChanged
// (Final, Native, Private)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueDataFactory::OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.OnInputStateChanged");

	UKSQueueDataFactory_OnInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.JoinSelectedQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::JoinSelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.JoinSelectedQueue");

	UKSQueueDataFactory_JoinSelectedQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.IsTutorialQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::IsTutorialQueue(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.IsTutorialQueue");

	UKSQueueDataFactory_IsTutorialQueue_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMTimeout
// (Final, Native, Public)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueDataFactory::HandleShelteredMMTimeout(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMTimeout");

	UKSQueueDataFactory_HandleShelteredMMTimeout_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMSwitchFinish
// (Final, Native, Public)
// Parameters:
// bool*                          bSendNotify                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bClearTimer                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueDataFactory::HandleShelteredMMSwitchFinish(bool* bSendNotify, bool* bClearTimer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMSwitchFinish");

	UKSQueueDataFactory_HandleShelteredMMSwitchFinish_Params params;
	params.bSendNotify = bSendNotify;
	params.bClearTimer = bClearTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMQueueSwitch
// (Final, Native, Public)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueDataFactory::HandleShelteredMMQueueSwitch(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.HandleShelteredMMQueueSwitch");

	UKSQueueDataFactory_HandleShelteredMMQueueSwitch_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueDataFactory.GetSelectedShelteredQueueId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueDataFactory::GetSelectedShelteredQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetSelectedShelteredQueueId");

	UKSQueueDataFactory_GetSelectedShelteredQueueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetSelectedQueueId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueDataFactory::GetSelectedQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetSelectedQueueId");

	UKSQueueDataFactory_GetSelectedQueueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetQueueInfoById
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientQueueInfo        InClientQueueInfo              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::GetQueueInfoById(int* QueueId, struct FClientQueueInfo* InClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetQueueInfoById");

	UKSQueueDataFactory_GetQueueInfoById_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InClientQueueInfo != nullptr)
		*InClientQueueInfo = params.InClientQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetPendingCustomMatchMapId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueDataFactory::GetPendingCustomMatchMapId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetPendingCustomMatchMapId");

	UKSQueueDataFactory_GetPendingCustomMatchMapId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetPenaltyTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueDataFactory::GetPenaltyTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetPenaltyTime");

	UKSQueueDataFactory_GetPenaltyTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetMapRotationsByQueueId
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    MapIds                         (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::GetMapRotationsByQueueId(int* QueueId, TArray<int>* MapIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetMapRotationsByQueueId");

	UKSQueueDataFactory_GetMapRotationsByQueueId_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapIds != nullptr)
		*MapIds = params.MapIds;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetMapInfoById
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           mapId                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FUIMapInfo              MapInfo                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::GetMapInfoById(int* mapId, struct FUIMapInfo* MapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetMapInfoById");

	UKSQueueDataFactory_GetMapInfoById_Params params;
	params.mapId = mapId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapInfo != nullptr)
		*MapInfo = params.MapInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetCustomQueues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FClientQueueInfo> UKSQueueDataFactory::GetCustomQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetCustomQueues");

	UKSQueueDataFactory_GetCustomQueues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.GetCurrentCustomMatchInfo
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FClientQueueInfo        InClientQueueInfo              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::GetCurrentCustomMatchInfo(struct FClientQueueInfo* InClientQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.GetCurrentCustomMatchInfo");

	UKSQueueDataFactory_GetCurrentCustomMatchInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InClientQueueInfo != nullptr)
		*InClientQueueInfo = params.InClientQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.FormatQueueJoinErrorMessage
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FClientQueueInfo*       Queue                          (ConstParm, Parm, OutParm, ReferenceParm)
// EKSQueueJoinError*             Error                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   OutErrorMessage                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueDataFactory::STATIC_FormatQueueJoinErrorMessage(struct FClientQueueInfo* Queue, EKSQueueJoinError* Error, struct FText* OutErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.FormatQueueJoinErrorMessage");

	UKSQueueDataFactory_FormatQueueJoinErrorMessage_Params params;
	params.Queue = Queue;
	params.Error = Error;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutErrorMessage != nullptr)
		*OutErrorMessage = params.OutErrorMessage;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.DetermineQueueIdForShelteredMM
// (Final, Native, Protected, HasOutParms)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientQueueInfo*       QueueInfo                      (ConstParm, Parm, OutParm, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueDataFactory::DetermineQueueIdForShelteredMM(int* QueueId, struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.DetermineQueueIdForShelteredMM");

	UKSQueueDataFactory_DetermineQueueIdForShelteredMM_Params params;
	params.QueueId = QueueId;
	params.QueueInfo = QueueInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinableById
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// EKSQueueJoinError              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSQueueJoinError UKSQueueDataFactory::CheckQueueJoinableById(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinableById");

	UKSQueueDataFactory_CheckQueueJoinableById_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinable
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FClientQueueInfo*       Queue                          (ConstParm, Parm, OutParm, ReferenceParm)
// EKSQueueJoinError              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSQueueJoinError UKSQueueDataFactory::CheckQueueJoinable(struct FClientQueueInfo* Queue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueDataFactory.CheckQueueJoinable");

	UKSQueueDataFactory_CheckQueueJoinable_Params params;
	params.Queue = Queue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UpdateQueuePermissions
// (Final, Native, Protected)

void UKSQueueWidgetBase::UpdateQueuePermissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UpdateQueuePermissions");

	UKSQueueWidgetBase_UpdateQueuePermissions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptRejoinMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueWidgetBase::UIX_AttemptRejoinMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptRejoinMatch");

	UKSQueueWidgetBase_UIX_AttemptRejoinMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptLeaveMatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueWidgetBase::UIX_AttemptLeaveMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptLeaveMatch");

	UKSQueueWidgetBase_UIX_AttemptLeaveMatch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptJoinSelectedQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueWidgetBase::UIX_AttemptJoinSelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptJoinSelectedQueue");

	UKSQueueWidgetBase_UIX_AttemptJoinSelectedQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptCancelQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueWidgetBase::UIX_AttemptCancelQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.UIX_AttemptCancelQueue");

	UKSQueueWidgetBase_UIX_AttemptCancelQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.SetupReadyForQueueing
// (Final, Native, Protected)

void UKSQueueWidgetBase::SetupReadyForQueueing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.SetupReadyForQueueing");

	UKSQueueWidgetBase_SetupReadyForQueueing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.SetupBindings
// (Final, Native, Public, BlueprintCallable)

void UKSQueueWidgetBase::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.SetupBindings");

	UKSQueueWidgetBase_SetupBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.SetCurrentlySelectedQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueWidgetBase::SetCurrentlySelectedQueue(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.SetCurrentlySelectedQueue");

	UKSQueueWidgetBase_SetCurrentlySelectedQueue_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.ReceiveMatchStatusUpdate
// (Final, Native, Protected)
// Parameters:
// EPUMG_MatchStatus*             CurrentMatchStatus             (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueWidgetBase::ReceiveMatchStatusUpdate(EPUMG_MatchStatus* CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.ReceiveMatchStatusUpdate");

	UKSQueueWidgetBase_ReceiveMatchStatusUpdate_Params params;
	params.CurrentMatchStatus = CurrentMatchStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.OnSelectedQueueUpdate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       CurrentSelectedQueue           (Parm)

void UKSQueueWidgetBase::OnSelectedQueueUpdate(struct FClientQueueInfo* CurrentSelectedQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnSelectedQueueUpdate");

	UKSQueueWidgetBase_OnSelectedQueueUpdate_Params params;
	params.CurrentSelectedQueue = CurrentSelectedQueue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.OnQueueStateUpdate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus*             CurrentMatchStatus             (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueWidgetBase::OnQueueStateUpdate(EPUMG_MatchStatus* CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnQueueStateUpdate");

	UKSQueueWidgetBase_OnQueueStateUpdate_Params params;
	params.CurrentMatchStatus = CurrentMatchStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.OnQueuePermissionUpdate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          CanQueue                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueWidgetBase::OnQueuePermissionUpdate(bool* CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnQueuePermissionUpdate");

	UKSQueueWidgetBase_OnQueuePermissionUpdate_Params params;
	params.CanQueue = CanQueue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.OnControlQueuePermissionUpdate
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          CanControl                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueWidgetBase::OnControlQueuePermissionUpdate(bool* CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.OnControlQueuePermissionUpdate");

	UKSQueueWidgetBase_OnControlQueuePermissionUpdate_Params params;
	params.CanControl = CanControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.IsValidQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueWidgetBase::IsValidQueue(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.IsValidQueue");

	UKSQueueWidgetBase_IsValidQueue_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.HandleSelectedQueueIdSet
// (Final, Native, Protected)

void UKSQueueWidgetBase::HandleSelectedQueueIdSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandleSelectedQueueIdSet");

	UKSQueueWidgetBase_HandleSelectedQueueIdSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberRemoved
// (Final, Native, Protected)
// Parameters:
// int64_t*                       PartyMemberId                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueWidgetBase::HandlePartyMemberRemoved(int64_t* PartyMemberId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberRemoved");

	UKSQueueWidgetBase_HandlePartyMemberRemoved_Params params;
	params.PartyMemberId = PartyMemberId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberDataUpdated
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_PartyMemberData*  PartyMember                    (Parm)

void UKSQueueWidgetBase::HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandlePartyMemberDataUpdated");

	UKSQueueWidgetBase_HandlePartyMemberDataUpdated_Params params;
	params.PartyMember = PartyMember;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.HandleMatchStatusUpdate
// (Final, Native, Protected)
// Parameters:
// EPUMG_MatchStatus*             MatchStatus                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueWidgetBase::HandleMatchStatusUpdate(EPUMG_MatchStatus* MatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandleMatchStatusUpdate");

	UKSQueueWidgetBase_HandleMatchStatusUpdate_Params params;
	params.MatchStatus = MatchStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.HandleConfirmLeaveQueue
// (Final, Native, Protected)

void UKSQueueWidgetBase::HandleConfirmLeaveQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.HandleConfirmLeaveQueue");

	UKSQueueWidgetBase_HandleConfirmLeaveQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueueSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo>* ClientCachedQueueInfo          (Parm, ZeroConstructor)
// TArray<struct FQueueSection>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FQueueSection> UKSQueueWidgetBase::GetQueueSections(TArray<struct FClientQueueInfo>* ClientCachedQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueueSections");

	UKSQueueWidgetBase_GetQueueSections_Params params;
	params.ClientCachedQueueInfo = ClientCachedQueueInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FClientQueueInfo> UKSQueueWidgetBase::GetQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueues");

	UKSQueueWidgetBase_GetQueues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueuePermissions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// bool                           CanControl                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanQueue                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UKSQueueWidgetBase::GetQueuePermissions(bool* CanControl, bool* CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueuePermissions");

	UKSQueueWidgetBase_GetQueuePermissions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanControl != nullptr)
		*CanControl = params.CanControl;
	if (CanQueue != nullptr)
		*CanQueue = params.CanQueue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueueInfoById
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientQueueInfo        QueueInfo                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQueueWidgetBase::GetQueueInfoById(int* QueueId, struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueueInfoById");

	UKSQueueWidgetBase_GetQueueInfoById_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueueInfo != nullptr)
		*QueueInfo = params.QueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetQueueDataFactory
// (Final, Native, Protected, Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSQueueDataFactory* UKSQueueWidgetBase::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetQueueDataFactory");

	UKSQueueWidgetBase_GetQueueDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetPartyDataFactory
// (Final, Native, Protected, Const)
// Parameters:
// class UPUMG_PartyDataFactory*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PartyDataFactory* UKSQueueWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetPartyDataFactory");

	UKSQueueWidgetBase_GetPartyDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueWidgetBase.GetCurrentlySelectedQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FClientQueueInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FClientQueueInfo UKSQueueWidgetBase::GetCurrentlySelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueWidgetBase.GetCurrentlySelectedQueue");

	UKSQueueWidgetBase_GetCurrentlySelectedQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTimerState
// (Event, Public, BlueprintEvent)
// Parameters:
// EQueueTimerState*              State                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueTimerWidgetBase::OnUpdateQueueTimerState(EQueueTimerState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTimerState");

	UKSQueueTimerWidgetBase_OnUpdateQueueTimerState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTime
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         TimeSecs                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSQueueTimerWidgetBase::OnUpdateQueueTime(float* TimeSecs)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.OnUpdateQueueTime");

	UKSQueueTimerWidgetBase_OnUpdateQueueTime_Params params;
	params.TimeSecs = TimeSecs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_TotalSecs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSQueueTimerWidgetBase::GetQueueTime_TotalSecs()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_TotalSecs");

	UKSQueueTimerWidgetBase_GetQueueTime_TotalSecs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartSecs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueTimerWidgetBase::GetQueueTime_PartSecs()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartSecs");

	UKSQueueTimerWidgetBase_GetQueueTime_PartSecs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartMins
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueTimerWidgetBase::GetQueueTime_PartMins()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartMins");

	UKSQueueTimerWidgetBase_GetQueueTime_PartMins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartHours
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQueueTimerWidgetBase::GetQueueTime_PartHours()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetQueueTime_PartHours");

	UKSQueueTimerWidgetBase_GetQueueTime_PartHours_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQueueTimerWidgetBase.GetCurrentTimerState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EQueueTimerState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EQueueTimerState UKSQueueTimerWidgetBase::GetCurrentTimerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQueueTimerWidgetBase.GetCurrentTimerState");

	UKSQueueTimerWidgetBase_GetCurrentTimerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.UpdateQueuePermissions
// (Final, Native, Protected)

void UKSQuickPlay::UpdateQueuePermissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.UpdateQueuePermissions");

	UKSQuickPlay_UpdateQueuePermissions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlay.UIX_AttemptJoinSelectedQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::UIX_AttemptJoinSelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.UIX_AttemptJoinSelectedQueue");

	UKSQuickPlay_UIX_AttemptJoinSelectedQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.UIX_AttemptCancelQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::UIX_AttemptCancelQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.UIX_AttemptCancelQueue");

	UKSQuickPlay_UIX_AttemptCancelQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.SortQueues
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FClientQueueInfo>* ClientCachedQueueInfo          (Parm, ZeroConstructor)
// TArray<struct FClientQueueInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FClientQueueInfo> UKSQuickPlay::SortQueues(TArray<struct FClientQueueInfo>* ClientCachedQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SortQueues");

	UKSQuickPlay_SortQueues_Params params;
	params.ClientCachedQueueInfo = ClientCachedQueueInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.SetupReadyForQueueing
// (Final, Native, Protected)

void UKSQuickPlay::SetupReadyForQueueing()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetupReadyForQueueing");

	UKSQuickPlay_SetupReadyForQueueing_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlay.SetupBindings
// (Final, Native, Public, BlueprintCallable)

void UKSQuickPlay::SetupBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetupBindings");

	UKSQuickPlay_SetupBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlay.SetDefaultSelectedQueue
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FClientQueueInfo        NewSelectedQueue               (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::SetDefaultSelectedQueue(struct FClientQueueInfo* NewSelectedQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetDefaultSelectedQueue");

	UKSQuickPlay_SetDefaultSelectedQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSelectedQueue != nullptr)
		*NewSelectedQueue = params.NewSelectedQueue;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.SetCurrentlySelectedQueue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::SetCurrentlySelectedQueue(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.SetCurrentlySelectedQueue");

	UKSQuickPlay_SetCurrentlySelectedQueue_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.ReceiveMatchStatusUpdate
// (Final, Native, Protected)
// Parameters:
// EPUMG_MatchStatus*             CurrentMatchStatus             (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlay::ReceiveMatchStatusUpdate(EPUMG_MatchStatus* CurrentMatchStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.ReceiveMatchStatusUpdate");

	UKSQuickPlay_ReceiveMatchStatusUpdate_Params params;
	params.CurrentMatchStatus = CurrentMatchStatus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlay.OnQueuePermissionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          CanQueue                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlay::OnQueuePermissionChanged(bool* CanQueue)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.OnQueuePermissionChanged");

	UKSQuickPlay_OnQueuePermissionChanged_Params params;
	params.CanQueue = CanQueue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlay.OnControlQueuePermissionChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          CanControl                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlay::OnControlQueuePermissionChanged(bool* CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.OnControlQueuePermissionChanged");

	UKSQuickPlay_OnControlQueuePermissionChanged_Params params;
	params.CanControl = CanControl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlay.IsValidQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::IsValidQueue(int* QueueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.IsValidQueue");

	UKSQuickPlay_IsValidQueue_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.HandlePartyMemberDataUpdated
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_PartyMemberData*  PartyMember                    (Parm)

void UKSQuickPlay::HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.HandlePartyMemberDataUpdated");

	UKSQuickPlay_HandlePartyMemberDataUpdated_Params params;
	params.PartyMember = PartyMember;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlay.GetQueueSections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo>* ClientCachedQueueInfo          (Parm, ZeroConstructor)
// TArray<struct FQueueSection>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FQueueSection> UKSQuickPlay::GetQueueSections(TArray<struct FClientQueueInfo>* ClientCachedQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueueSections");

	UKSQuickPlay_GetQueueSections_Params params;
	params.ClientCachedQueueInfo = ClientCachedQueueInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetQueues
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FClientQueueInfo> UKSQuickPlay::GetQueues()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueues");

	UKSQuickPlay_GetQueues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetQueueInfoById
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int*                           QueueId                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FClientQueueInfo        QueueInfo                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::GetQueueInfoById(int* QueueId, struct FClientQueueInfo* QueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueueInfoById");

	UKSQuickPlay_GetQueueInfoById_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueueInfo != nullptr)
		*QueueInfo = params.QueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetQueueDataFactory
// (Final, Native, Protected, Const)
// Parameters:
// class UKSQueueDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSQueueDataFactory* UKSQuickPlay::GetQueueDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetQueueDataFactory");

	UKSQuickPlay_GetQueueDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetPartyDataFactory
// (Final, Native, Protected, Const)
// Parameters:
// class UPUMG_PartyDataFactory*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PartyDataFactory* UKSQuickPlay::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetPartyDataFactory");

	UKSQuickPlay_GetPartyDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetDefaultSelectedQueueId
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSQuickPlay::GetDefaultSelectedQueueId()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetDefaultSelectedQueueId");

	UKSQuickPlay_GetDefaultSelectedQueueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.GetCurrentlySelectedQueue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FClientQueueInfo        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FClientQueueInfo UKSQuickPlay::GetCurrentlySelectedQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.GetCurrentlySelectedQueue");

	UKSQuickPlay_GetCurrentlySelectedQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.CheckForDirtyQueues
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> NewClientCachedQueueInfo       (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::CheckForDirtyQueues(TArray<struct FClientQueueInfo>* NewClientCachedQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.CheckForDirtyQueues");

	UKSQuickPlay_CheckForDirtyQueues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewClientCachedQueueInfo != nullptr)
		*NewClientCachedQueueInfo = params.NewClientCachedQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlay.CheckForCustomQueues
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FClientQueueInfo> CustomMatchQueueInfo           (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlay::CheckForCustomQueues(TArray<struct FClientQueueInfo>* CustomMatchQueueInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlay.CheckForCustomQueues");

	UKSQuickPlay_CheckForCustomQueues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CustomMatchQueueInfo != nullptr)
		*CustomMatchQueueInfo = params.CustomMatchQueueInfo;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.UpdateState
// (Final, Native, Protected, BlueprintCallable)

void UKSQuickPlayWidget::UpdateState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.UpdateState");

	UKSQuickPlayWidget_UpdateState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlayWidget.SetIsPendingQueueUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          IsPending                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlayWidget::SetIsPendingQueueUpdate(bool* IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.SetIsPendingQueueUpdate");

	UKSQuickPlayWidget_SetIsPendingQueueUpdate_Params params;
	params.IsPending = IsPending;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayState
// (Event, Protected, BlueprintEvent)
// Parameters:
// EQuickPlayQueueState*          QueueState                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlayWidget::OnUpdateQuickPlayState(EQuickPlayQueueState* QueueState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayState");

	UKSQuickPlayWidget_OnUpdateQuickPlayState_Params params;
	params.QueueState = QueueState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayCanPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          CanPlay                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlayWidget::OnUpdateQuickPlayCanPlay(bool* CanPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQuickPlayCanPlay");

	UKSQuickPlayWidget_OnUpdateQuickPlayCanPlay_Params params;
	params.CanPlay = CanPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQueueTimeElapsed
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         TimeElapsed                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlayWidget::OnUpdateQueueTimeElapsed(float* TimeElapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdateQueueTimeElapsed");

	UKSQuickPlayWidget_OnUpdateQueueTimeElapsed_Params params;
	params.TimeElapsed = TimeElapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlayWidget.OnUpdatePenaltyTimeLeft
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           TimeLeft                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSQuickPlayWidget::OnUpdatePenaltyTimeLeft(int* TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.OnUpdatePenaltyTimeLeft");

	UKSQuickPlayWidget_OnUpdatePenaltyTimeLeft_Params params;
	params.TimeLeft = TimeLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSQuickPlayWidget.IsPendingQueueUpdate
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlayWidget::IsPendingQueueUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.IsPendingQueueUpdate");

	UKSQuickPlayWidget_IsPendingQueueUpdate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.GetSelectedQueueState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EQuickPlayQueueState           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EQuickPlayQueueState UKSQuickPlayWidget::GetSelectedQueueState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.GetSelectedQueueState");

	UKSQuickPlayWidget_GetSelectedQueueState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.GetGameModeDisplayName
// (Final, Native, Protected, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   GameModeDisplayName            (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSQuickPlayWidget::GetGameModeDisplayName(struct FText* GameModeDisplayName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.GetGameModeDisplayName");

	UKSQuickPlayWidget_GetGameModeDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameModeDisplayName != nullptr)
		*GameModeDisplayName = params.GameModeDisplayName;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSQuickPlayWidget.GetCurrentQuickPlayState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EQuickPlayQueueState           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EQuickPlayQueueState UKSQuickPlayWidget::GetCurrentQuickPlayState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSQuickPlayWidget.GetCurrentQuickPlayState");

	UKSQuickPlayWidget_GetCurrentQuickPlayState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastSelectedIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           NewIndex                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::UpdateLastSelectedIndex(int* NewIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastSelectedIndex");

	UKSRadialSelectionWidgetBase_UpdateLastSelectedIndex_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastHoveredIndex
// (Final, Native, Protected)
// Parameters:
// int*                           NewHoveredIndex                (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::UpdateLastHoveredIndex(int* NewHoveredIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.UpdateLastHoveredIndex");

	UKSRadialSelectionWidgetBase_UpdateLastHoveredIndex_Params params;
	params.NewHoveredIndex = NewHoveredIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.TraceSelectionCursor
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Angle                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::TraceSelectionCursor(float* Radius, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.TraceSelectionCursor");

	UKSRadialSelectionWidgetBase_TraceSelectionCursor_Params params;
	params.Radius = Radius;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ShowSelector
// (Event, Protected, BlueprintEvent)

void UKSRadialSelectionWidgetBase::ShowSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ShowSelector");

	UKSRadialSelectionWidgetBase_ShowSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.SetupForRadialWheelMode
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// ERadialWheelMode*              NewRadialWheelMode             (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::SetupForRadialWheelMode(ERadialWheelMode* NewRadialWheelMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.SetupForRadialWheelMode");

	UKSRadialSelectionWidgetBase_SetupForRadialWheelMode_Params params;
	params.NewRadialWheelMode = NewRadialWheelMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionUnhover
// (Event, Protected, BlueprintEvent)

void UKSRadialSelectionWidgetBase::RadialOptionUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionUnhover");

	UKSRadialSelectionWidgetBase_RadialOptionUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::RadialOptionSelected(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionSelected");

	UKSRadialSelectionWidgetBase_RadialOptionSelected_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionHovered
// (Event, Protected, BlueprintEvent)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::RadialOptionHovered(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.RadialOptionHovered");

	UKSRadialSelectionWidgetBase_RadialOptionHovered_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OpenSpecifiedRadialMenu
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// EMercCosmeticSlot*             CosmeticSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::OpenSpecifiedRadialMenu(EMercCosmeticSlot* CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OpenSpecifiedRadialMenu");

	UKSRadialSelectionWidgetBase_OpenSpecifiedRadialMenu_Params params;
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuUseLastSelection
// (Final, Native, Protected)
// Parameters:
// EMercCosmeticSlot*             ButtonCosmeticSlot             (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::OnRadialMenuUseLastSelection(EMercCosmeticSlot* ButtonCosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuUseLastSelection");

	UKSRadialSelectionWidgetBase_OnRadialMenuUseLastSelection_Params params;
	params.ButtonCosmeticSlot = ButtonCosmeticSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuReleased
// (Final, Native, Protected)
// Parameters:
// EMercCosmeticSlot*             ButtonCosmeticSlot             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsContextualPingHold          (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::OnRadialMenuReleased(EMercCosmeticSlot* ButtonCosmeticSlot, bool* bIsContextualPingHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuReleased");

	UKSRadialSelectionWidgetBase_OnRadialMenuReleased_Params params;
	params.ButtonCosmeticSlot = ButtonCosmeticSlot;
	params.bIsContextualPingHold = bIsContextualPingHold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuPressed
// (Final, Native, Protected)
// Parameters:
// EMercCosmeticSlot*             ButtonCosmeticSlot             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsContextualPingHold          (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::OnRadialMenuPressed(EMercCosmeticSlot* ButtonCosmeticSlot, bool* bIsContextualPingHold)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuPressed");

	UKSRadialSelectionWidgetBase_OnRadialMenuPressed_Params params;
	params.ButtonCosmeticSlot = ButtonCosmeticSlot;
	params.bIsContextualPingHold = bIsContextualPingHold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuForceClosed
// (Final, Native, Protected)

void UKSRadialSelectionWidgetBase::OnRadialMenuForceClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnRadialMenuForceClosed");

	UKSRadialSelectionWidgetBase_OnRadialMenuForceClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusRight
// (Final, Native, Protected, BlueprintCallable)

void UKSRadialSelectionWidgetBase::OnCycleMenusRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusRight");

	UKSRadialSelectionWidgetBase_OnCycleMenusRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusLeft
// (Final, Native, Protected, BlueprintCallable)

void UKSRadialSelectionWidgetBase::OnCycleMenusLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycleMenusLeft");

	UKSRadialSelectionWidgetBase_OnCycleMenusLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycledMenus
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          bCycledRight                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::OnCycledMenus(bool* bCycledRight)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.OnCycledMenus");

	UKSRadialSelectionWidgetBase_OnCycledMenus_Params params;
	params.bCycledRight = bCycledRight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorVisible
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::IsSelectorVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorVisible");

	UKSRadialSelectionWidgetBase_IsSelectorVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorActive
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::IsSelectorActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.IsSelectorActive");

	UKSRadialSelectionWidgetBase_IsSelectorActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.IsCycleBetweenMenusEnabled
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::IsCycleBetweenMenusEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.IsCycleBetweenMenusEnabled");

	UKSRadialSelectionWidgetBase_IsCycleBetweenMenusEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.InitializeTracking
// (Final, Native, Protected)

void UKSRadialSelectionWidgetBase::InitializeTracking()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.InitializeTracking");

	UKSRadialSelectionWidgetBase_InitializeTracking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.HideSelector
// (Event, Protected, BlueprintEvent)

void UKSRadialSelectionWidgetBase::HideSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.HideSelector");

	UKSRadialSelectionWidgetBase_HideSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleInputStateChanged
// (Final, Native, Protected)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* NewInputState                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSRadialSelectionWidgetBase::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* NewInputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.HandleInputStateChanged");

	UKSRadialSelectionWidgetBase_HandleInputStateChanged_Params params;
	params.NewInputState = NewInputState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetWheelSize
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSRadialSelectionWidgetBase::GetWheelSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetWheelSize");

	UKSRadialSelectionWidgetBase_GetWheelSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByType
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::GetPingIconByType(EPingType* PingType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByType");

	UKSRadialSelectionWidgetBase_GetPingIconByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByMessage
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::GetPingIconByMessage(EPingMessage* PingMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingIconByMessage");

	UKSRadialSelectionWidgetBase_GetPingIconByMessage_Params params;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingColorByType
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            PingColor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::GetPingColorByType(EPingType* PingType, struct FLinearColor* PingColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetPingColorByType");

	UKSRadialSelectionWidgetBase_GetPingColorByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PingColor != nullptr)
		*PingColor = params.PingColor;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetOptionsCount
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSRadialSelectionWidgetBase::GetOptionsCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetOptionsCount");

	UKSRadialSelectionWidgetBase_GetOptionsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastSelectedIndexForCosmeticSlot
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMercCosmeticSlot*             CosmeticSlot                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSRadialSelectionWidgetBase::GetLastSelectedIndexForCosmeticSlot(EMercCosmeticSlot* CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastSelectedIndexForCosmeticSlot");

	UKSRadialSelectionWidgetBase_GetLastSelectedIndexForCosmeticSlot_Params params;
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastHoveredIndex
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSRadialSelectionWidgetBase::GetLastHoveredIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetLastHoveredIndex");

	UKSRadialSelectionWidgetBase_GetLastHoveredIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInitialRadialMenu
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMercCosmeticSlot              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMercCosmeticSlot UKSRadialSelectionWidgetBase::GetInitialRadialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetInitialRadialMenu");

	UKSRadialSelectionWidgetBase_GetInitialRadialMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetGameplayTagsForCosmeticSlot
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMercCosmeticSlot*             CosmeticSlot                   (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FGameplayTag>    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FGameplayTag> UKSRadialSelectionWidgetBase::GetGameplayTagsForCosmeticSlot(EMercCosmeticSlot* CosmeticSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetGameplayTagsForCosmeticSlot");

	UKSRadialSelectionWidgetBase_GetGameplayTagsForCosmeticSlot_Params params;
	params.CosmeticSlot = CosmeticSlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetDeadZone
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSRadialSelectionWidgetBase::GetDeadZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetDeadZone");

	UKSRadialSelectionWidgetBase_GetDeadZone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetContiguousCosmeticSlotMenu
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool*                          bRightSide                     (Parm, ZeroConstructor, IsPlainOldData)
// EMercCosmeticSlot              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMercCosmeticSlot UKSRadialSelectionWidgetBase::GetContiguousCosmeticSlotMenu(bool* bRightSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetContiguousCosmeticSlotMenu");

	UKSRadialSelectionWidgetBase_GetContiguousCosmeticSlotMenu_Params params;
	params.bRightSide = bRightSide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.GetActiveCosmeticSlotMenu
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EMercCosmeticSlot              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EMercCosmeticSlot UKSRadialSelectionWidgetBase::GetActiveCosmeticSlotMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.GetActiveCosmeticSlotMenu");

	UKSRadialSelectionWidgetBase_GetActiveCosmeticSlotMenu_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByType
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// EPingType*                     PingType                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FContextualPingTypesRow ContextualPingTypesRow         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::FindRowByType(EPingType* PingType, struct FContextualPingTypesRow* ContextualPingTypesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByType");

	UKSRadialSelectionWidgetBase_FindRowByType_Params params;
	params.PingType = PingType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextualPingTypesRow != nullptr)
		*ContextualPingTypesRow = params.ContextualPingTypesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByMessage
// (Final, Native, Protected, HasOutParms, Const)
// Parameters:
// EPingMessage*                  PingMessage                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FContextualPingMessagesRow ContextualPingMessagesRow      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::FindRowByMessage(EPingMessage* PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.FindRowByMessage");

	UKSRadialSelectionWidgetBase_FindRowByMessage_Params params;
	params.PingMessage = PingMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContextualPingMessagesRow != nullptr)
		*ContextualPingMessagesRow = params.ContextualPingMessagesRow;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.DummyFunction
// (Final, Native, Protected)

void UKSRadialSelectionWidgetBase::DummyFunction()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.DummyFunction");

	UKSRadialSelectionWidgetBase_DummyFunction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ChangeToNewRadialMenu
// (Event, Protected, BlueprintEvent)

void UKSRadialSelectionWidgetBase::ChangeToNewRadialMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ChangeToNewRadialMenu");

	UKSRadialSelectionWidgetBase_ChangeToNewRadialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ButtonClicked
// (Final, Native, Protected)

void UKSRadialSelectionWidgetBase::ButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ButtonClicked");

	UKSRadialSelectionWidgetBase_ButtonClicked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.BackPressed
// (Final, Native, Protected)

void UKSRadialSelectionWidgetBase::BackPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.BackPressed");

	UKSRadialSelectionWidgetBase_BackPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRadialSelectionWidgetBase.ActivateRadialMenuItem
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerController**    PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRadialSelectionWidgetBase::ActivateRadialMenuItem(int* Index, class AKSPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRadialSelectionWidgetBase.ActivateRadialMenuItem");

	UKSRadialSelectionWidgetBase_ActivateRadialMenuItem_Params params;
	params.Index = Index;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.RedeemCode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Code                           (Parm, ZeroConstructor)

void UKSRedeemCodeScreenBase::RedeemCode(struct FString* Code)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.RedeemCode");

	UKSRedeemCodeScreenBase_RedeemCode_Params params;
	params.Code = Code;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeSubmit
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UKSRedeemCodeScreenBase::OnRedeemCodeSubmit()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeSubmit");

	UKSRedeemCodeScreenBase_OnRedeemCodeSubmit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeResult
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Success                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Error                          (ConstParm, Parm, OutParm, ReferenceParm)

void UKSRedeemCodeScreenBase::OnRedeemCodeResult(bool* Success, struct FText* Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.OnRedeemCodeResult");

	UKSRedeemCodeScreenBase_OnRedeemCodeResult_Params params;
	params.Success = Success;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRedeemCodeScreenBase.IsPendingServerReply
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSRedeemCodeScreenBase::IsPendingServerReply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRedeemCodeScreenBase.IsPendingServerReply");

	UKSRedeemCodeScreenBase_IsPendingServerReply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSReticleWidgetBase.UpdateReticleOffset
// (Event, Protected, BlueprintEvent)
// Parameters:
// float*                         OffsetFromCenterScreen         (Parm, ZeroConstructor, IsPlainOldData)

void UKSReticleWidgetBase::UpdateReticleOffset(float* OffsetFromCenterScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.UpdateReticleOffset");

	UKSReticleWidgetBase_UpdateReticleOffset_Params params;
	params.OffsetFromCenterScreen = OffsetFromCenterScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSReticleWidgetBase.UpdateBlockedShotIcon
// (Event, Protected, HasDefaults, BlueprintEvent)
// Parameters:
// bool*                          IconVisible                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Translation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              IconScale                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSReticleWidgetBase::UpdateBlockedShotIcon(bool* IconVisible, struct FVector2D* Translation, struct FVector2D* IconScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.UpdateBlockedShotIcon");

	UKSReticleWidgetBase_UpdateBlockedShotIcon_Params params;
	params.IconVisible = IconVisible;
	params.Translation = Translation;
	params.IconScale = IconScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSReticleWidgetBase.CalculateReticleOffset
// (Final, Native, Protected)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSReticleWidgetBase::CalculateReticleOffset(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.CalculateReticleOffset");

	UKSReticleWidgetBase_CalculateReticleOffset_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSReticleWidgetBase.CalculateBlockedShotIcon
// (Final, Native, Protected)

void UKSReticleWidgetBase::CalculateBlockedShotIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSReticleWidgetBase.CalculateBlockedShotIcon");

	UKSReticleWidgetBase_CalculateBlockedShotIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSRogueDetailsWidget.GetStoreItemForJob
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSJobItem**             JobItem                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_StoreItem*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_StoreItem* UKSRogueDetailsWidget::GetStoreItemForJob(class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRogueDetailsWidget.GetStoreItemForJob");

	UKSRogueDetailsWidget_GetStoreItemForJob_Params params;
	params.JobItem = JobItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSRogueDetailsWidget.GetItemHelper
// (Final, Native, Protected, Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSRogueDetailsWidget::GetItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSRogueDetailsWidget.GetItemHelper");

	UKSRogueDetailsWidget_GetItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSScrollBox.GetViewFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSScrollBox::GetViewFraction()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSScrollBox.GetViewFraction");

	UKSScrollBox_GetViewFraction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.OnShowSettingsWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsWidget**      SettingsWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsContainer::OnShowSettingsWidget(class UKSSettingsWidget** SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.OnShowSettingsWidget");

	UKSSettingsContainer_OnShowSettingsWidget_Params params;
	params.SettingsWidget = SettingsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsContainer.OnHideSettingsWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsWidget**      SettingsWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsContainer::OnHideSettingsWidget(class UKSSettingsWidget** SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.OnHideSettingsWidget");

	UKSSettingsContainer_OnHideSettingsWidget_Params params;
	params.SettingsWidget = SettingsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsContainer.OnContainerConfigSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsContainer::OnContainerConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.OnContainerConfigSet");

	UKSSettingsContainer_OnContainerConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerTitle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSSettingsContainer::GetWidgetContainerTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerTitle");

	UKSSettingsContainer_GetWidgetContainerTitle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSSettingsContainer::GetWidgetContainerDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.GetWidgetContainerDescription");

	UKSSettingsContainer_GetWidgetContainerDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.GetSettingsWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSSettingsWidget*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSSettingsWidget*> UKSSettingsContainer::GetSettingsWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.GetSettingsWidgets");

	UKSSettingsContainer_GetSettingsWidgets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsContainer.AddSettingsWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsWidget**      SettingsWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsContainer::AddSettingsWidget(class UKSSettingsWidget** SettingsWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsContainer.AddSettingsWidget");

	UKSSettingsContainer_AddSettingsWidget_Params params;
	params.SettingsWidget = SettingsWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettings
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::SaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettings");

	UKSSettingsDataFactory_SaveSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)

void UKSSettingsDataFactory::SaveSettingAsInt(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsInt");

	UKSSettingsDataFactory_SaveSettingAsInt_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)

void UKSSettingsDataFactory::SaveSettingAsFloat(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsFloat");

	UKSSettingsDataFactory_SaveSettingAsFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)

void UKSSettingsDataFactory::SaveSettingAsBool(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveSettingAsBool");

	UKSSettingsDataFactory_SaveSettingAsBool_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveScreenResolution
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::SaveScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveScreenResolution");

	UKSSettingsDataFactory_SaveScreenResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveLanguage
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::SaveLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveLanguage");

	UKSSettingsDataFactory_SaveLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.SaveKeyBindings
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::SaveKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.SaveKeyBindings");

	UKSSettingsDataFactory_SaveKeyBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertScreenResolution
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::RevertScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertScreenResolution");

	UKSSettingsDataFactory_RevertScreenResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertPlayerPreferences
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::RevertPlayerPreferences()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertPlayerPreferences");

	UKSSettingsDataFactory_RevertPlayerPreferences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertLanguageToDefault
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::RevertLanguageToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertLanguageToDefault");

	UKSSettingsDataFactory_RevertLanguageToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.RevertKeyBindings
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsDataFactory::RevertKeyBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.RevertKeyBindings");

	UKSSettingsDataFactory_RevertKeyBindings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.IsUserLoggedIn
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsDataFactory::IsUserLoggedIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.IsUserLoggedIn");

	UKSSettingsDataFactory_IsUserLoggedIn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsInt
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// int                            OutInt                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsDataFactory::GetSettingAsInt(struct FString* Name, int* OutInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsInt");

	UKSSettingsDataFactory_GetSettingAsInt_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutInt != nullptr)
		*OutInt = params.OutInt;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsFloat
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// float                          OutFloat                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsDataFactory::GetSettingAsFloat(struct FString* Name, float* OutFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsFloat");

	UKSSettingsDataFactory_GetSettingAsFloat_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutFloat != nullptr)
		*OutFloat = params.OutFloat;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsBool
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// bool                           OutBool                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsDataFactory::GetSettingAsBool(struct FString* Name, bool* OutBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetSettingAsBool");

	UKSSettingsDataFactory_GetSettingAsBool_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBool != nullptr)
		*OutBool = params.OutBool;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetScreenResolution
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FIntPoint UKSSettingsDataFactory::GetScreenResolution()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetScreenResolution");

	UKSSettingsDataFactory_GetScreenResolution_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetKSPlayerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSPlayerInput*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPlayerInput* UKSSettingsDataFactory::GetKSPlayerInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetKSPlayerInput");

	UKSSettingsDataFactory_GetKSPlayerInput_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultKSInputActionKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EKSInputType*                  InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKSInputActionKey> OutKeys                        (Parm, OutParm, ZeroConstructor)

void UKSSettingsDataFactory::GetDefaultKSInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKSInputActionKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetDefaultKSInputActionKeys");

	UKSSettingsDataFactory_GetDefaultKSInputActionKeys_Params params;
	params.Name = Name;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputAxisKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EKSInputType*                  InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)

void UKSSettingsDataFactory::GetDefaultInputAxisKeys(struct FName* Name, EKSInputType* InputType, float* Scale, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputAxisKeys");

	UKSSettingsDataFactory_GetDefaultInputAxisKeys_Params params;
	params.Name = Name;
	params.InputType = InputType;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputActionKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// EKSInputType*                  InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)

void UKSSettingsDataFactory::GetDefaultInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetDefaultInputActionKeys");

	UKSSettingsDataFactory_GetDefaultInputActionKeys_Params params;
	params.Name = Name;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCustomKSInputActionKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// EKSInputType*                  InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKSInputActionKey> OutKeys                        (Parm, OutParm, ZeroConstructor)

void UKSSettingsDataFactory::GetCustomKSInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKSInputActionKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCustomKSInputActionKeys");

	UKSSettingsDataFactory_GetCustomKSInputActionKeys_Params params;
	params.Name = Name;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputAxisKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// EKSInputType*                  InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Scale                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)

void UKSSettingsDataFactory::GetCustomInputAxisKeys(struct FName* Name, EKSInputType* InputType, float* Scale, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputAxisKeys");

	UKSSettingsDataFactory_GetCustomInputAxisKeys_Params params;
	params.Name = Name;
	params.InputType = InputType;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputActionKeys
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)
// EKSInputType*                  InputType                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FKey>            OutKeys                        (Parm, OutParm, ZeroConstructor)

void UKSSettingsDataFactory::GetCustomInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKey>* OutKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCustomInputActionKeys");

	UKSSettingsDataFactory_GetCustomInputActionKeys_Params params;
	params.Name = Name;
	params.InputType = InputType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKeys != nullptr)
		*OutKeys = params.OutKeys;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetCurrentLanguage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UKSSettingsDataFactory::GetCurrentLanguage()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetCurrentLanguage");

	UKSSettingsDataFactory_GetCurrentLanguage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.GetAvailableLanguages
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UKSSettingsDataFactory::GetAvailableLanguages()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.GetAvailableLanguages");

	UKSSettingsDataFactory_GetAvailableLanguages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsDataFactory.BindSettingCallbacks
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// struct FSettingDelegateStruct* SettingDelegateStruct          (ConstParm, Parm, OutParm, ReferenceParm)

void UKSSettingsDataFactory::BindSettingCallbacks(struct FString* Name, struct FSettingDelegateStruct* SettingDelegateStruct)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.BindSettingCallbacks");

	UKSSettingsDataFactory_BindSettingCallbacks_Params params;
	params.Name = Name;
	params.SettingDelegateStruct = SettingDelegateStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsDataFactory::ApplySettingAsInt(struct FString* Name, int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsInt");

	UKSSettingsDataFactory_ApplySettingAsInt_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsDataFactory::ApplySettingAsFloat(struct FString* Name, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsFloat");

	UKSSettingsDataFactory_ApplySettingAsFloat_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                Name                           (Parm, ZeroConstructor)
// bool*                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsDataFactory::ApplySettingAsBool(struct FString* Name, bool* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplySettingAsBool");

	UKSSettingsDataFactory_ApplySettingAsBool_Params params;
	params.Name = Name;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplyScreenResolution
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FIntPoint*              ScreenResolution               (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsDataFactory::ApplyScreenResolution(struct FIntPoint* ScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplyScreenResolution");

	UKSSettingsDataFactory_ApplyScreenResolution_Params params;
	params.ScreenResolution = ScreenResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsDataFactory.ApplyLanguage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                LanguageCulture                (Parm, ZeroConstructor)

void UKSSettingsDataFactory::ApplyLanguage(struct FString* LanguageCulture)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsDataFactory.ApplyLanguage");

	UKSSettingsDataFactory_ApplyLanguage_Params params;
	params.LanguageCulture = LanguageCulture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsGroup.OnShowContainer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   SettingsContainer              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsGroup::OnShowContainer(class UKSSettingsContainer** SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.OnShowContainer");

	UKSSettingsGroup_OnShowContainer_Params params;
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsGroup.OnHideContainer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   SettingsContainer              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsGroup::OnHideContainer(class UKSSettingsContainer** SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.OnHideContainer");

	UKSSettingsGroup_OnHideContainer_Params params;
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsGroup.OnGroupConfigSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsGroup::OnGroupConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.OnGroupConfigSet");

	UKSSettingsGroup_OnGroupConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsGroup.GetSettingsContainers
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSSettingsContainer*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSSettingsContainer*> UKSSettingsGroup::GetSettingsContainers()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.GetSettingsContainers");

	UKSSettingsGroup_GetSettingsContainers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsGroup.AddSubSettingsContainerWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   SettingsContainer              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsGroup::AddSubSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.AddSubSettingsContainerWidget");

	UKSSettingsGroup_AddSubSettingsContainerWidget_Params params;
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsGroup.AddMainSettingsContainerWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsContainer**   SettingsContainer              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsGroup::AddMainSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsGroup.AddMainSettingsContainerWidget");

	UKSSettingsGroup_AddMainSettingsContainerWidget_Params params;
	params.SettingsContainer = SettingsContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.UpdateTextOptions
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FText>*          NewOptions                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSSettingsInfoBase::UpdateTextOptions(TArray<struct FText>* NewOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.UpdateTextOptions");

	UKSSettingsInfoBase_UpdateTextOptions_Params params;
	params.NewOptions = NewOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueKeyBind
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FKSKeyBind*             InKeyBind                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SetDesiredValueKeyBind(struct FKSKeyBind* InKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueKeyBind");

	UKSSettingsInfoBase_SetDesiredValueKeyBind_Params params;
	params.InKeyBind = InKeyBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueInt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int*                           inInt                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SetDesiredValueInt(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueInt");

	UKSSettingsInfoBase_SetDesiredValueInt_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float*                         InFloat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SetDesiredValueFloat(float* InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueFloat");

	UKSSettingsInfoBase_SetDesiredValueFloat_Params params;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueBool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          InBool                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SetDesiredValueBool(bool* InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SetDesiredValueBool");

	UKSSettingsInfoBase_SetDesiredValueBool_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveKeyBindValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// struct FKSKeyBind*             InKeyBind                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SaveKeyBindValue(struct FKSKeyBind* InKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveKeyBindValue");

	UKSSettingsInfoBase_SaveKeyBindValue_Params params;
	params.InKeyBind = InKeyBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveIntValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int*                           inInt                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SaveIntValue(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveIntValue");

	UKSSettingsInfoBase_SaveIntValue_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveFloatValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// float*                         InFloat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SaveFloatValue(float* InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveFloatValue");

	UKSSettingsInfoBase_SaveFloatValue_Params params;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.SaveBoolValue
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          InBool                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::SaveBoolValue(bool* InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.SaveBoolValue");

	UKSSettingsInfoBase_SaveBoolValue_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.Save
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsInfoBase::Save()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.Save");

	UKSSettingsInfoBase_Save_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.RoundToNearestValueFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float*                         ValueToRound                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::RoundToNearestValueFloat(float* ValueToRound)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.RoundToNearestValueFloat");

	UKSSettingsInfoBase_RoundToNearestValueFloat_Params params;
	params.ValueToRound = ValueToRound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.RevertSettingToDefault
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UKSSettingsInfoBase::RevertSettingToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.RevertSettingToDefault");

	UKSSettingsInfoBase_RevertSettingToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.Revert
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsInfoBase::Revert()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.Revert");

	UKSSettingsInfoBase_Revert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindSaved
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FKSKeyBind*             SavedKeyBind                   (Parm)

void UKSSettingsInfoBase::OnValueKeyBindSaved(struct FKSKeyBind* SavedKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindSaved");

	UKSSettingsInfoBase_OnValueKeyBindSaved_Params params;
	params.SavedKeyBind = SavedKeyBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindApplied
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FKSKeyBind*             AppliedKeyBind                 (Parm)

void UKSSettingsInfoBase::OnValueKeyBindApplied(struct FKSKeyBind* AppliedKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueKeyBindApplied");

	UKSSettingsInfoBase_OnValueKeyBindApplied_Params params;
	params.AppliedKeyBind = AppliedKeyBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntSaved
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           SavedInt                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfoBase::OnValueIntSaved(int* SavedInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueIntSaved");

	UKSSettingsInfoBase_OnValueIntSaved_Params params;
	params.SavedInt = SavedInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueIntApplied
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           AppliedInt                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfoBase::OnValueIntApplied(int* AppliedInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueIntApplied");

	UKSSettingsInfoBase_OnValueIntApplied_Params params;
	params.AppliedInt = AppliedInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatSaved
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float*                         SavedFloat                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfoBase::OnValueFloatSaved(float* SavedFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatSaved");

	UKSSettingsInfoBase_OnValueFloatSaved_Params params;
	params.SavedFloat = SavedFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatApplied
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// float*                         AppliedFloat                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfoBase::OnValueFloatApplied(float* AppliedFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueFloatApplied");

	UKSSettingsInfoBase_OnValueFloatApplied_Params params;
	params.AppliedFloat = AppliedFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolSaved
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          SavedBool                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfoBase::OnValueBoolSaved(bool* SavedBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolSaved");

	UKSSettingsInfoBase_OnValueBoolSaved_Params params;
	params.SavedBool = SavedBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolApplied
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool*                          AppliedBool                    (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfoBase::OnValueBoolApplied(bool* AppliedBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.OnValueBoolApplied");

	UKSSettingsInfoBase_OnValueBoolApplied_Params params;
	params.AppliedBool = AppliedBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueKeyBind
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKSKeyBind*             InKey                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::IsValidValueKeyBind(struct FKSKeyBind* InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueKeyBind");

	UKSSettingsInfoBase_IsValidValueKeyBind_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueInt
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int*                           inInt                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::IsValidValueInt(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueInt");

	UKSSettingsInfoBase_IsValidValueInt_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueFloat
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float*                         InFloat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::IsValidValueFloat(float* InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueFloat");

	UKSSettingsInfoBase_IsValidValueFloat_Params params;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsValidValueBool
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool*                          InBool                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::IsValidValueBool(bool* InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsValidValueBool");

	UKSSettingsInfoBase_IsValidValueBool_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.IsDirty
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::IsDirty()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.IsDirty");

	UKSSettingsInfoBase_IsDirty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.InitializeValue
// (Native, Event, Protected, BlueprintEvent)

void UKSSettingsInfoBase::InitializeValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.InitializeValue");

	UKSSettingsInfoBase_InitializeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueKeyBind
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKSKeyBind              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKSKeyBind UKSSettingsInfoBase::GetValueKeyBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueKeyBind");

	UKSSettingsInfoBase_GetValueKeyBind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSSettingsInfoBase::GetValueInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueInt");

	UKSSettingsInfoBase_GetValueInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::GetValueFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueFloat");

	UKSSettingsInfoBase_GetValueFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetValueBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::GetValueBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetValueBool");

	UKSSettingsInfoBase_GetValueBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetTextOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FText>           ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<struct FText> UKSSettingsInfoBase::GetTextOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetTextOptions");

	UKSSettingsInfoBase_GetTextOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetTextOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int*                           Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSSettingsInfoBase::GetTextOption(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetTextOption");

	UKSSettingsInfoBase_GetTextOption_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetStep
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::GetStep()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetStep");

	UKSSettingsInfoBase_GetStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetSettingType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EKSSettingType                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EKSSettingType UKSSettingsInfoBase::GetSettingType()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetSettingType");

	UKSSettingsInfoBase_GetSettingType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetRoundToNearest
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::GetRoundToNearest()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetRoundToNearest");

	UKSSettingsInfoBase_GetRoundToNearest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetRound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::GetRound()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetRound");

	UKSSettingsInfoBase_GetRound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetNumTextOptions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSSettingsInfoBase::GetNumTextOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetNumTextOptions");

	UKSSettingsInfoBase_GetNumTextOptions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetMin
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::GetMin()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetMin");

	UKSSettingsInfoBase_GetMin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetMax
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::GetMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetMax");

	UKSSettingsInfoBase_GetMax_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetKSHUD
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AKSHUDCommon*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSHUDCommon* UKSSettingsInfoBase::GetKSHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetKSHUD");

	UKSSettingsInfoBase_GetKSHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetIsPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::GetIsPercent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetIsPercent");

	UKSSettingsInfoBase_GetIsPercent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueKeyBind
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKSKeyBind              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKSKeyBind UKSSettingsInfoBase::GetDirtyValueKeyBind()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueKeyBind");

	UKSSettingsInfoBase_GetDirtyValueKeyBind_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueInt
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSSettingsInfoBase::GetDirtyValueInt()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueInt");

	UKSSettingsInfoBase_GetDirtyValueInt_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::GetDirtyValueFloat()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueFloat");

	UKSSettingsInfoBase_GetDirtyValueFloat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::GetDirtyValueBool()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.GetDirtyValueBool");

	UKSSettingsInfoBase_GetDirtyValueBool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidKeyBind
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// struct FKSKeyBind*             InKey                          (Parm)
// struct FKSKeyBind              ReturnValue                    (Parm, OutParm, ReturnParm)

struct FKSKeyBind UKSSettingsInfoBase::FixupInvalidKeyBind(struct FKSKeyBind* InKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidKeyBind");

	UKSSettingsInfoBase_FixupInvalidKeyBind_Params params;
	params.InKey = InKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidInt
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// int*                           inInt                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSSettingsInfoBase::FixupInvalidInt(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidInt");

	UKSSettingsInfoBase_FixupInvalidInt_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidFloat
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// float*                         InFloat                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UKSSettingsInfoBase::FixupInvalidFloat(float* InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidFloat");

	UKSSettingsInfoBase_FixupInvalidFloat_Params params;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidBool
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// bool*                          InBool                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::FixupInvalidBool(bool* InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.FixupInvalidBool");

	UKSSettingsInfoBase_FixupInvalidBool_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.CanRevert
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::CanRevert()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.CanRevert");

	UKSSettingsInfoBase_CanRevert_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyKeyBindValue
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKSKeyBind*             InKeyBind                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::ApplyKeyBindValue(struct FKSKeyBind* InKeyBind)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyKeyBindValue");

	UKSSettingsInfoBase_ApplyKeyBindValue_Params params;
	params.InKeyBind = InKeyBind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyIntValue
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           inInt                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::ApplyIntValue(int* inInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyIntValue");

	UKSSettingsInfoBase_ApplyIntValue_Params params;
	params.inInt = inInt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyFloatValue
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float*                         InFloat                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::ApplyFloatValue(float* InFloat)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyFloatValue");

	UKSSettingsInfoBase_ApplyFloatValue_Params params;
	params.InFloat = InFloat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.ApplyBoolValue
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          InBool                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsInfoBase::ApplyBoolValue(bool* InBool)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.ApplyBoolValue");

	UKSSettingsInfoBase_ApplyBoolValue_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfoBase.Apply
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsInfoBase::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfoBase.Apply");

	UKSSettingsInfoBase_Apply_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Binding.OnSettingsReceivedFromPlayerAccount
// (Final, Native, Private)

void UKSSettingsInfo_Binding::OnSettingsReceivedFromPlayerAccount()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Binding.OnSettingsReceivedFromPlayerAccount");

	UKSSettingsInfo_Binding_OnSettingsReceivedFromPlayerAccount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsSaved
// (Final, Native, Private)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfo_Binding::OnKeyBindingsSaved(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsSaved");

	UKSSettingsInfo_Binding_OnKeyBindingsSaved_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsApplied
// (Final, Native, Private)
// Parameters:
// struct FName*                  Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfo_Binding::OnKeyBindingsApplied(struct FName* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Binding.OnKeyBindingsApplied");

	UKSSettingsInfo_Binding_OnKeyBindingsApplied_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingSaved
// (Final, Native, Protected, BlueprintCallable)

void UKSSettingsInfo_Generic::OnSettingSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingSaved");

	UKSSettingsInfo_Generic_OnSettingSaved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingApplied
// (Final, Native, Protected, BlueprintCallable)

void UKSSettingsInfo_Generic::OnSettingApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Generic.OnSettingApplied");

	UKSSettingsInfo_Generic_OnSettingApplied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Generic.GetKSSettingsDataFactory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSSettingsDataFactory*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSSettingsDataFactory* UKSSettingsInfo_Generic::GetKSSettingsDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Generic.GetKSSettingsDataFactory");

	UKSSettingsInfo_Generic_GetKSSettingsDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsInfo_Region.OnPreferredSiteUpdated
// (Final, Native, Protected)

void UKSSettingsInfo_Region::OnPreferredSiteUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Region.OnPreferredSiteUpdated");

	UKSSettingsInfo_Region_OnPreferredSiteUpdated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionSaved
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FIntPoint*              SavedScreenResolution          (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfo_Resolution::OnScreenResolutionSaved(struct FIntPoint* SavedScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionSaved");

	UKSSettingsInfo_Resolution_OnScreenResolutionSaved_Params params;
	params.SavedScreenResolution = SavedScreenResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionApplied
// (Final, Native, Private, HasDefaults)
// Parameters:
// struct FIntPoint*              AppliedScreenResolution        (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsInfo_Resolution::OnScreenResolutionApplied(struct FIntPoint* AppliedScreenResolution)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsInfo_Resolution.OnScreenResolutionApplied");

	UKSSettingsInfo_Resolution_OnScreenResolutionApplied_Params params;
	params.AppliedScreenResolution = AppliedScreenResolution;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.RebuildNavigation
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UKSSettingsMenu::RebuildNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.RebuildNavigation");

	UKSSettingsMenu_RebuildNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.OnShowPage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsPage**        SettingsPage                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsMenu::OnShowPage(class UKSSettingsPage** SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnShowPage");

	UKSSettingsMenu_OnShowPage_Params params;
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.OnSaveSettings
// (Final, Native, Protected)

void UKSSettingsMenu::OnSaveSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnSaveSettings");

	UKSSettingsMenu_OnSaveSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.OnRevertSettings
// (Final, Native, Protected)

void UKSSettingsMenu::OnRevertSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnRevertSettings");

	UKSSettingsMenu_OnRevertSettings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.OnMenuConfigSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsMenu::OnMenuConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnMenuConfigSet");

	UKSSettingsMenu_OnMenuConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.OnHidePage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsPage**        SettingsPage                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsMenu::OnHidePage(class UKSSettingsPage** SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnHidePage");

	UKSSettingsMenu_OnHidePage_Params params;
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.OnConfirmExit
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          ShouldSaveSettings             (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsMenu::OnConfirmExit(bool* ShouldSaveSettings)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.OnConfirmExit");

	UKSSettingsMenu_OnConfirmExit_Params params;
	params.ShouldSaveSettings = ShouldSaveSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.GetSettingsPages
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSSettingsPage*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSSettingsPage*> UKSSettingsMenu::GetSettingsPages()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.GetSettingsPages");

	UKSSettingsMenu_GetSettingsPages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsMenu.CheckSavePendingChanges
// (Final, Native, Protected, BlueprintCallable)

void UKSSettingsMenu::CheckSavePendingChanges()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.CheckSavePendingChanges");

	UKSSettingsMenu_CheckSavePendingChanges_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsMenu.AddSettingsPageWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsPage**        SettingsPage                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsMenu::AddSettingsPageWidget(class UKSSettingsPage** SettingsPage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsMenu.AddSettingsPageWidget");

	UKSSettingsMenu_AddSettingsPageWidget_Params params;
	params.SettingsPage = SettingsPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsPage.OnShowSection
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsSection**     SettingsSection                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsPage::OnShowSection(class UKSSettingsSection** SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.OnShowSection");

	UKSSettingsPage_OnShowSection_Params params;
	params.SettingsSection = SettingsSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsPage.OnPageConfigSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsPage::OnPageConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.OnPageConfigSet");

	UKSSettingsPage_OnPageConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsPage.OnHideSection
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsSection**     SettingsSection                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsPage::OnHideSection(class UKSSettingsSection** SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.OnHideSection");

	UKSSettingsPage_OnHideSection_Params params;
	params.SettingsSection = SettingsSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsPage.GetSettingsSections
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSSettingsSection*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSSettingsSection*> UKSSettingsPage::GetSettingsSections()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.GetSettingsSections");

	UKSSettingsPage_GetSettingsSections_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsPage.GetScrollBox
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UScrollBox*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UScrollBox* UKSSettingsPage::GetScrollBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.GetScrollBox");

	UKSSettingsPage_GetScrollBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsPage.AddSettingsSectionWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsSection**     SettingsSection                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsPage::AddSettingsSectionWidget(class UKSSettingsSection** SettingsSection)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsPage.AddSettingsSectionWidget");

	UKSSettingsPage_AddSettingsSectionWidget_Params params;
	params.SettingsSection = SettingsSection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsSection.OnShowGroup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsGroup**       SettingsGroup                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsSection::OnShowGroup(class UKSSettingsGroup** SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.OnShowGroup");

	UKSSettingsSection_OnShowGroup_Params params;
	params.SettingsGroup = SettingsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsSection.OnSectionConfigSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsSection::OnSectionConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.OnSectionConfigSet");

	UKSSettingsSection_OnSectionConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsSection.OnHideGroup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsGroup**       SettingsGroup                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsSection::OnHideGroup(class UKSSettingsGroup** SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.OnHideGroup");

	UKSSettingsSection_OnHideGroup_Params params;
	params.SettingsGroup = SettingsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsSection.GetSettingsGroups
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSSettingsGroup*> ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSSettingsGroup*> UKSSettingsSection::GetSettingsGroups()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.GetSettingsGroups");

	UKSSettingsSection_GetSettingsGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsSection.AddSettingsGroupWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UKSSettingsGroup**       SettingsGroup                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSettingsSection::AddSettingsGroupWidget(class UKSSettingsGroup** SettingsGroup)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsSection.AddSettingsGroupWidget");

	UKSSettingsSection_AddSettingsGroupWidget_Params params;
	params.SettingsGroup = SettingsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.SaveSetting
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsWidget::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.SaveSetting");

	UKSSettingsWidget_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.RevertSetting
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsWidget::RevertSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.RevertSetting");

	UKSSettingsWidget_RevertSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetSettingsInfoSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsWidget::OnWidgetSettingsInfoSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetSettingsInfoSet");

	UKSSettingsWidget_OnWidgetSettingsInfoSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerTitleSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsWidget::OnWidgetContainerTitleSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerTitleSet");

	UKSSettingsWidget_OnWidgetContainerTitleSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerDescriptionSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsWidget::OnWidgetContainerDescriptionSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetContainerDescriptionSet");

	UKSSettingsWidget_OnWidgetContainerDescriptionSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.OnWidgetConfigSet
// (Event, Protected, BlueprintEvent)

void UKSSettingsWidget::OnWidgetConfigSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnWidgetConfigSet");

	UKSSettingsWidget_OnWidgetConfigSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.OnSettingsInfoValueChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bChangedExternally             (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsWidget::OnSettingsInfoValueChanged(bool* bChangedExternally)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnSettingsInfoValueChanged");

	UKSSettingsWidget_OnSettingsInfoValueChanged_Params params;
	params.bChangedExternally = bChangedExternally;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.OnInputAttached
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bGamepadAttached               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bMouseAttached                 (Parm, ZeroConstructor, IsPlainOldData)

void UKSSettingsWidget::OnInputAttached(bool* bGamepadAttached, bool* bMouseAttached)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.OnInputAttached");

	UKSSettingsWidget_OnInputAttached_Params params;
	params.bGamepadAttached = bGamepadAttached;
	params.bMouseAttached = bMouseAttached;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSettingsWidget.IsSaved
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsWidget::IsSaved()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.IsSaved");

	UKSSettingsWidget_IsSaved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsWidget.IsApplied
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsWidget::IsApplied()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.IsApplied");

	UKSSettingsWidget_IsApplied_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsWidget.CanGamepadNavigate
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSettingsWidget::CanGamepadNavigate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.CanGamepadNavigate");

	UKSSettingsWidget_CanGamepadNavigate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSettingsWidget.ApplySetting
// (Final, Native, Public, BlueprintCallable)

void UKSSettingsWidget::ApplySetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSettingsWidget.ApplySetting");

	UKSSettingsWidget_ApplySetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSShopItemButtonBase.GetHitTarget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UButton*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UButton* UKSShopItemButtonBase::GetHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.GetHitTarget");

	UKSShopItemButtonBase_GetHitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSShopItemButtonBase.DisplayShopItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FShopItem*              ShopItem                       (Parm)
// bool*                          IsAffordable                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsToggleSlot                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSShopItemButtonBase::DisplayShopItem(struct FShopItem* ShopItem, bool* IsAffordable, bool* IsToggleSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.DisplayShopItem");

	UKSShopItemButtonBase_DisplayShopItem_Params params;
	params.ShopItem = ShopItem;
	params.IsAffordable = IsAffordable;
	params.IsToggleSlot = IsToggleSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonUnhovered
// (Event, Protected, BlueprintEvent)

void UKSShopItemButtonBase::ButtonUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonUnhovered");

	UKSShopItemButtonBase_ButtonUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonReleased
// (Event, Protected, BlueprintEvent)

void UKSShopItemButtonBase::ButtonReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonReleased");

	UKSShopItemButtonBase_ButtonReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonPressed
// (Event, Protected, BlueprintEvent)

void UKSShopItemButtonBase::ButtonPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonPressed");

	UKSShopItemButtonBase_ButtonPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonHovered
// (Event, Protected, BlueprintEvent)

void UKSShopItemButtonBase::ButtonHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonHovered");

	UKSShopItemButtonBase_ButtonHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSShopItemButtonBase.ButtonClicked
// (Event, Protected, BlueprintEvent)

void UKSShopItemButtonBase::ButtonClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSShopItemButtonBase.ButtonClicked");

	UKSShopItemButtonBase_ButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialPanelBase.UpdateListData
// (Native, Protected)

void UKSSocialPanelBase::UpdateListData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.UpdateListData");

	UKSSocialPanelBase_UpdateListData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialPanelBase.SetupTreeView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTreeView**              List                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSocialPanelBase::SetupTreeView(class UTreeView** List)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.SetupTreeView");

	UKSSocialPanelBase_SetupTreeView_Params params;
	params.List = List;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialPanelBase.SetDataSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKSSocialOverlay**       Source                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSSocialPanelBase::SetDataSource(class UKSSocialOverlay** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.SetDataSource");

	UKSSocialPanelBase_SetDataSource_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialPanelBase.OnDataChange
// (Native, Protected, HasOutParms)
// Parameters:
// TArray<EKSSocialOverlaySection>* Sections                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSSocialPanelBase::OnDataChange(TArray<EKSSocialOverlaySection>* Sections)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.OnDataChange");

	UKSSocialPanelBase_OnDataChange_Params params;
	params.Sections = Sections;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialPanelBase.GetTreeView
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTreeView*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTreeView* UKSSocialPanelBase::GetTreeView()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.GetTreeView");

	UKSSocialPanelBase_GetTreeView_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialPanelBase.GetSubListFromData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// class UObject**                Source                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         Out_List                       (Parm, OutParm, ZeroConstructor)

void UKSSocialPanelBase::GetSubListFromData(class UObject** Source, TArray<class UObject*>* Out_List)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.GetSubListFromData");

	UKSSocialPanelBase_GetSubListFromData_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_List != nullptr)
		*Out_List = params.Out_List;
}


// Function KillstreakUINew.KSSocialPanelBase.GetDataSource
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSSocialOverlay*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSSocialOverlay* UKSSocialPanelBase::GetDataSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialPanelBase.GetDataSource");

	UKSSocialPanelBase_GetDataSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialOverlay.RepopulateAll
// (Final, Native, Private, BlueprintCallable)

void UKSSocialOverlay::RepopulateAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.RepopulateAll");

	UKSSocialOverlay_RepopulateAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialOverlay.PlayTransition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation**       Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          TransitionOut                  (Parm, ZeroConstructor, IsPlainOldData)

void UKSSocialOverlay::PlayTransition(class UWidgetAnimation** Animation, bool* TransitionOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.PlayTransition");

	UKSSocialOverlay_PlayTransition_Params params;
	params.Animation = Animation;
	params.TransitionOut = TransitionOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialOverlay.OnRecentlyPlayedChange
// (Final, Native, Public)
// Parameters:
// class UKSFriendDataFactory**   Source                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSSocialOverlay::OnRecentlyPlayedChange(class UKSFriendDataFactory** Source)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.OnRecentlyPlayedChange");

	UKSSocialOverlay_OnRecentlyPlayedChange_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialOverlay.HandleUpdatePlayers
// (Final, Native, Public)

void UKSSocialOverlay::HandleUpdatePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.HandleUpdatePlayers");

	UKSSocialOverlay_HandleUpdatePlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialOverlay.GetData
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UKSDataSocialCategory*> ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm)

TArray<class UKSDataSocialCategory*> UKSSocialOverlay::GetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.GetData");

	UKSSocialOverlay_GetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialOverlay.GetCategory
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// EKSSocialOverlaySection*       Category                       (Parm, ZeroConstructor, IsPlainOldData)
// class UKSDataSocialCategory*   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSDataSocialCategory* UKSSocialOverlay::GetCategory(EKSSocialOverlaySection* Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.GetCategory");

	UKSSocialOverlay_GetCategory_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialOverlay.GetCategories
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<EKSSocialOverlaySection>* Categories                     (Parm, ZeroConstructor)
// TArray<class UKSDataSocialCategory*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSDataSocialCategory*> UKSSocialOverlay::GetCategories(TArray<EKSSocialOverlaySection>* Categories)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialOverlay.GetCategories");

	UKSSocialOverlay_GetCategories_Params params;
	params.Categories = Categories;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialSearchPanel.OnSearchTimeout
// (Final, Native, Private)

void UKSSocialSearchPanel::OnSearchTimeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.OnSearchTimeout");

	UKSSocialSearchPanel_OnSearchTimeout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialSearchPanel.OnSearchStart
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  SearchTerm                     (ConstParm, Parm, OutParm, ReferenceParm)

void UKSSocialSearchPanel::OnSearchStart(struct FText* SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.OnSearchStart");

	UKSSocialSearchPanel_OnSearchStart_Params params;
	params.SearchTerm = SearchTerm;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialSearchPanel.OnSearchComplete
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FText*                  SearchTerm                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText*                  Error                          (ConstParm, Parm, OutParm, ReferenceParm)
// TArray<class UKSDataSocialPlayer*>* Results                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSSocialSearchPanel::OnSearchComplete(struct FText* SearchTerm, struct FText* Error, TArray<class UKSDataSocialPlayer*>* Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.OnSearchComplete");

	UKSSocialSearchPanel_OnSearchComplete_Params params;
	params.SearchTerm = SearchTerm;
	params.Error = Error;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialSearchPanel.IsSearching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSocialSearchPanel::IsSearching()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.IsSearching");

	UKSSocialSearchPanel_IsSearching_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialSearchPanel.GetActiveSearchTerm
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSSocialSearchPanel::GetActiveSearchTerm()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.GetActiveSearchTerm");

	UKSSocialSearchPanel_GetActiveSearchTerm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialSearchPanel.DoSearch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText*                  SearchTerm                     (Parm)

void UKSSocialSearchPanel::DoSearch(struct FText* SearchTerm)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialSearchPanel.DoSearch");

	UKSSocialSearchPanel_DoSearch_Params params;
	params.SearchTerm = SearchTerm;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialWidgetBase.SortFriendData
// (Final, Native, Protected, HasOutParms)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> Friends                        (Parm, OutParm, ZeroConstructor)

void UKSSocialWidgetBase::SortFriendData(TArray<class UPUMG_PlayerInfo*>* Friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.SortFriendData");

	UKSSocialWidgetBase_SortFriendData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;
}


// Function KillstreakUINew.KSSocialWidgetBase.SearchPlayerName
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)

void UKSSocialWidgetBase::SearchPlayerName(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.SearchPlayerName");

	UKSSocialWidgetBase_SearchPlayerName_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialWidgetBase.OnFriendRequestsUpdated
// (Event, Protected, BlueprintEvent)

void UKSSocialWidgetBase::OnFriendRequestsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.OnFriendRequestsUpdated");

	UKSSocialWidgetBase_OnFriendRequestsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialWidgetBase.HandleSearchByNameResultsUpdated
// (Event, Protected, BlueprintEvent)

void UKSSocialWidgetBase::HandleSearchByNameResultsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandleSearchByNameResultsUpdated");

	UKSSocialWidgetBase_HandleSearchByNameResultsUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialWidgetBase.HandlePartyDataUpdated
// (Event, Protected, BlueprintEvent)

void UKSSocialWidgetBase::HandlePartyDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandlePartyDataUpdated");

	UKSSocialWidgetBase_HandlePartyDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendInviteReceived
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_FriendData*       PlayerData                     (Parm)

void UKSSocialWidgetBase::HandleFriendInviteReceived(struct FPUMG_FriendData* PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandleFriendInviteReceived");

	UKSSocialWidgetBase_HandleFriendInviteReceived_Params params;
	params.PlayerData = PlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialWidgetBase.HandleFriendDataUpdated
// (Event, Public, BlueprintEvent)

void UKSSocialWidgetBase::HandleFriendDataUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.HandleFriendDataUpdated");

	UKSSocialWidgetBase_HandleFriendDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetSortedFriends
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UKSSocialWidgetBase::GetSortedFriends()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetSortedFriends");

	UKSSocialWidgetBase_GetSortedFriends_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetSearchResults
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UPUMG_PlayerInfo*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UPUMG_PlayerInfo*> UKSSocialWidgetBase::GetSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetSearchResults");

	UKSSocialWidgetBase_GetSearchResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetPlayerWhoDataFactory
// (Final, Native, Protected)
// Parameters:
// class UKSPlayerWhoDataFactory* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPlayerWhoDataFactory* UKSSocialWidgetBase::GetPlayerWhoDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetPlayerWhoDataFactory");

	UKSSocialWidgetBase_GetPlayerWhoDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetPartyDataFactory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPartyDataFactory* UKSSocialWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetPartyDataFactory");

	UKSSocialWidgetBase_GetPartyDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.GetFriendDataFactory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSFriendDataFactory*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSFriendDataFactory* UKSSocialWidgetBase::GetFriendDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.GetFriendDataFactory");

	UKSSocialWidgetBase_GetFriendDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSocialWidgetBase.ClearSearchResults
// (Final, Native, Protected, BlueprintCallable)

void UKSSocialWidgetBase::ClearSearchResults()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSocialWidgetBase.ClearSearchResults");

	UKSSocialWidgetBase_ClearSearchResults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction KillstreakUINew.KSSortableGridPanel.SortChildrenComparator__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget**                LHS                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                RHS                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSortableGridPanel::SortChildrenComparator__DelegateSignature(class UWidget** LHS, class UWidget** RHS)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSSortableGridPanel.SortChildrenComparator__DelegateSignature");

	UKSSortableGridPanel_SortChildrenComparator__DelegateSignature_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSortableGridPanel.SortChildren
// (Final, Native, Public, BlueprintCallable)

void UKSSortableGridPanel::SortChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSortableGridPanel.SortChildren");

	UKSSortableGridPanel_SortChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSSortableGridPanel.AddChildAutoLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget**                Content                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UGridSlot*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UGridSlot* UKSSortableGridPanel::AddChildAutoLayout(class UWidget** Content)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSortableGridPanel.AddChildAutoLayout");

	UKSSortableGridPanel_AddChildAutoLayout_Params params;
	params.Content = Content;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// DelegateFunction KillstreakUINew.KSSortableVerticalBox.SortChildrenComparator__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget**                LHS                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                RHS                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSSortableVerticalBox::SortChildrenComparator__DelegateSignature(class UWidget** LHS, class UWidget** RHS)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction KillstreakUINew.KSSortableVerticalBox.SortChildrenComparator__DelegateSignature");

	UKSSortableVerticalBox_SortChildrenComparator__DelegateSignature_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSSortableVerticalBox.SortChildren
// (Final, Native, Public, BlueprintCallable)

void UKSSortableVerticalBox::SortChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSSortableVerticalBox.SortChildren");

	UKSSortableVerticalBox_SortChildren_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSStoreSectionItem.IsItemNew
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPUMG_StoreItem**        StoreItem                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSStoreSectionItem::IsItemNew(class UPUMG_StoreItem** StoreItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSectionItem.IsItemNew");

	UKSStoreSectionItem_IsItemNew_Params params;
	params.StoreItem = StoreItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreSectionItem.HasNewItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSStoreSectionItem::HasNewItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSectionItem.HasNewItems");

	UKSStoreSectionItem_HasNewItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreSection.HasNewItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSStoreSection::HasNewItems()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSection.HasNewItems");

	UKSStoreSection_HasNewItems_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreSection.GetSectionHeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSStoreSection::GetSectionHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreSection.GetSectionHeader");

	UKSStoreSection_GetSectionHeader_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreWidget.OnVendorsReceived
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// int*                           GroupId                        (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>*                   VendorIds                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSStoreWidget::OnVendorsReceived(int* GroupId, TArray<int>* VendorIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.OnVendorsReceived");

	UKSStoreWidget_OnVendorsReceived_Params params;
	params.GroupId = GroupId;
	params.VendorIds = VendorIds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSStoreWidget.GetStoreLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSStoreSection*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSStoreSection*> UKSStoreWidget::GetStoreLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.GetStoreLayout");

	UKSStoreWidget_GetStoreLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSStoreWidget.GetStoreItemHelper
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSStoreWidget::GetStoreItemHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSStoreWidget.GetStoreItemHelper");

	UKSStoreWidget_GetStoreItemHelper_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTargetMarkerWidget.UpdateCharge
// (Final, Native, Public)
// Parameters:
// class UKSModInst_Activated**   ModInst                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSTargetMarkerWidget::UpdateCharge(class UKSModInst_Activated** ModInst)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.UpdateCharge");

	UKSTargetMarkerWidget_UpdateCharge_Params params;
	params.ModInst = ModInst;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTargetMarkerWidget.TryApplyViewState
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// ETargetMarkerViewState*        ViewState                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSTargetMarkerWidget::TryApplyViewState(ETargetMarkerViewState* ViewState, bool* bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.TryApplyViewState");

	UKSTargetMarkerWidget_TryApplyViewState_Params params;
	params.ViewState = ViewState;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTargetMarkerWidget.ReceiveNewTarget
// (Final, Native, Public)
// Parameters:
// TScriptInterface<class UKSTargeter>* InTargeter                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 NewTarget                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSTargetMarkerWidget::ReceiveNewTarget(TScriptInterface<class UKSTargeter>* InTargeter, class AActor** NewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.ReceiveNewTarget");

	UKSTargetMarkerWidget_ReceiveNewTarget_Params params;
	params.InTargeter = InTargeter;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTargetMarkerWidget.OnGamepadSelectedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           NewSelectionIndex              (Parm, ZeroConstructor, IsPlainOldData)

void UKSTargetMarkerWidget::OnGamepadSelectedChanged(int* NewSelectionIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.OnGamepadSelectedChanged");

	UKSTargetMarkerWidget_OnGamepadSelectedChanged_Params params;
	params.NewSelectionIndex = NewSelectionIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTargetMarkerWidget.GetCurrentViewState
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// ETargetMarkerViewState         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ETargetMarkerViewState UKSTargetMarkerWidget::GetCurrentViewState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.GetCurrentViewState");

	UKSTargetMarkerWidget_GetCurrentViewState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTargetMarkerWidget.BindTargetModInst
// (Native, Event, Protected, BlueprintEvent)

void UKSTargetMarkerWidget::BindTargetModInst()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.BindTargetModInst");

	UKSTargetMarkerWidget_BindTargetModInst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTargetMarkerWidget.ApplyViewState
// (Event, Protected, BlueprintEvent)
// Parameters:
// ETargetMarkerViewState*        ViewState                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSTargetMarkerWidget::ApplyViewState(ETargetMarkerViewState* ViewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTargetMarkerWidget.ApplyViewState");

	UKSTargetMarkerWidget_ApplyViewState_Params params;
	params.ViewState = ViewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.Whisper
// (Final, Native, Protected)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)
// struct FString*                Message                        (Parm, ZeroConstructor)

void UKSTextChatWidget::Whisper(struct FString* PlayerName, struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Whisper");

	UKSTextChatWidget_Whisper_Params params;
	params.PlayerName = PlayerName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.Unblock
// (Final, Native, Protected)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)

void UKSTextChatWidget::Unblock(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Unblock");

	UKSTextChatWidget_Unblock_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.UIX_SubmitTextInput
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)

void UKSTextChatWidget::UIX_SubmitTextInput(struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_SubmitTextInput");

	UKSTextChatWidget_UIX_SubmitTextInput_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)
// int64_t*                       PlayerId                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UKSTextChatWidget::UIX_SendMessageToPlayer(struct FString* Message, int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToPlayer");

	UKSTextChatWidget_UIX_SendMessageToPlayer_Params params;
	params.Message = Message;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToChannel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)
// EPUMG_ChatChannel*             Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSTextChatWidget::UIX_SendMessageToChannel(struct FString* Message, EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_SendMessageToChannel");

	UKSTextChatWidget_UIX_SendMessageToChannel_Params params;
	params.Message = Message;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.UIX_MarkMessageAsRead
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int*                           MessageIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSTextChatWidget::UIX_MarkMessageAsRead(int* MessageIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_MarkMessageAsRead");

	UKSTextChatWidget_UIX_MarkMessageAsRead_Params params;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.UIX_ExecuteChatCommandLine
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString*                CommandLine                    (Parm, ZeroConstructor)

void UKSTextChatWidget::UIX_ExecuteChatCommandLine(struct FString* CommandLine)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.UIX_ExecuteChatCommandLine");

	UKSTextChatWidget_UIX_ExecuteChatCommandLine_Params params;
	params.CommandLine = CommandLine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.ToggleDND
// (Final, Native, Protected)

void UKSTextChatWidget::ToggleDND()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.ToggleDND");

	UKSTextChatWidget_ToggleDND_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.SetChatChannelToPlayer
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSTextChatWidget::SetChatChannelToPlayer(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.SetChatChannelToPlayer");

	UKSTextChatWidget_SetChatChannelToPlayer_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.SetChatChannel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// int64_t*                       PersonalChannelPlayerId        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSTextChatWidget::SetChatChannel(EPUMG_ChatChannel* Channel, int64_t* PersonalChannelPlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.SetChatChannel");

	UKSTextChatWidget_SetChatChannel_Params params;
	params.Channel = Channel;
	params.PersonalChannelPlayerId = PersonalChannelPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.Reply
// (Final, Native, Protected)
// Parameters:
// struct FString*                Message                        (Parm, ZeroConstructor)

void UKSTextChatWidget::Reply(struct FString* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Reply");

	UKSTextChatWidget_Reply_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.PreviousChatChannel
// (Final, Native, Protected, BlueprintCallable)

void UKSTextChatWidget::PreviousChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.PreviousChatChannel");

	UKSTextChatWidget_PreviousChatChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.OpenTextChatToPlayer
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player                         (Parm, ZeroConstructor, IsPlainOldData)

void UKSTextChatWidget::OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.OpenTextChatToPlayer");

	UKSTextChatWidget_OpenTextChatToPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.OpenTextChat
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (Parm, ZeroConstructor, IsPlainOldData)

void UKSTextChatWidget::OpenTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.OpenTextChat");

	UKSTextChatWidget_OpenTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.NextChatChannel
// (Final, Native, Protected, BlueprintCallable)

void UKSTextChatWidget::NextChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.NextChatChannel");

	UKSTextChatWidget_NextChatChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.IsActiveChatChannel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSTextChatWidget::IsActiveChatChannel(EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.IsActiveChatChannel");

	UKSTextChatWidget_IsActiveChatChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageReceived
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData*         ReceivedMessage                (ConstParm, Parm, OutParm, ReferenceParm)

void UKSTextChatWidget::HandleChatMessageReceived(struct FPUMG_ChatData* ReceivedMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatMessageReceived");

	UKSTextChatWidget_HandleChatMessageReceived_Params params;
	params.ReceivedMessage = ReceivedMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatMessageRead
// (Native, Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPUMG_ChatData*         ReadMessage                    (ConstParm, Parm, OutParm, ReferenceParm)

void UKSTextChatWidget::HandleChatMessageRead(struct FPUMG_ChatData* ReadMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatMessageRead");

	UKSTextChatWidget_HandleChatMessageRead_Params params;
	params.ReadMessage = ReadMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelLeft
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSTextChatWidget::HandleChatChannelLeft(EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatChannelLeft");

	UKSTextChatWidget_HandleChatChannelLeft_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.HandleChatChannelJoined
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UKSTextChatWidget::HandleChatChannelJoined(EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.HandleChatChannelJoined");

	UKSTextChatWidget_HandleChatChannelJoined_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTextChatWidget.GetCurrentChatChannel
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FPUMG_ActiveChatChannelData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FPUMG_ActiveChatChannelData UKSTextChatWidget::GetCurrentChatChannel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.GetCurrentChatChannel");

	UKSTextChatWidget_GetCurrentChatChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.GetChatDataFactory
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSChatDataFactory*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSChatDataFactory* UKSTextChatWidget::GetChatDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.GetChatDataFactory");

	UKSTextChatWidget_GetChatDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.GetActiveChatChannels
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// TArray<struct FPUMG_ActiveChatChannelData> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FPUMG_ActiveChatChannelData> UKSTextChatWidget::GetActiveChatChannels()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.GetActiveChatChannels");

	UKSTextChatWidget_GetActiveChatChannels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.CanChatInChannel
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_ChatChannel*             Channel                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSTextChatWidget::CanChatInChannel(EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.CanChatInChannel");

	UKSTextChatWidget_CanChatInChannel_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTextChatWidget.Block
// (Final, Native, Protected)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)

void UKSTextChatWidget::Block(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTextChatWidget.Block");

	UKSTextChatWidget_Block_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.TestDisplayChallengeNotification
// (Final, Native, Protected)

void UKSToastNotificationWidgetBase::TestDisplayChallengeNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.TestDisplayChallengeNotification");

	UKSToastNotificationWidgetBase_TestDisplayChallengeNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.StoreToastQueue
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FToastData*             ToastNotification              (Parm)

void UKSToastNotificationWidgetBase::StoreToastQueue(struct FToastData* ToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.StoreToastQueue");

	UKSToastNotificationWidgetBase_StoreToastQueue_Params params;
	params.ToastNotification = ToastNotification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.ShowToastNotification
// (Final, Native, Protected, BlueprintCallable)

void UKSToastNotificationWidgetBase::ShowToastNotification()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.ShowToastNotification");

	UKSToastNotificationWidgetBase_ShowToastNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.OnToastNotificationReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FToastData*             ToastData                      (Parm)

void UKSToastNotificationWidgetBase::OnToastNotificationReceived(struct FToastData* ToastData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.OnToastNotificationReceived");

	UKSToastNotificationWidgetBase_OnToastNotificationReceived_Params params;
	params.ToastData = ToastData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.OnChallengeCompleted
// (Final, Native, Protected)
// Parameters:
// class UKSActivityInstance**    Activity                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSToastNotificationWidgetBase::OnChallengeCompleted(class UKSActivityInstance** Activity)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.OnChallengeCompleted");

	UKSToastNotificationWidgetBase_OnChallengeCompleted_Params params;
	params.Activity = Activity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastShown
// (Final, Native, Protected, BlueprintCallable)

void UKSToastNotificationWidgetBase::NotifyToastShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastShown");

	UKSToastNotificationWidgetBase_NotifyToastShown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastHidden
// (Final, Native, Protected, BlueprintCallable)

void UKSToastNotificationWidgetBase::NotifyToastHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.NotifyToastHidden");

	UKSToastNotificationWidgetBase_NotifyToastHidden_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberPromoted
// (Final, Native, Protected)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSToastNotificationWidgetBase::HandlePartyMemberPromoted(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberPromoted");

	UKSToastNotificationWidgetBase_HandlePartyMemberPromoted_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeftGeneric
// (Final, Native, Protected)

void UKSToastNotificationWidgetBase::HandlePartyMemberLeftGeneric()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberLeftGeneric");

	UKSToastNotificationWidgetBase_HandlePartyMemberLeftGeneric_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberKick
// (Final, Native, Protected)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSToastNotificationWidgetBase::HandlePartyMemberKick(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberKick");

	UKSToastNotificationWidgetBase_HandlePartyMemberKick_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberAdded
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_PartyMemberData*  PartyMemberData                (Parm)

void UKSToastNotificationWidgetBase::HandlePartyMemberAdded(struct FPUMG_PartyMemberData* PartyMemberData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyMemberAdded");

	UKSToastNotificationWidgetBase_HandlePartyMemberAdded_Params params;
	params.PartyMemberData = PartyMemberData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyLocalPlayerLeft
// (Final, Native, Protected)

void UKSToastNotificationWidgetBase::HandlePartyLocalPlayerLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyLocalPlayerLeft");

	UKSToastNotificationWidgetBase_HandlePartyLocalPlayerLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteSent
// (Final, Native, Protected)
// Parameters:
// struct FText*                  PlayerName                     (Parm)

void UKSToastNotificationWidgetBase::HandlePartyInviteSent(struct FText* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteSent");

	UKSToastNotificationWidgetBase_HandlePartyInviteSent_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteRejected
// (Final, Native, Protected)

void UKSToastNotificationWidgetBase::HandlePartyInviteRejected()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteRejected");

	UKSToastNotificationWidgetBase_HandlePartyInviteRejected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteReceived
// (Final, Native, Protected)
// Parameters:
// class UPUMG_PlayerInfo**       PartyInviter                   (Parm, ZeroConstructor, IsPlainOldData)

void UKSToastNotificationWidgetBase::HandlePartyInviteReceived(class UPUMG_PlayerInfo** PartyInviter)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteReceived");

	UKSToastNotificationWidgetBase_HandlePartyInviteReceived_Params params;
	params.PartyInviter = PartyInviter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteError
// (Final, Native, Protected)
// Parameters:
// struct FText*                  PlayerName                     (Parm)

void UKSToastNotificationWidgetBase::HandlePartyInviteError(struct FText* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteError");

	UKSToastNotificationWidgetBase_HandlePartyInviteError_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteAccepted
// (Final, Native, Protected)

void UKSToastNotificationWidgetBase::HandlePartyInviteAccepted()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyInviteAccepted");

	UKSToastNotificationWidgetBase_HandlePartyInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyDisbanded
// (Final, Native, Protected)

void UKSToastNotificationWidgetBase::HandlePartyDisbanded()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandlePartyDisbanded");

	UKSToastNotificationWidgetBase_HandlePartyDisbanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendRejected
// (Final, Native, Protected)
// Parameters:
// struct FText*                  PlayerName                     (Parm)

void UKSToastNotificationWidgetBase::HandleFriendRejected(struct FText* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendRejected");

	UKSToastNotificationWidgetBase_HandleFriendRejected_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendInviteReceived
// (Final, Native, Protected)
// Parameters:
// struct FPUMG_FriendData*       PlayerData                     (Parm)

void UKSToastNotificationWidgetBase::HandleFriendInviteReceived(struct FPUMG_FriendData* PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendInviteReceived");

	UKSToastNotificationWidgetBase_HandleFriendInviteReceived_Params params;
	params.PlayerData = PlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAddSuccess
// (Final, Native, Protected)
// Parameters:
// struct FString*                PlayerName                     (Parm, ZeroConstructor)

void UKSToastNotificationWidgetBase::HandleFriendAddSuccess(struct FString* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAddSuccess");

	UKSToastNotificationWidgetBase_HandleFriendAddSuccess_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAdded
// (Final, Native, Protected)
// Parameters:
// struct FText*                  PlayerName                     (Parm)

void UKSToastNotificationWidgetBase::HandleFriendAdded(struct FText* PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.HandleFriendAdded");

	UKSToastNotificationWidgetBase_HandleFriendAdded_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerChallengesManager
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSPlayerChallengesManager* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPlayerChallengesManager* UKSToastNotificationWidgetBase::GetPlayerChallengesManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetPlayerChallengesManager");

	UKSToastNotificationWidgetBase_GetPlayerChallengesManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetPartyDataFactory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSPartyDataFactory*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSPartyDataFactory* UKSToastNotificationWidgetBase::GetPartyDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetPartyDataFactory");

	UKSToastNotificationWidgetBase_GetPartyDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetNext
// (Final, Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
// struct FToastData              NextToastNotification          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSToastNotificationWidgetBase::GetNext(struct FToastData* NextToastNotification)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetNext");

	UKSToastNotificationWidgetBase_GetNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NextToastNotification != nullptr)
		*NextToastNotification = params.NextToastNotification;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.GetFriendDataFactory
// (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSFriendDataFactory*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSFriendDataFactory* UKSToastNotificationWidgetBase::GetFriendDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.GetFriendDataFactory");

	UKSToastNotificationWidgetBase_GetFriendDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMercMasteryLevelUpToasts
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UKSActivityInstance**    MercMasteryActivityInstance    (Parm, ZeroConstructor, IsPlainOldData)
// struct FActivityTier*          TierObtained                   (Parm)

void UKSToastNotificationWidgetBase::CreateMercMasteryLevelUpToasts(class UKSActivityInstance** MercMasteryActivityInstance, struct FActivityTier* TierObtained)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.CreateMercMasteryLevelUpToasts");

	UKSToastNotificationWidgetBase_CreateMercMasteryLevelUpToasts_Params params;
	params.MercMasteryActivityInstance = MercMasteryActivityInstance;
	params.TierObtained = TierObtained;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSToastNotificationWidgetBase.ClearNotificationQueue
// (Final, Native, Protected, BlueprintCallable)

void UKSToastNotificationWidgetBase::ClearNotificationQueue()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSToastNotificationWidgetBase.ClearNotificationQueue");

	UKSToastNotificationWidgetBase_ClearNotificationQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.UnbindEventFromTopBarStatusIconShowingChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate*        Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSTopBarStatusIconInterface::UnbindEventFromTopBarStatusIconShowingChanged(struct FScriptDelegate* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.UnbindEventFromTopBarStatusIconShowingChanged");

	UKSTopBarStatusIconInterface_UnbindEventFromTopBarStatusIconShowingChanged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.IsInTopBarStatusIconShowingState
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSTopBarStatusIconInterface::IsInTopBarStatusIconShowingState()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.IsInTopBarStatusIconShowingState");

	UKSTopBarStatusIconInterface_IsInTopBarStatusIconShowingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.GetTopBarStatusIconTexture
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* UKSTopBarStatusIconInterface::GetTopBarStatusIconTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.GetTopBarStatusIconTexture");

	UKSTopBarStatusIconInterface_GetTopBarStatusIconTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTopBarStatusIconInterface.BindEventToTopBarStatusIconShowingChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate*        Callback                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UKSTopBarStatusIconInterface::BindEventToTopBarStatusIconShowingChanged(struct FScriptDelegate* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTopBarStatusIconInterface.BindEventToTopBarStatusIconShowingChanged");

	UKSTopBarStatusIconInterface_BindEventToTopBarStatusIconShowingChanged_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTreeView.UninitializeWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UKSTreeView::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.UninitializeWidget");

	UKSTreeView_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTreeView.NavigateSelectItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UKSTreeView::NavigateSelectItem(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.NavigateSelectItem");

	UKSTreeView_NavigateSelectItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTreeView.IsItemExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject**                Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSTreeView::IsItemExpanded(class UObject** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.IsItemExpanded");

	UKSTreeView_IsItemExpanded_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTreeView.InitializeWidget
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UKSTreeView::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.InitializeWidget");

	UKSTreeView_InitializeWidget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSTreeView.GetNumItemsInLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSTreeView::GetNumItemsInLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.GetNumItemsInLayout");

	UKSTreeView_GetNumItemsInLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSTreeView.BP_GetEntryWidgetFromItem
// (Final, Native, Private, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject**                Item                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget*             OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSTreeView::BP_GetEntryWidgetFromItem(class UObject** Item, class UUserWidget** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSTreeView.BP_GetEntryWidgetFromItem");

	UKSTreeView_BP_GetEntryWidgetFromItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.UIX_ReportPlayer
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FReportPlayerParams*    Params                         (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSUIBlueprintFunctionLibrary::STATIC_UIX_ReportPlayer(struct FReportPlayerParams* Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.UIX_ReportPlayer");

	UKSUIBlueprintFunctionLibrary_UIX_ReportPlayer_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromScoreboardStats
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScoreboardStats*       State                          (ConstParm, Parm, OutParm, ReferenceParm)
// struct FReportPlayerParams     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FReportPlayerParams UKSUIBlueprintFunctionLibrary::STATIC_SetupReportPlayerFromScoreboardStats(int64_t* PlayerId, struct FScoreboardStats* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromScoreboardStats");

	UKSUIBlueprintFunctionLibrary_SetupReportPlayerFromScoreboardStats_Params params;
	params.PlayerId = PlayerId;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromGameState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// class AKSGameState**           State                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FReportPlayerParams     ReturnValue                    (Parm, OutParm, ReturnParm)

struct FReportPlayerParams UKSUIBlueprintFunctionLibrary::STATIC_SetupReportPlayerFromGameState(int64_t* PlayerId, class AKSGameState** State)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetupReportPlayerFromGameState");

	UKSUIBlueprintFunctionLibrary_SetupReportPlayerFromGameState_Params params;
	params.PlayerId = PlayerId;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetHiddenCursorMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldHide                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSUIBlueprintFunctionLibrary::STATIC_SetHiddenCursorMode(class UObject** WorldContextObject, class APlayerController** PlayerController, bool* ShouldHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.SetHiddenCursorMode");

	UKSUIBlueprintFunctionLibrary_SetHiddenCursorMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;
	params.ShouldHide = ShouldHide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ResetHiddenCursorMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerController**      PlayerController               (Parm, ZeroConstructor, IsPlainOldData)

void UKSUIBlueprintFunctionLibrary::STATIC_ResetHiddenCursorMode(class UObject** WorldContextObject, class APlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ResetHiddenCursorMode");

	UKSUIBlueprintFunctionLibrary_ResetHiddenCursorMode_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.RegisterGridNavigation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UPUMG_Widget**           ParentWidget                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int*                           FocusGroup                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UWidget*>*        NavWidgets                     (ConstParm, Parm, ZeroConstructor)
// int*                           GridWidth                      (Parm, ZeroConstructor, IsPlainOldData)

void UKSUIBlueprintFunctionLibrary::STATIC_RegisterGridNavigation(class UPUMG_Widget** ParentWidget, int* FocusGroup, TArray<class UWidget*>* NavWidgets, int* GridWidth)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.RegisterGridNavigation");

	UKSUIBlueprintFunctionLibrary_RegisterGridNavigation_Params params;
	params.ParentWidget = ParentWidget;
	params.FocusGroup = FocusGroup;
	params.NavWidgets = NavWidgets;
	params.GridWidth = GridWidth;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.Key_GetShortDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey*                   Key                            (ConstParm, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UKSUIBlueprintFunctionLibrary::STATIC_Key_GetShortDisplayName(struct FKey* Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.Key_GetShortDisplayName");

	UKSUIBlueprintFunctionLibrary_Key_GetShortDisplayName_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInsideMargins
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Translation                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Margins                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSUIBlueprintFunctionLibrary::STATIC_IsInsideMargins(class UObject** WorldContextObject, struct FVector2D* Translation, struct FVector2D* Margins)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInsideMargins");

	UKSUIBlueprintFunctionLibrary_IsInsideMargins_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Translation = Translation;
	params.Margins = Margins;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInCenteredScreenRect
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         PositionX                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         PositionY                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MarginX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MarginY                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSUIBlueprintFunctionLibrary::STATIC_IsInCenteredScreenRect(float* PositionX, float* PositionY, float* MarginX, float* MarginY)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.IsInCenteredScreenRect");

	UKSUIBlueprintFunctionLibrary_IsInCenteredScreenRect_Params params;
	params.PositionX = PositionX;
	params.PositionY = PositionY;
	params.MarginX = MarginX;
	params.MarginY = MarginY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetStoreItemHelper
// (Final, Native, Static, Private)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class UKSStoreItemHelper*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSStoreItemHelper* UKSUIBlueprintFunctionLibrary::STATIC_GetStoreItemHelper(class UObject** WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetStoreItemHelper");

	UKSUIBlueprintFunctionLibrary_GetStoreItemHelper_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueDisplayName
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FText                   DisplayNameText                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSUIBlueprintFunctionLibrary::STATIC_GetQueueDisplayName(struct FText* DisplayNameText)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetQueueDisplayName");

	UKSUIBlueprintFunctionLibrary_GetQueueDisplayName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayNameText != nullptr)
		*DisplayNameText = params.DisplayNameText;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetLocalPlayerInfo
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APUMG_HUD**              HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_PlayerInfo*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UPUMG_PlayerInfo* UKSUIBlueprintFunctionLibrary::STATIC_GetLocalPlayerInfo(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetLocalPlayerInfo");

	UKSUIBlueprintFunctionLibrary_GetLocalPlayerInfo_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKSJobItemByLootId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           LootTableItemId                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          RequireActive                  (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem*              JobItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSUIBlueprintFunctionLibrary::STATIC_GetKSJobItemByLootId(class UObject** WorldContextObject, int* LootTableItemId, bool* RequireActive, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKSJobItemByLootId");

	UKSUIBlueprintFunctionLibrary_GetKSJobItemByLootId_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LootTableItemId = LootTableItemId;
	params.RequireActive = RequireActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobItem != nullptr)
		*JobItem = params.JobItem;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKSJobItemByItemId
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int*                           ItemId                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          RequireActive                  (Parm, ZeroConstructor, IsPlainOldData)
// class UKSJobItem*              JobItem                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSUIBlueprintFunctionLibrary::STATIC_GetKSJobItemByItemId(class UObject** WorldContextObject, int* ItemId, bool* RequireActive, class UKSJobItem** JobItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetKSJobItemByItemId");

	UKSUIBlueprintFunctionLibrary_GetKSJobItemByItemId_Params params;
	params.WorldContextObject = WorldContextObject;
	params.ItemId = ItemId;
	params.RequireActive = RequireActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (JobItem != nullptr)
		*JobItem = params.JobItem;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetDigitsFromInt
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<int> UKSUIBlueprintFunctionLibrary::STATIC_GetDigitsFromInt(int* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.GetDigitsFromInt");

	UKSUIBlueprintFunctionLibrary_GetDigitsFromInt_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DistanceToClosestScreenEdge
// (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject**                WorldContextObject             (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutDistX                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDistY                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSUIBlueprintFunctionLibrary::STATIC_DistanceToClosestScreenEdge(class UObject** WorldContextObject, struct FVector2D* Location, float* OutDistX, float* OutDistY)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.DistanceToClosestScreenEdge");

	UKSUIBlueprintFunctionLibrary_DistanceToClosestScreenEdge_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Location = Location;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDistX != nullptr)
		*OutDistX = params.OutDistX;
	if (OutDistY != nullptr)
		*OutDistY = params.OutDistY;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidget
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class APUMG_HUD**              HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FKSSettingsWidgetConfig* WidgetConfig                   (ConstParm, Parm, OutParm, ReferenceParm)
// class UKSSettingsWidget*       ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSSettingsWidget* UKSUIBlueprintFunctionLibrary::STATIC_CreateSettingsWidget(class APUMG_HUD** HUD, struct FKSSettingsWidgetConfig* WidgetConfig)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CreateSettingsWidget");

	UKSUIBlueprintFunctionLibrary_CreateSettingsWidget_Params params;
	params.HUD = HUD;
	params.WidgetConfig = WidgetConfig;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CompareStrings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString*                LeftString                     (Parm, ZeroConstructor)
// struct FString*                RightString                    (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSUIBlueprintFunctionLibrary::STATIC_CompareStrings(struct FString* LeftString, struct FString* RightString)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.CompareStrings");

	UKSUIBlueprintFunctionLibrary_CompareStrings_Params params;
	params.LeftString = LeftString;
	params.RightString = RightString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ClearKeyboardFocus
// (Final, Native, Static, Public, BlueprintCallable)

void UKSUIBlueprintFunctionLibrary::STATIC_ClearKeyboardFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSUIBlueprintFunctionLibrary.ClearKeyboardFocus");

	UKSUIBlueprintFunctionLibrary_ClearKeyboardFocus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.CommonVendorHelper.GetVendorIDFromEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// EKSVendorTypes*                VendorType                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UCommonVendorHelper::STATIC_GetVendorIDFromEnum(EKSVendorTypes* VendorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.CommonVendorHelper.GetVendorIDFromEnum");

	UCommonVendorHelper_GetVendorIDFromEnum_Params params;
	params.VendorType = VendorType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.UpdateLabelPosition
// (Final, Native, Protected, BlueprintCallable)

void UKSViewedItemLabel::UpdateLabelPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.UpdateLabelPosition");

	UKSViewedItemLabel_UpdateLabelPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedItemLabel.UnbindToViewportResizeEvent
// (Final, Native, Protected, BlueprintCallable)

void UKSViewedItemLabel::UnbindToViewportResizeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.UnbindToViewportResizeEvent");

	UKSViewedItemLabel_UnbindToViewportResizeEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedItemLabel.TriggerLabelPositionUpdate
// (Event, Protected, BlueprintEvent)

void UKSViewedItemLabel::TriggerLabelPositionUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.TriggerLabelPositionUpdate");

	UKSViewedItemLabel_TriggerLabelPositionUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedItemLabel.OnLabelShow
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UKSViewedItemLabel::OnLabelShow()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.OnLabelShow");

	UKSViewedItemLabel_OnLabelShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedItemLabel.OnLabelHide
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UKSViewedItemLabel::OnLabelHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.OnLabelHide");

	UKSViewedItemLabel_OnLabelHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedItemLabel.GetViewLimitImage
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UImage* UKSViewedItemLabel::GetViewLimitImage()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetViewLimitImage");

	UKSViewedItemLabel_GetViewLimitImage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetTrackedActor
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UKSViewedItemLabel::GetTrackedActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetTrackedActor");

	UKSViewedItemLabel_GetTrackedActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetOutermostCanvasPanel
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCanvasPanel* UKSViewedItemLabel::GetOutermostCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetOutermostCanvasPanel");

	UKSViewedItemLabel_GetOutermostCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetOnScreenPositionForLabel
// (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      Player                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 InActor                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FBox2D                  OutBounds                      (Parm, OutParm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSViewedItemLabel::GetOnScreenPositionForLabel(class APlayerController** Player, class AActor** InActor, struct FBox2D* OutBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetOnScreenPositionForLabel");

	UKSViewedItemLabel_GetOnScreenPositionForLabel_Params params;
	params.Player = Player;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBounds != nullptr)
		*OutBounds = params.OutBounds;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.GetLabelCanvasPanel
// (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCanvasPanel*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCanvasPanel* UKSViewedItemLabel::GetLabelCanvasPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.GetLabelCanvasPanel");

	UKSViewedItemLabel_GetLabelCanvasPanel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedItemLabel.BindToViewportResizeEvent
// (Final, Native, Protected, BlueprintCallable)

void UKSViewedItemLabel::BindToViewportResizeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedItemLabel.BindToViewportResizeEvent");

	UKSViewedItemLabel_BindToViewportResizeEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.PrimeDamageNumbersWidgetPool
// (Final, Native, Protected, BlueprintCallable)

void UKSViewedPawnDamageDisplay::PrimeDamageNumbersWidgetPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.PrimeDamageNumbersWidgetPool");

	UKSViewedPawnDamageDisplay_PrimeDamageNumbersWidgetPool_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandlePhaseChange
// (Final, Native, Protected)
// Parameters:
// struct FName*                  NewPhaseName                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (Parm, ZeroConstructor, IsPlainOldData)

void UKSViewedPawnDamageDisplay::HandlePhaseChange(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.HandlePhaseChange");

	UKSViewedPawnDamageDisplay_HandlePhaseChange_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleInstigateDamageNotify
// (Final, Native, Protected, HasOutParms)
// Parameters:
// struct FCombatEventInfo*       DamageInfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UKSViewedPawnDamageDisplay::HandleInstigateDamageNotify(struct FCombatEventInfo* DamageInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleInstigateDamageNotify");

	UKSViewedPawnDamageDisplay_HandleInstigateDamageNotify_Params params;
	params.DamageInfo = DamageInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleFlourishAnimationCompleted
// (Final, Native, Protected)
// Parameters:
// class UDamageNumberDisplayWidget** DamageNumberWidget             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSViewedPawnDamageDisplay::HandleFlourishAnimationCompleted(class UDamageNumberDisplayWidget** DamageNumberWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.HandleFlourishAnimationCompleted");

	UKSViewedPawnDamageDisplay_HandleFlourishAnimationCompleted_Params params;
	params.DamageNumberWidget = DamageNumberWidget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.GetDamageNumberWidgetInstance
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UDamageNumberDisplayWidget* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UDamageNumberDisplayWidget* UKSViewedPawnDamageDisplay::GetDamageNumberWidgetInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.GetDamageNumberWidgetInstance");

	UKSViewedPawnDamageDisplay_GetDamageNumberWidgetInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedPawnDamageDisplay.ClearDamageNumbersOnScreen
// (Final, Native, Protected)

void UKSViewedPawnDamageDisplay::ClearDamageNumbersOnScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnDamageDisplay.ClearDamageNumbersOnScreen");

	UKSViewedPawnDamageDisplay_ClearDamageNumbersOnScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.DamageNumberDisplayWidget.SetDisplayInformation
// (Final, Native, Public)
// Parameters:
// class AActor**                 InTargetActor                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InTetherToEventLocation        (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InDamageAmount                 (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InIsLethal                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InIsHeadshot                   (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InDelayWindow                  (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InShieldHit                    (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InDamageReduced                (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          InDamageResisted               (Parm, ZeroConstructor, IsPlainOldData)

void UDamageNumberDisplayWidget::SetDisplayInformation(class AActor** InTargetActor, bool* InTetherToEventLocation, class UClass** DamageType, float* InDamageAmount, bool* InIsLethal, bool* InIsHeadshot, float* InDelayWindow, bool* InShieldHit, bool* InDamageReduced, bool* InDamageResisted)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.SetDisplayInformation");

	UDamageNumberDisplayWidget_SetDisplayInformation_Params params;
	params.InTargetActor = InTargetActor;
	params.InTetherToEventLocation = InTetherToEventLocation;
	params.DamageType = DamageType;
	params.InDamageAmount = InDamageAmount;
	params.InIsLethal = InIsLethal;
	params.InIsHeadshot = InIsHeadshot;
	params.InDelayWindow = InDelayWindow;
	params.InShieldHit = InShieldHit;
	params.InDamageReduced = InDamageReduced;
	params.InDamageResisted = InDamageResisted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.DamageNumberDisplayWidget.PlayFlourishAnimation
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)

void UDamageNumberDisplayWidget::PlayFlourishAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.PlayFlourishAnimation");

	UDamageNumberDisplayWidget_PlayFlourishAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplaySpecialDamageInfo
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         CurrentDamageAmount            (Parm, ZeroConstructor, IsPlainOldData)
// struct FSpecialDamageColors*   DamageColors                   (Parm)
// bool*                          bChangePosition                (Parm, ZeroConstructor, IsPlainOldData)

void UDamageNumberDisplayWidget::OnDisplaySpecialDamageInfo(float* CurrentDamageAmount, struct FSpecialDamageColors* DamageColors, bool* bChangePosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplaySpecialDamageInfo");

	UDamageNumberDisplayWidget_OnDisplaySpecialDamageInfo_Params params;
	params.CurrentDamageAmount = CurrentDamageAmount;
	params.DamageColors = DamageColors;
	params.bChangePosition = bChangePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplayInformationReset
// (Event, Public, BlueprintEvent)

void UDamageNumberDisplayWidget::OnDisplayInformationReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.OnDisplayInformationReset");

	UDamageNumberDisplayWidget_OnDisplayInformationReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.DamageNumberDisplayWidget.IsDisplayStacking
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UDamageNumberDisplayWidget::IsDisplayStacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.DamageNumberDisplayWidget.IsDisplayStacking");

	UDamageNumberDisplayWidget_IsDisplayStacking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnUpdatedPawnInventorySlot
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot*   InventorySlot                  (Parm)

void UKSViewedPawnInventoryWidget::OnUpdatedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.OnUpdatedPawnInventorySlot");

	UKSViewedPawnInventoryWidget_OnUpdatedPawnInventorySlot_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnRemovedPawnInventorySlot
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot*   InventorySlot                  (Parm)

void UKSViewedPawnInventoryWidget::OnRemovedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.OnRemovedPawnInventorySlot");

	UKSViewedPawnInventoryWidget_OnRemovedPawnInventorySlot_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.OnActivePawnInventorySlot
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// struct FPlayerInventorySlot*   InventorySlot                  (Parm)

void UKSViewedPawnInventoryWidget::OnActivePawnInventorySlot(struct FPlayerInventorySlot* InventorySlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.OnActivePawnInventorySlot");

	UKSViewedPawnInventoryWidget_OnActivePawnInventorySlot_Params params;
	params.InventorySlot = InventorySlot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnInventoryWidget.GetSlotIndex
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FGameplayTag*           EquipPoint                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSViewedPawnInventoryWidget::GetSlotIndex(struct FGameplayTag* EquipPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnInventoryWidget.GetSlotIndex");

	UKSViewedPawnInventoryWidget_GetSlotIndex_Params params;
	params.EquipPoint = EquipPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewedPawnModsWidget.OnViewedPawnModAdded
// (Final, Native, Private)
// Parameters:
// class UKSPlayerMod**           Mod                            (Parm, ZeroConstructor, IsPlainOldData)
// class UKSPlayerModInstance**   ModInstance                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSViewedPawnModsWidget::OnViewedPawnModAdded(class UKSPlayerMod** Mod, class UKSPlayerModInstance** ModInstance)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnModsWidget.OnViewedPawnModAdded");

	UKSViewedPawnModsWidget_OnViewedPawnModAdded_Params params;
	params.Mod = Mod;
	params.ModInstance = ModInstance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSViewedPawnModsWidget.GetOverlay
// (Event, Public, BlueprintEvent)
// Parameters:
// class UOverlay*                ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOverlay* UKSViewedPawnModsWidget::GetOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewedPawnModsWidget.GetOverlay");

	UKSViewedPawnModsWidget_GetOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSViewRedirector_LocalSetting.DoesLocalSettingApply
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class APUMG_HUD**              HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSViewRedirector_LocalSetting::DoesLocalSettingApply(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSViewRedirector_LocalSetting.DoesLocalSettingApply");

	UKSViewRedirector_LocalSetting_DoesLocalSettingApply_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (Parm, ZeroConstructor)
// bool*                          bIsTalking                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMuted                       (Parm, ZeroConstructor, IsPlainOldData)

void UKSVoiceActivityWidget::OnVoiceParticipantUpdated(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantUpdated");

	UKSVoiceActivityWidget_OnVoiceParticipantUpdated_Params params;
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (Parm, ZeroConstructor)

void UKSVoiceActivityWidget::OnVoiceParticipantRemoved(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantRemoved");

	UKSVoiceActivityWidget_OnVoiceParticipantRemoved_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantAdded
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (Parm, ZeroConstructor)

void UKSVoiceActivityWidget::OnVoiceParticipantAdded(struct FString* AccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.OnVoiceParticipantAdded");

	UKSVoiceActivityWidget_OnVoiceParticipantAdded_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSVoiceActivityWidget.GetVoiceIdByPlayerId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64_t*                       PlayerId                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UKSVoiceActivityWidget::GetVoiceIdByPlayerId(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.GetVoiceIdByPlayerId");

	UKSVoiceActivityWidget_GetVoiceIdByPlayerId_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerStateByVoiceId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                VoiceId                        (Parm, ZeroConstructor)
// class AKSPlayerState*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AKSPlayerState* UKSVoiceActivityWidget::GetPlayerStateByVoiceId(struct FString* VoiceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerStateByVoiceId");

	UKSVoiceActivityWidget_GetPlayerStateByVoiceId_Params params;
	params.VoiceId = VoiceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerIdByVoiceId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString*                VoiceId                        (Parm, ZeroConstructor)
// int64_t                        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int64_t UKSVoiceActivityWidget::GetPlayerIdByVoiceId(struct FString* VoiceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoiceActivityWidget.GetPlayerIdByVoiceId");

	UKSVoiceActivityWidget_GetPlayerIdByVoiceId_Params params;
	params.VoiceId = VoiceId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSVoucherAcquisition.DisplayVoucherRedemptionFailed
// (Final, Native, Public, BlueprintCallable)

void UKSVoucherAcquisition::DisplayVoucherRedemptionFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSVoucherAcquisition.DisplayVoucherRedemptionFailed");

	UKSVoucherAcquisition_DisplayVoucherRedemptionFailed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentWidget.SetOwningWeaponComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UKSWeaponComponent**     InWeaponComponent              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UKSWeaponComponentWidget::SetOwningWeaponComponent(class UKSWeaponComponent** InWeaponComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.SetOwningWeaponComponent");

	UKSWeaponComponentWidget_SetOwningWeaponComponent_Params params;
	params.InWeaponComponent = InWeaponComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentWidget.PreClearWeaponComponent
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponComponentWidget::PreClearWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.PreClearWeaponComponent");

	UKSWeaponComponentWidget_PreClearWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentWidget.PostSetWeaponComponent
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponComponentWidget::PostSetWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.PostSetWeaponComponent");

	UKSWeaponComponentWidget_PostSetWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentWidget.OnEndActiveWeaponComponent
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponComponentWidget::OnEndActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.OnEndActiveWeaponComponent");

	UKSWeaponComponentWidget_OnEndActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentWidget.OnBecomeActiveWeaponComponent
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponComponentWidget::OnBecomeActiveWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.OnBecomeActiveWeaponComponent");

	UKSWeaponComponentWidget_OnBecomeActiveWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentWidget.IsWeaponComponentActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSWeaponComponentWidget::IsWeaponComponentActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.IsWeaponComponentActive");

	UKSWeaponComponentWidget_IsWeaponComponentActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentWidget.GetWeaponComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UKSWeaponComponent*      ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSWeaponComponent* UKSWeaponComponentWidget::GetWeaponComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentWidget.GetWeaponComponent");

	UKSWeaponComponentWidget_GetWeaponComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StopReloading
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponComponentAmmoWidget::StopReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.StopReloading");

	UKSWeaponComponentAmmoWidget_StopReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.StartReloading
// (Native, Event, Protected, BlueprintEvent)

void UKSWeaponComponentAmmoWidget::StartReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.StartReloading");

	UKSWeaponComponentAmmoWidget_StartReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.OnAmmoChanged
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// int*                           OldInClip                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldClipSize                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           OldReserve                     (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewInClip                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewClipSize                    (Parm, ZeroConstructor, IsPlainOldData)
// int*                           NewReserve                     (Parm, ZeroConstructor, IsPlainOldData)

void UKSWeaponComponentAmmoWidget::OnAmmoChanged(int* OldInClip, int* OldClipSize, int* OldReserve, int* NewInClip, int* NewClipSize, int* NewReserve)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.OnAmmoChanged");

	UKSWeaponComponentAmmoWidget_OnAmmoChanged_Params params;
	params.OldInClip = OldInClip;
	params.OldClipSize = OldClipSize;
	params.OldReserve = OldReserve;
	params.NewInClip = NewInClip;
	params.NewClipSize = NewClipSize;
	params.NewReserve = NewReserve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.IsReloading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UKSWeaponComponentAmmoWidget::IsReloading()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.IsReloading");

	UKSWeaponComponentAmmoWidget_IsReloading_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetClipSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSWeaponComponentAmmoWidget::GetClipSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetClipSize");

	UKSWeaponComponentAmmoWidget_GetClipSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInReserve
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSWeaponComponentAmmoWidget::GetAmmoInReserve()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInReserve");

	UKSWeaponComponentAmmoWidget_GetAmmoInReserve_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInClip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UKSWeaponComponentAmmoWidget::GetAmmoInClip()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWeaponComponentAmmoWidget.GetAmmoInClip");

	UKSWeaponComponentAmmoWidget_GetAmmoInClip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWhatsNewModal.OnJsonChanged
// (Event, Protected, BlueprintEvent)

void UKSWhatsNewModal::OnJsonChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.OnJsonChanged");

	UKSWhatsNewModal_OnJsonChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.KSWhatsNewModal.GetPanelData
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UKSWhatsNewPanel*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UKSWhatsNewPanel*> UKSWhatsNewModal::GetPanelData()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.GetPanelData");

	UKSWhatsNewModal_GetPanelData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.KSWhatsNewModal.GetJsonDataFactory
// (Final, Native, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// class UKSJsonDataFactory*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UKSJsonDataFactory* UKSWhatsNewModal::GetJsonDataFactory()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.KSWhatsNewModal.GetJsonDataFactory");

	UKSWhatsNewModal_GetJsonDataFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function KillstreakUINew.TickAnimationManager.StopAnimation
// (Final, Native, Public)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UTickAnimationManager::StopAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.StopAnimation");

	UTickAnimationManager_StopAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.TickAnimationManager.SkipToEndAnimation
// (Final, Native, Public)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UTickAnimationManager::SkipToEndAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.SkipToEndAnimation");

	UTickAnimationManager_SkipToEndAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.TickAnimationManager.ResumeAnimation
// (Final, Native, Public)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UTickAnimationManager::ResumeAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.ResumeAnimation");

	UTickAnimationManager_ResumeAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.TickAnimationManager.RemoveAnimation
// (Final, Native, Public)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UTickAnimationManager::RemoveAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.RemoveAnimation");

	UTickAnimationManager_RemoveAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.TickAnimationManager.PlayAnimation
// (Final, Native, Public)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UTickAnimationManager::PlayAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.PlayAnimation");

	UTickAnimationManager_PlayAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.TickAnimationManager.PauseAnimation
// (Final, Native, Public)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)

void UTickAnimationManager::PauseAnimation(struct FName* AnimName)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.PauseAnimation");

	UTickAnimationManager_PauseAnimation_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.TickAnimationManager.GetAnimationInfo
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTickAnimationParams    OutAnimParams                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTickAnimationManager::GetAnimationInfo(struct FName* AnimName, struct FTickAnimationParams* OutAnimParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.GetAnimationInfo");

	UTickAnimationManager_GetAnimationInfo_Params params;
	params.AnimName = AnimName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAnimParams != nullptr)
		*OutAnimParams = params.OutAnimParams;

	return params.ReturnValue;
}


// Function KillstreakUINew.TickAnimationManager.ApplyTick
// (Final, Native, Public)
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UTickAnimationManager::ApplyTick(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.ApplyTick");

	UTickAnimationManager_ApplyTick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillstreakUINew.TickAnimationManager.AddAnimation
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FName*                  AnimName                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate*        UpdateEvent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FScriptDelegate*        FinishedEvent                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UTickAnimationManager::AddAnimation(struct FName* AnimName, float* Duration, struct FScriptDelegate* UpdateEvent, struct FScriptDelegate* FinishedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function KillstreakUINew.TickAnimationManager.AddAnimation");

	UTickAnimationManager_AddAnimation_Params params;
	params.AnimName = AnimName;
	params.Duration = Duration;
	params.UpdateEvent = UpdateEvent;
	params.FinishedEvent = FinishedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
