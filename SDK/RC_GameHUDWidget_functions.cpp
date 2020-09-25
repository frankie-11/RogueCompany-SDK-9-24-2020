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

// Function GameHUDWidget.GameHUDWidget_C.ShouldVoteBlockMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ShouldBlock                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::ShouldVoteBlockMenu(bool* ShouldBlock)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ShouldVoteBlockMenu");

	UGameHUDWidget_C_ShouldVoteBlockMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldBlock != nullptr)
		*ShouldBlock = params.ShouldBlock;
}


// Function GameHUDWidget.GameHUDWidget_C.FlushVoteInput
// (Public, BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::FlushVoteInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.FlushVoteInput");

	UGameHUDWidget_C_FlushVoteInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.ReleasePlayerInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInputReleaseType*             ReleaseType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::ReleasePlayerInputs(EInputReleaseType* ReleaseType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ReleasePlayerInputs");

	UGameHUDWidget_C_ReleasePlayerInputs_Params params;
	params.ReleaseType = ReleaseType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.GetFocusableWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    OutWIdgets                     (Parm, OutParm, ZeroConstructor)

void UGameHUDWidget_C::GetFocusableWidgets(TArray<class UPUMG_Widget*>* OutWIdgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.GetFocusableWidgets");

	UGameHUDWidget_C_GetFocusableWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutWIdgets != nullptr)
		*OutWIdgets = params.OutWIdgets;
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeHUDContent
// (Public, BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::InitializeHUDContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeHUDContent");

	UGameHUDWidget_C_InitializeHUDContent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.SetSafeFrame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::SetSafeFrame(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.SetSafeFrame");

	UGameHUDWidget_C_SetSafeFrame_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.Add Game Rule Widget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            Game_Rule_Widget               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString*                Parent_Widget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UGameHUDWidget_C::Add_Game_Rule_Widget(class UUserWidget** Game_Rule_Widget, struct FString* Parent_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Add Game Rule Widget");

	UGameHUDWidget_C_Add_Game_Rule_Widget_Params params;
	params.Game_Rule_Widget = Game_Rule_Widget;
	params.Parent_Widget = Parent_Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeKillCam
// (Public, BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::InitializeKillCam()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeKillCam");

	UGameHUDWidget_C_InitializeKillCam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeHudWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::InitializeHudWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeHudWidgets");

	UGameHUDWidget_C_InitializeHudWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeMapWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::InitializeMapWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeMapWidgets");

	UGameHUDWidget_C_InitializeMapWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGameHUDWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Construct");

	UGameHUDWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.Map
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::Map()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Map");

	UGameHUDWidget_C_Map_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.InputListeners
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::InputListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InputListeners");

	UGameHUDWidget_C_InputListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.Menu
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Menu");

	UGameHUDWidget_C_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Tick");

	UGameHUDWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.SetListenersActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::SetListenersActive(bool* Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.SetListenersActive");

	UGameHUDWidget_C_SetListenersActive_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.HandleKillCamEnabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsEnabled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::HandleKillCamEnabled(bool* IsEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.HandleKillCamEnabled");

	UGameHUDWidget_C_HandleKillCamEnabled_Params params;
	params.IsEnabled = IsEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.ShowHUD
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::ShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ShowHUD");

	UGameHUDWidget_C_ShowHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.HideHUD
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::HideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.HideHUD");

	UGameHUDWidget_C_HideHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.ToggleTopBarHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::ToggleTopBarHUD(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ToggleTopBarHUD");

	UGameHUDWidget_C_ToggleTopBarHUD_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeJobSelectionManager
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::InitializeJobSelectionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeJobSelectionManager");

	UGameHUDWidget_C_InitializeJobSelectionManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.HandleOpenTextChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::HandleOpenTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.HandleOpenTextChat");

	UGameHUDWidget_C_HandleOpenTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.OpenTextChatToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.OpenTextChatToPlayer");

	UGameHUDWidget_C_OpenTextChatToPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.Handle Viewport Size Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint*              ViewportSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::Handle_Viewport_Size_Changed(struct FIntPoint* ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.Handle Viewport Size Changed");

	UGameHUDWidget_C_Handle_Viewport_Size_Changed_Params params;
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.InitializeWidget");

	UGameHUDWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.ToggleTabScreen
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::ToggleTabScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ToggleTabScreen");

	UGameHUDWidget_C_ToggleTabScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.DebugOnePress
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::DebugOnePress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugOnePress");

	UGameHUDWidget_C_DebugOnePress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.DebugOneRelease
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::DebugOneRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugOneRelease");

	UGameHUDWidget_C_DebugOneRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.DebugTwoPress
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::DebugTwoPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugTwoPress");

	UGameHUDWidget_C_DebugTwoPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.DebugTwoRelease
// (BlueprintCallable, BlueprintEvent)

void UGameHUDWidget_C::DebugTwoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.DebugTwoRelease");

	UGameHUDWidget_C_DebugTwoRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.OnChangedInput
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::OnChangedInput(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.OnChangedInput");

	UGameHUDWidget_C_OnChangedInput_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameHUDWidget.GameHUDWidget_C.ExecuteUbergraph_GameHUDWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGameHUDWidget_C::ExecuteUbergraph_GameHUDWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHUDWidget.GameHUDWidget_C.ExecuteUbergraph_GameHUDWidget");

	UGameHUDWidget_C_ExecuteUbergraph_GameHUDWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
