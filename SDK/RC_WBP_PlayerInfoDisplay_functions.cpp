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

// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdateVoiceDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateVoiceDisplay");

	UWBP_PlayerInfoDisplay_C_UpdateVoiceDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo*         Font                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerInfoDisplay_C::SetPlayerNameFont(struct FSlateFontInfo* Font)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameFont");

	UWBP_PlayerInfoDisplay_C_SetPlayerNameFont_Params params;
	params.Font = Font;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor*            Color                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerInfoDisplay_C::SetPlayerNameColor(struct FSlateColor* Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerNameColor");

	UWBP_PlayerInfoDisplay_C_SetPlayerNameColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowLeaderIcon                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::TogglePartyLeaderIcon(bool* ShowLeaderIcon)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.TogglePartyLeaderIcon");

	UWBP_PlayerInfoDisplay_C_TogglePartyLeaderIcon_Params params;
	params.ShowLeaderIcon = ShowLeaderIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::SetVoiceActive(bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceActive");

	UWBP_PlayerInfoDisplay_C_SetVoiceActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Talking                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::SetVoiceTalking(bool* Talking)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceTalking");

	UWBP_PlayerInfoDisplay_C_SetVoiceTalking_Params params;
	params.Talking = Talking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Muted                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::SetVoiceMuted(bool* Muted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceMuted");

	UWBP_PlayerInfoDisplay_C_SetVoiceMuted_Params params;
	params.Muted = Muted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor
// (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             StatusColor                    (Parm, OutParm)

void UWBP_PlayerInfoDisplay_C::GetStatusColor(struct FSlateColor* StatusColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.GetStatusColor");

	UWBP_PlayerInfoDisplay_C_GetStatusColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusColor != nullptr)
		*StatusColor = params.StatusColor;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdateStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateStatus");

	UWBP_PlayerInfoDisplay_C_UpdateStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdatePlayerInfoIcons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdatePlayerInfoIcons");

	UWBP_PlayerInfoDisplay_C_UpdatePlayerInfoIcons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::UpdateAvatarDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.UpdateAvatarDisplay");

	UWBP_PlayerInfoDisplay_C_UpdateAvatarDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::SetPlayerInfo(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetPlayerInfo");

	UWBP_PlayerInfoDisplay_C_SetPlayerInfo_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::SetVoiceState(bool* ShouldShow, bool* IsTalking, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.SetVoiceState");

	UWBP_PlayerInfoDisplay_C_SetVoiceState_Params params;
	params.ShouldShow = ShouldShow;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowStatus                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::ToggleStatusDisplay(bool* ShowStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ToggleStatusDisplay");

	UWBP_PlayerInfoDisplay_C_ToggleStatusDisplay_Params params;
	params.ShowStatus = ShowStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.PreConstruct");

	UWBP_PlayerInfoDisplay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::HandleFilteredNameUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.HandleFilteredNameUpdate");

	UWBP_PlayerInfoDisplay_C_HandleFilteredNameUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerInfoDisplay_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.OnInitialized");

	UWBP_PlayerInfoDisplay_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerInfoDisplay_C::ExecuteUbergraph_WBP_PlayerInfoDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerInfoDisplay.WBP_PlayerInfoDisplay_C.ExecuteUbergraph_WBP_PlayerInfoDisplay");

	UWBP_PlayerInfoDisplay_C_ExecuteUbergraph_WBP_PlayerInfoDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
