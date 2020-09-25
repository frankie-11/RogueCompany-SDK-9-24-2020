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

// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetCustomMatchOptions
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::SetCustomMatchOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetCustomMatchOptions");

	UWBP_PlayerContextMenu_C_SetCustomMatchOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetQueueDataFactory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSQueueDataFactory*     DataFactory                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           WasFound                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::GetQueueDataFactory(class UKSQueueDataFactory** DataFactory, bool* WasFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetQueueDataFactory");

	UWBP_PlayerContextMenu_C_GetQueueDataFactory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DataFactory != nullptr)
		*DataFactory = params.DataFactory;
	if (WasFound != nullptr)
		*WasFound = params.WasFound;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdateOptionsList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::UpdateOptionsList()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdateOptionsList");

	UWBP_PlayerContextMenu_C_UpdateOptionsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerContextMenuContext>* Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::SetMenuContext(TEnumAsByte<EPlayerContextMenuContext>* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuContext");

	UWBP_PlayerContextMenu_C_SetMenuContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Showing                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::IsShowingPlayer(class UKSPlayerInfo** playerinfo, bool* Showing)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsShowingPlayer");

	UWBP_PlayerContextMenu_C_IsShowingPlayer_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Showing != nullptr)
		*Showing = params.Showing;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsOpen                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::IsContextMenuOpen(bool* IsOpen)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsContextMenuOpen");

	UWBP_PlayerContextMenu_C_IsContextMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsOpen != nullptr)
		*IsOpen = params.IsOpen;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetPlayerReported
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::SetPlayerReported(int64_t* PlayerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetPlayerReported");

	UWBP_PlayerContextMenu_C_SetPlayerReported_Params params;
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HasReportedPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSPlayerInfo**          Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasReported                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::HasReportedPlayer(class UKSPlayerInfo** Player, bool* HasReported)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HasReportedPlayer");

	UWBP_PlayerContextMenu_C_HasReportedPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasReported != nullptr)
		*HasReported = params.HasReported;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C** PlayerCard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::ShowForPlayerCard(class UWBP_player_card_module_C** PlayerCard, TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayerCard");

	UWBP_PlayerContextMenu_C_ShowForPlayerCard_Params params;
	params.PlayerCard = PlayerCard;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FMargin*                Padding                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::MoveToWidgetSide(class UWidget** Widget, TEnumAsByte<ELaterality>* Side, struct FMargin* Padding)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetSide");

	UWBP_PlayerContextMenu_C_MoveToWidgetSide_Params params;
	params.Widget = Widget;
	params.Side = Side;
	params.Padding = Padding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPlayerAlias>*   Aliases                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_PlayerContextMenu_C::UpdatePlayerAliases(TArray<struct FPlayerAlias>* Aliases)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.UpdatePlayerAliases");

	UWBP_PlayerContextMenu_C_UpdatePlayerAliases_Params params;
	params.Aliases = Aliases;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetAndShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::MoveToWidgetAndShow(class UWidget** Widget, class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidgetAndShow");

	UWBP_PlayerContextMenu_C_MoveToWidgetAndShow_Params params;
	params.Widget = Widget;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<ELaterality>       Side                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::MoveToWidget(class UWidget** Widget, TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.MoveToWidget");

	UWBP_PlayerContextMenu_C_MoveToWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Side != nullptr)
		*Side = params.Side;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsAccountId                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::IsCurrentAccountId(struct FString* AccountId, bool* IsAccountId)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.IsCurrentAccountId");

	UWBP_PlayerContextMenu_C_IsCurrentAccountId_Params params;
	params.AccountId = AccountId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAccountId != nullptr)
		*IsAccountId = params.IsAccountId;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionsWidgetByEnum
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerContextOption>* InOption                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_PlayerContextMenuOption_C* OutWidget                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerContextMenu_C::GetOptionsWidgetByEnum(TEnumAsByte<EPlayerContextOption>* InOption, class UWBP_PlayerContextMenuOption_C** OutWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetOptionsWidgetByEnum");

	UWBP_PlayerContextMenu_C_GetOptionsWidgetByEnum_Params params;
	params.InOption = InOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::RefreshOptionsPadding()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.RefreshOptionsPadding");

	UWBP_PlayerContextMenu_C_RefreshOptionsPadding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::HideContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HideContextMenu");

	UWBP_PlayerContextMenu_C_HideContextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_player_card_module_C** Selected_Player_Card           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerContextMenu_C::Move_To_Player_Card_And_Show(class UWBP_player_card_module_C** Selected_Player_Card)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Move To Player Card And Show");

	UWBP_PlayerContextMenu_C_Move_To_Player_Card_And_Show_Params params;
	params.Selected_Player_Card = Selected_Player_Card;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Get Option Widgets
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_PlayerContextMenuOption_C*> Option_Widgets                 (Parm, OutParm, ZeroConstructor)

void UWBP_PlayerContextMenu_C::Get_Option_Widgets(TArray<class UWBP_PlayerContextMenuOption_C*>* Option_Widgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Get Option Widgets");

	UWBP_PlayerContextMenu_C_Get_Option_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Option_Widgets != nullptr)
		*Option_Widgets = params.Option_Widgets;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBox2D*                 AbsoluteRect                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::SetMenuPosition(struct FBox2D* AbsoluteRect, TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetMenuPosition");

	UWBP_PlayerContextMenu_C_SetMenuPosition_Params params;
	params.AbsoluteRect = AbsoluteRect;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::Is_Any_Option_Visible(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Is Any Option Visible");

	UWBP_PlayerContextMenu_C_Is_Any_Option_Visible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetAllOptionsVisibility
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLocalInParty                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsLocalPartyFull               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HasPlayerInvitedUsToParty      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsLocalPartyLeader             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPlayerPendingPartyInvite     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPlayerInLocalParty           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPlayerOnline                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsLocalPlayer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsCrossplayEnabled             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsFriend                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsRequestingFriend             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsPendingFriend                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          LocalPlayerCanInvite           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::SetAllOptionsVisibility(bool* IsLocalInParty, bool* IsLocalPartyFull, bool* HasPlayerInvitedUsToParty, bool* IsLocalPartyLeader, bool* IsPlayerPendingPartyInvite, bool* IsPlayerInLocalParty, bool* IsPlayerOnline, bool* IsLocalPlayer, bool* IsCrossplayEnabled, bool* IsFriend, bool* IsRequestingFriend, bool* IsPendingFriend, bool* LocalPlayerCanInvite, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetAllOptionsVisibility");

	UWBP_PlayerContextMenu_C_SetAllOptionsVisibility_Params params;
	params.IsLocalInParty = IsLocalInParty;
	params.IsLocalPartyFull = IsLocalPartyFull;
	params.HasPlayerInvitedUsToParty = HasPlayerInvitedUsToParty;
	params.IsLocalPartyLeader = IsLocalPartyLeader;
	params.IsPlayerPendingPartyInvite = IsPlayerPendingPartyInvite;
	params.IsPlayerInLocalParty = IsPlayerInLocalParty;
	params.IsPlayerOnline = IsPlayerOnline;
	params.IsLocalPlayer = IsLocalPlayer;
	params.IsCrossplayEnabled = IsCrossplayEnabled;
	params.IsFriend = IsFriend;
	params.IsRequestingFriend = IsRequestingFriend;
	params.IsPendingFriend = IsPendingFriend;
	params.LocalPlayerCanInvite = LocalPlayerCanInvite;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PlayerContextMenu_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyUp");

	UWBP_PlayerContextMenu_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_PlayerContextMenu_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnKeyDown");

	UWBP_PlayerContextMenu_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>         Buttons                        (Parm, OutParm, ZeroConstructor)

void UWBP_PlayerContextMenu_C::GetAllActiveButtons(TArray<class UWidget*>* Buttons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetAllActiveButtons");

	UWBP_PlayerContextMenu_C_GetAllActiveButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Buttons != nullptr)
		*Buttons = params.Buttons;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 FocusWidget                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerContextMenu_C::GetFirstActiveButton(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.GetFirstActiveButton");

	UWBP_PlayerContextMenu_C_GetFirstActiveButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusWidget != nullptr)
		*FocusWidget = params.FocusWidget;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleQueueStatusChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPUMG_MatchStatus*             QueueStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::HandleQueueStatusChanged(EPUMG_MatchStatus* QueueStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleQueueStatusChanged");

	UWBP_PlayerContextMenu_C_HandleQueueStatusChanged_Params params;
	params.QueueStatus = QueueStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.InitializeQueueDF
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::InitializeQueueDF()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.InitializeQueueDF");

	UWBP_PlayerContextMenu_C_InitializeQueueDF_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetInactiveOption
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerContextOption>* Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsActive                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::SetInactiveOption(TEnumAsByte<EPlayerContextOption>* Context, bool* IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetInactiveOption");

	UWBP_PlayerContextMenu_C_SetInactiveOption_Params params;
	params.Context = Context;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerContextOption>* Selected_Option                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::HandleOptionSelected(TEnumAsByte<EPlayerContextOption>* Selected_Option)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.HandleOptionSelected");

	UWBP_PlayerContextMenu_C_HandleOptionSelected_Params params;
	params.Selected_Option = Selected_Option;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          Friend_Info                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TScriptInterface<class UIKSContextMenuTarget_C>* TargetWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELaterality>*      Side                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::ShowForPlayer(class UKSPlayerInfo** Friend_Info, TScriptInterface<class UIKSContextMenuTarget_C>* TargetWidget, TEnumAsByte<ELaterality>* Side)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ShowForPlayer");

	UWBP_PlayerContextMenu_C_ShowForPlayer_Params params;
	params.Friend_Info = Friend_Info;
	params.TargetWidget = TargetWidget;
	params.Side = Side;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetEnabledOption
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerContextOption>* ContextOption                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::SetEnabledOption(TEnumAsByte<EPlayerContextOption>* ContextOption, bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.SetEnabledOption");

	UWBP_PlayerContextMenu_C_SetEnabledOption_Params params;
	params.ContextOption = ContextOption;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.PreConstruct");

	UWBP_PlayerContextMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::Handle_Input_State_Changed(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle Input State Changed");

	UWBP_PlayerContextMenu_C_Handle_Input_State_Changed_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousRoute                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EViewManagerLayer*             Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::Handle_View_State_Changed(struct FName* CurrentRoute, struct FName* PreviousRoute, EViewManagerLayer* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.Handle View State Changed");

	UWBP_PlayerContextMenu_C_Handle_View_State_Changed_Params params;
	params.CurrentRoute = CurrentRoute;
	params.PreviousRoute = PreviousRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerContextMenu_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnInitialized");

	UWBP_PlayerContextMenu_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FString*                AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool*                          bIsTalking                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsMuted                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature");

	UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature_Params params;
	params.AccountId = AccountId;
	params.bIsTalking = bIsTalking;
	params.bIsMuted = bIsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// EKSVoiceActivityAudioState*    AudioState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature(EKSVoiceActivityAudioState* AudioState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature");

	UWBP_PlayerContextMenu_C_BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature_Params params;
	params.AudioState = AudioState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::ExecuteUbergraph_WBP_PlayerContextMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.ExecuteUbergraph_WBP_PlayerContextMenu");

	UWBP_PlayerContextMenu_C_ExecuteUbergraph_WBP_PlayerContextMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerContextMenu_C::OnReportPlayer__DelegateSignature(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReportPlayer__DelegateSignature");

	UWBP_PlayerContextMenu_C_OnReportPlayer__DelegateSignature_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                FocusWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerContextMenu_C::OnMenuStart__DelegateSignature(class UWidget** FocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuStart__DelegateSignature");

	UWBP_PlayerContextMenu_C_OnMenuStart__DelegateSignature_Params params;
	params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerContextMenu_C::OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnMenuHidden__DelegateSignature");

	UWBP_PlayerContextMenu_C_OnMenuHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         NavWidgets                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UWidget**                Default_Widget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerContextMenu_C::OnReadyForNavigation__DelegateSignature(class UWidget** Default_Widget, TArray<class UWidget*>* NavWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerContextMenu.WBP_PlayerContextMenu_C.OnReadyForNavigation__DelegateSignature");

	UWBP_PlayerContextMenu_C_OnReadyForNavigation__DelegateSignature_Params params;
	params.Default_Widget = Default_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NavWidgets != nullptr)
		*NavWidgets = params.NavWidgets;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
