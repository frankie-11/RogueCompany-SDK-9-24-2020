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

// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.GetStatusColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EKSPlayerOnlineStatus*         PlayerStatus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             StatusColor                    (Parm, OutParm)

void UWBP_PlayerStatus_ContextMenu_C::GetStatusColor(EKSPlayerOnlineStatus* PlayerStatus, struct FSlateColor* StatusColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.GetStatusColor");

	UWBP_PlayerStatus_ContextMenu_C_GetStatusColor_Params params;
	params.PlayerStatus = PlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusColor != nullptr)
		*StatusColor = params.StatusColor;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.UpdatePlayerStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatus_ContextMenu_C::UpdatePlayerStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.UpdatePlayerStatus");

	UWBP_PlayerStatus_ContextMenu_C_UpdatePlayerStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HideContextMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatus_ContextMenu_C::HideContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HideContextMenu");

	UWBP_PlayerStatus_ContextMenu_C_HideContextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ShowContextMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatus_ContextMenu_C::ShowContextMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ShowContextMenu");

	UWBP_PlayerStatus_ContextMenu_C_ShowContextMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HandleOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPlayerStatusOption>* EPlayerStatus                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatus_ContextMenu_C::HandleOptionSelected(TEnumAsByte<EPlayerStatusOption>* EPlayerStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.HandleOptionSelected");

	UWBP_PlayerStatus_ContextMenu_C_HandleOptionSelected_Params params;
	params.EPlayerStatus = EPlayerStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetupOptionButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatus_ContextMenu_C::SetupOptionButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetupOptionButton");

	UWBP_PlayerStatus_ContextMenu_C_SetupOptionButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatus_ContextMenu_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.PreConstruct");

	UWBP_PlayerStatus_ContextMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatus_ContextMenu_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.InitializeWidget");

	UWBP_PlayerStatus_ContextMenu_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerStatus_ContextMenu_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.Construct");

	UWBP_PlayerStatus_ContextMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetPlayerInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPlayerInfo**          playerinfo                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatus_ContextMenu_C::SetPlayerInfo(class UKSPlayerInfo** playerinfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.SetPlayerInfo");

	UWBP_PlayerStatus_ContextMenu_C_SetPlayerInfo_Params params;
	params.playerinfo = playerinfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.DetermineToggleState
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatus_ContextMenu_C::DetermineToggleState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.DetermineToggleState");

	UWBP_PlayerStatus_ContextMenu_C_DetermineToggleState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenu
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerStatus_ContextMenu_C::ExecuteUbergraph_WBP_PlayerStatus_ContextMenu(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.ExecuteUbergraph_WBP_PlayerStatus_ContextMenu");

	UWBP_PlayerStatus_ContextMenu_C_ExecuteUbergraph_WBP_PlayerStatus_ContextMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PlayerStatus_ContextMenuOption_C** FirstFocusableButton           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_PlayerStatus_ContextMenu_C::OnMenuStart__DelegateSignature(class UWBP_PlayerStatus_ContextMenuOption_C** FirstFocusableButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuStart__DelegateSignature");

	UWBP_PlayerStatus_ContextMenu_C_OnMenuStart__DelegateSignature_Params params;
	params.FirstFocusableButton = FirstFocusableButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnReadyNavigation__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWBP_PlayerStatus_ContextMenuOption_C*> StatusButtons                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_PlayerStatus_ContextMenu_C::OnReadyNavigation__DelegateSignature(TArray<class UWBP_PlayerStatus_ContextMenuOption_C*>* StatusButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnReadyNavigation__DelegateSignature");

	UWBP_PlayerStatus_ContextMenu_C_OnReadyNavigation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatusButtons != nullptr)
		*StatusButtons = params.StatusButtons;
}


// Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerStatus_ContextMenu_C::OnMenuHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerStatus_ContextMenu.WBP_PlayerStatus_ContextMenu_C.OnMenuHidden__DelegateSignature");

	UWBP_PlayerStatus_ContextMenu_C_OnMenuHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
