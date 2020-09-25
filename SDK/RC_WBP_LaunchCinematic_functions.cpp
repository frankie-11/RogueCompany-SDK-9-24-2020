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

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_LaunchCinematic_C::IsActiveView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView");

	UWBP_LaunchCinematic_C_IsActiveView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::StopVideoPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback");

	UWBP_LaunchCinematic_C_StopVideoPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::StopAudioPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback");

	UWBP_LaunchCinematic_C_StopAudioPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::HandleOnClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked");

	UWBP_LaunchCinematic_C_HandleOnClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       InAnimation                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaunchCinematic_C::PlayAnimationSmoothly(class UWidgetAnimation** InAnimation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly");

	UWBP_LaunchCinematic_C_PlayAnimationSmoothly_Params params;
	params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::FinishPlayback()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback");

	UWBP_LaunchCinematic_C_FinishPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_LaunchCinematic_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown");

	UWBP_LaunchCinematic_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::SetPromptKeyDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay");

	UWBP_LaunchCinematic_C_SetPromptKeyDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FKey>            SkipPromptKeys                 (Parm, OutParm, ZeroConstructor)

void UWBP_LaunchCinematic_C::GetPromptKeys(TArray<struct FKey>* SkipPromptKeys)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys");

	UWBP_LaunchCinematic_C_GetPromptKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SkipPromptKeys != nullptr)
		*SkipPromptKeys = params.SkipPromptKeys;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeyEvent*              InInput                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           IsSkipKey                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_LaunchCinematic_C::IsSkipKey(struct FKeyEvent* InInput, bool* IsSkipKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey");

	UWBP_LaunchCinematic_C_IsSkipKey_Params params;
	params.InInput = InInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsSkipKey != nullptr)
		*IsSkipKey = params.IsSkipKey;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaunchCinematic_C::TogglePromptDisplay(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay");

	UWBP_LaunchCinematic_C_TogglePromptDisplay_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone
// (BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::WhenCinematicDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone");

	UWBP_LaunchCinematic_C_WhenCinematicDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPlatformMediaSource**   PlatformMediaSource            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          PlayEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEvent**          StopEvent                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaunchCinematic_C::OnReadyForPlayback(class UPlatformMediaSource** PlatformMediaSource, class UAkAudioEvent** PlayEvent, class UAkAudioEvent** StopEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback");

	UWBP_LaunchCinematic_C_OnReadyForPlayback_Params params;
	params.PlatformMediaSource = PlatformMediaSource;
	params.PlayEvent = PlayEvent;
	params.StopEvent = StopEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanSkipEntry                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaunchCinematic_C::OnShouldShowPromptChanged(bool* bCanSkipEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged");

	UWBP_LaunchCinematic_C_OnShouldShowPromptChanged_Params params;
	params.bCanSkipEntry = bCanSkipEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_LaunchCinematic_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation");

	UWBP_LaunchCinematic_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaunchCinematic_C::HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged");

	UWBP_LaunchCinematic_C_HandleInputStateChanged_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_LaunchCinematic_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown");

	UWBP_LaunchCinematic_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn
// (BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::FadeTextureIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn");

	UWBP_LaunchCinematic_C_FadeTextureIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut
// (BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::FadeTextureOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut");

	UWBP_LaunchCinematic_C_FadeTextureOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_LaunchCinematic_C::HandleFadeOutAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished");

	UWBP_LaunchCinematic_C_HandleFadeOutAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingPlaylist
// (Event, Public, BlueprintEvent)

void UWBP_LaunchCinematic_C::OnBeginLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingPlaylist");

	UWBP_LaunchCinematic_C_OnBeginLoadingPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingPlaylist
// (Event, Public, BlueprintEvent)

void UWBP_LaunchCinematic_C::OnEndLoadingPlaylist()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingPlaylist");

	UWBP_LaunchCinematic_C_OnEndLoadingPlaylist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_LaunchCinematic_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide");

	UWBP_LaunchCinematic_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                OpenedUrl                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_LaunchCinematic_C::HandleOnMediaOpened(struct FString* OpenedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened");

	UWBP_LaunchCinematic_C_HandleOnMediaOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                FailedUrl                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_LaunchCinematic_C::HandleOnMediaOpenFailed(struct FString* FailedUrl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed");

	UWBP_LaunchCinematic_C_HandleOnMediaOpenFailed_Params params;
	params.FailedUrl = FailedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_LaunchCinematic_C::ExecuteUbergraph_WBP_LaunchCinematic(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic");

	UWBP_LaunchCinematic_C_ExecuteUbergraph_WBP_LaunchCinematic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
