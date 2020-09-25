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

// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextUnhover
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::HandlePlayerContextUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextUnhover");

	UWBP_CustomLobbyPlayer_C_HandlePlayerContextUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextHover
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::HandlePlayerContextHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerContextHover");

	UWBP_CustomLobbyPlayer_C_HandlePlayerContextHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PlayControlsShow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::DoHover(bool* PlayControlsShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoHover");

	UWBP_CustomLobbyPlayer_C_DoHover_Params params;
	params.PlayControlsShow = PlayControlsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          PlayControlsHide               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::DoUnhover(bool* PlayControlsHide)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoUnhover");

	UWBP_CustomLobbyPlayer_C_DoUnhover_Params params;
	params.PlayControlsHide = PlayControlsHide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoPlayerClicked
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::DoPlayerClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.DoPlayerClicked");

	UWBP_CustomLobbyPlayer_C_DoPlayerClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetRendererIsLocalPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsLocalPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::GetRendererIsLocalPlayer(bool* IsLocalPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetRendererIsLocalPlayer");

	UWBP_CustomLobbyPlayer_C_GetRendererIsLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsLocalPlayer != nullptr)
		*IsLocalPlayer = params.IsLocalPlayer;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerKick
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanKick                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::GetCanLocalPlayerKick(bool* CanKick)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerKick");

	UWBP_CustomLobbyPlayer_C_GetCanLocalPlayerKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanKick != nullptr)
		*CanKick = params.CanKick;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UserIsOverUs
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOver                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::UserIsOverUs(bool* IsOver)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.UserIsOverUs");

	UWBP_CustomLobbyPlayer_C_UserIsOverUs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOver != nullptr)
		*IsOver = params.IsOver;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerControl
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           CanControl                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::GetCanLocalPlayerControl(bool* CanControl)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetCanLocalPlayerControl");

	UWBP_CustomLobbyPlayer_C_GetCanLocalPlayerControl_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanControl != nullptr)
		*CanControl = params.CanControl;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.NavigateConfirm
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_CustomLobbyPlayer_C::NavigateConfirm()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.NavigateConfirm");

	UWBP_CustomLobbyPlayer_C_NavigateConfirm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_CustomLobbyPlayer_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnKeyUp");

	UWBP_CustomLobbyPlayer_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetEmpty");

	UWBP_CustomLobbyPlayer_C_SetEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetPlayerInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPUMG_CustomMatchMember playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::SetPlayerInfo(struct FPUMG_CustomMatchMember* playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetPlayerInfo");

	UWBP_CustomLobbyPlayer_C_SetPlayerInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (playerinfo != nullptr)
		*playerinfo = params.playerinfo;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetControlsSide
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::SetControlsSide(TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetControlsSide");

	UWBP_CustomLobbyPlayer_C_SetControlsSide_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetControlsHoverAnim
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidgetAnimation*        Animation                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::GetControlsHoverAnim(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GetControlsHoverAnim");

	UWBP_CustomLobbyPlayer_C_GetControlsHoverAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.PreConstruct");

	UWBP_CustomLobbyPlayer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_BndEvt__LobbyPlayerButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadHover
// (Event, Public, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::GamepadHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadHover");

	UWBP_CustomLobbyPlayer_C_GamepadHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadUnhover
// (Event, Public, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::GamepadUnhover()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.GamepadUnhover");

	UWBP_CustomLobbyPlayer_C_GamepadUnhover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInitialized");

	UWBP_CustomLobbyPlayer_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_BndEvt__SwapButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.Construct");

	UWBP_CustomLobbyPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerClicked
// (BlueprintCallable, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::HandlePlayerClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.HandlePlayerClicked");

	UWBP_CustomLobbyPlayer_C_HandlePlayerClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_BndEvt__PlayerCardButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnContextMenuOpen(TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuOpen");

	UWBP_CustomLobbyPlayer_C_OnContextMenuOpen_Params params;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CustomLobbyPlayer_C::OnContextMenuClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnContextMenuClose");

	UWBP_CustomLobbyPlayer_C_OnContextMenuClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetVoiceState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::SetVoiceState(bool* ShouldShow, bool* IsTalking, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.SetVoiceState");

	UWBP_CustomLobbyPlayer_C_SetVoiceState_Params params;
	params.ShouldShow = ShouldShow;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInputStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnInputStateChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnInputStateChange");

	UWBP_CustomLobbyPlayer_C_OnInputStateChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.ExecuteUbergraph_WBP_CustomLobbyPlayer
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::ExecuteUbergraph_WBP_CustomLobbyPlayer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.ExecuteUbergraph_WBP_CustomLobbyPlayer");

	UWBP_CustomLobbyPlayer_C_ExecuteUbergraph_WBP_CustomLobbyPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnUnhovered__DelegateSignature(class UWBP_CustomLobbyPlayer_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnUnhovered__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_OnUnhovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CustomLobbyPlayer_C** Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnHovered__DelegateSignature(class UWBP_CustomLobbyPlayer_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnHovered__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_OnHovered__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerKick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnPlayerKick__DelegateSignature(class UKSPlayerInfo** playerinfo, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerKick__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_OnPlayerKick__DelegateSignature_Params params;
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerSwap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnPlayerSwap__DelegateSignature(class UKSPlayerInfo** playerinfo, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerSwap__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_OnPlayerSwap__DelegateSignature_Params params;
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnEmptyClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnEmptyClicked__DelegateSignature(class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnEmptyClicked__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_OnEmptyClicked__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSWidget**              Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_CustomLobbyPlayer_C::OnPlayerClicked__DelegateSignature(class UKSPlayerInfo** playerinfo, class UKSWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CustomLobbyPlayer.WBP_CustomLobbyPlayer_C.OnPlayerClicked__DelegateSignature");

	UWBP_CustomLobbyPlayer_C_OnPlayerClicked__DelegateSignature_Params params;
	params.playerinfo = playerinfo;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
