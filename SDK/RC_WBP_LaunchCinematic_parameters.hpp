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

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsActiveView
struct UWBP_LaunchCinematic_C_IsActiveView_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopVideoPlayback
struct UWBP_LaunchCinematic_C_StopVideoPlayback_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.StopAudioPlayback
struct UWBP_LaunchCinematic_C_StopAudioPlayback_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnClicked
struct UWBP_LaunchCinematic_C_HandleOnClicked_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.PlayAnimationSmoothly
struct UWBP_LaunchCinematic_C_PlayAnimationSmoothly_Params
{
	class UWidgetAnimation**                           InAnimation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FinishPlayback
struct UWBP_LaunchCinematic_C_FinishPlayback_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnKeyDown
struct UWBP_LaunchCinematic_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.SetPromptKeyDisplay
struct UWBP_LaunchCinematic_C_SetPromptKeyDisplay_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.GetPromptKeys
struct UWBP_LaunchCinematic_C_GetPromptKeys_Params
{
	TArray<struct FKey>                                SkipPromptKeys;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.IsSkipKey
struct UWBP_LaunchCinematic_C_IsSkipKey_Params
{
	struct FKeyEvent*                                  InInput;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               IsSkipKey;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.TogglePromptDisplay
struct UWBP_LaunchCinematic_C_TogglePromptDisplay_Params
{
	bool*                                              ShouldShow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.WhenCinematicDone
struct UWBP_LaunchCinematic_C_WhenCinematicDone_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnReadyForPlayback
struct UWBP_LaunchCinematic_C_OnReadyForPlayback_Params
{
	class UPlatformMediaSource**                       PlatformMediaSource;                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              PlayEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent**                              StopEvent;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShouldShowPromptChanged
struct UWBP_LaunchCinematic_C_OnShouldShowPromptChanged_Params
{
	bool*                                              bCanSkipEntry;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.InitializeWidgetNavigation
struct UWBP_LaunchCinematic_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleInputStateChanged
struct UWBP_LaunchCinematic_C_HandleInputStateChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputState;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnShown
struct UWBP_LaunchCinematic_C_OnShown_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureIn
struct UWBP_LaunchCinematic_C_FadeTextureIn_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.FadeTextureOut
struct UWBP_LaunchCinematic_C_FadeTextureOut_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleFadeOutAnimFinished
struct UWBP_LaunchCinematic_C_HandleFadeOutAnimFinished_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnBeginLoadingPlaylist
struct UWBP_LaunchCinematic_C_OnBeginLoadingPlaylist_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnEndLoadingPlaylist
struct UWBP_LaunchCinematic_C_OnEndLoadingPlaylist_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.OnHide
struct UWBP_LaunchCinematic_C_OnHide_Params
{
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpened
struct UWBP_LaunchCinematic_C_HandleOnMediaOpened_Params
{
	struct FString*                                    OpenedUrl;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.HandleOnMediaOpenFailed
struct UWBP_LaunchCinematic_C_HandleOnMediaOpenFailed_Params
{
	struct FString*                                    FailedUrl;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function WBP_LaunchCinematic.WBP_LaunchCinematic_C.ExecuteUbergraph_WBP_LaunchCinematic
struct UWBP_LaunchCinematic_C_ExecuteUbergraph_WBP_LaunchCinematic_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
