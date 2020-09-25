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

// Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerCardStyle>* PlayerCardStyle                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::SetPlayerCardStyle(TEnumAsByte<EPlayerCardStyle>* PlayerCardStyle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SetPlayerCardStyle");

	UWBP_player_card_module_C_SetPlayerCardStyle_Params params;
	params.PlayerCardStyle = PlayerCardStyle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.GetStatusColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSPlayerOnlineStatus*         Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             StatusColor                    (Parm, OutParm)

void UWBP_player_card_module_C::GetStatusColor(EKSPlayerOnlineStatus* Status, struct FSlateColor* StatusColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.GetStatusColor");

	UWBP_player_card_module_C_GetStatusColor_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusColor != nullptr)
		*StatusColor = params.StatusColor;
}


// Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::SetVoiceState(bool* ShouldShow, bool* IsTalking, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SetVoiceState");

	UWBP_player_card_module_C_SetVoiceState_Params params;
	params.ShouldShow = ShouldShow;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::View_ResetPlayerCardState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.View_ResetPlayerCardState");

	UWBP_player_card_module_C_View_ResetPlayerCardState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_player_card_module_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.NavigateConfirm");

	UWBP_player_card_module_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_player_card_module.WBP_player_card_module_C.PlayerUpdate
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::PlayerUpdate(class UPUMG_PlayerInfo** Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.PlayerUpdate");

	UWBP_player_card_module_C_PlayerUpdate_Params params;
	params.Player_Info = Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::View_SetDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.View_SetDefault");

	UWBP_player_card_module_C_View_SetDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::View_SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.View_SetEmpty");

	UWBP_player_card_module_C_View_SetEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardClickSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::SocialPlayerCardClickSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardClickSFX");

	UWBP_player_card_module_C_SocialPlayerCardClickSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardHoverSFX
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::SocialPlayerCardHoverSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.SocialPlayerCardHoverSFX");

	UWBP_player_card_module_C_SocialPlayerCardHoverSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::ShowPlayerCardAnimation(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimation");

	UWBP_player_card_module_C_ShowPlayerCardAnimation_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::ShowPlayerCardAnimationFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.ShowPlayerCardAnimationFinished");

	UWBP_player_card_module_C_ShowPlayerCardAnimationFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::AddShowPlayerCardAnimation(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.AddShowPlayerCardAnimation");

	UWBP_player_card_module_C_AddShowPlayerCardAnimation_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.PreConstruct");

	UWBP_player_card_module_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_player_card_module_C::BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UWBP_player_card_module_C_BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::Manual_Clicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Manual Clicked");

	UWBP_player_card_module_C_Manual_Clicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.GamepadUnhover");

	UWBP_player_card_module_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.GamepadHover");

	UWBP_player_card_module_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::NavigateLeftFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.NavigateLeftFailure");

	UWBP_player_card_module_C_NavigateLeftFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure
// (Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::NavigateRightFailure()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.NavigateRightFailure");

	UWBP_player_card_module_C_NavigateRightFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::Manual_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Manual Hover");

	UWBP_player_card_module_C_Manual_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover
// (BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::Manual_Unhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Manual Unhover");

	UWBP_player_card_module_C_Manual_Unhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EKSPlayerOnlineStatus*         PlayerStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPortalFriend                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPending                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::OnPlayerUpdate(class UPUMG_PlayerInfo** playerinfo, EKSPlayerOnlineStatus* PlayerStatus, bool* IsPortalFriend, bool* IsPending)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerUpdate");

	UWBP_player_card_module_C_OnPlayerUpdate_Params params;
	params.playerinfo = playerinfo;
	params.PlayerStatus = PlayerStatus;
	params.IsPortalFriend = IsPortalFriend;
	params.IsPending = IsPending;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.Handle Input State Changed");

	UWBP_player_card_module_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::OnContextMenuOpen(TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuOpen");

	UWBP_player_card_module_C_OnContextMenuOpen_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::OnContextMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnContextMenuClose");

	UWBP_player_card_module_C_OnContextMenuClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_player_card_module_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnInitialized");

	UWBP_player_card_module_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::ExecuteUbergraph_WBP_player_card_module(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.ExecuteUbergraph_WBP_player_card_module");

	UWBP_player_card_module_C_ExecuteUbergraph_WBP_player_card_module_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnBackButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::OnBackButton__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnBackButton__DelegateSignature");

	UWBP_player_card_module_C_OnBackButton__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnCardHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Card_Player_Info               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_card_module_C::OnCardHovered__DelegateSignature(class UPUMG_PlayerInfo** Card_Player_Info)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnCardHovered__DelegateSignature");

	UWBP_player_card_module_C_OnCardHovered__DelegateSignature_Params params;
	params.Card_Player_Info = Card_Player_Info;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateRightFailure__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::OnNavigateRightFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateRightFailure__DelegateSignature");

	UWBP_player_card_module_C_OnNavigateRightFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateLeftFailure__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_player_card_module_C::OnNavigateLeftFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnNavigateLeftFailure__DelegateSignature");

	UWBP_player_card_module_C_OnNavigateLeftFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C** Selected_Player_Card           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_player_card_module_C::OnPlayerClicked__DelegateSignature(class UWBP_player_card_module_C** Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_card_module.WBP_player_card_module_C.OnPlayerClicked__DelegateSignature");

	UWBP_player_card_module_C_OnPlayerClicked__DelegateSignature_Params params;
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
