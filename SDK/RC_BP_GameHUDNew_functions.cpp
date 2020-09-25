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

// Function BP_GameHUDNew.BP_GameHUDNew_C.GetFocusableWidgets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_Widget*>    FocusableWidgets               (Parm, OutParm, ZeroConstructor)

void ABP_GameHUDNew_C::GetFocusableWidgets(TArray<class UPUMG_Widget*>* FocusableWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetFocusableWidgets");

	ABP_GameHUDNew_C_GetFocusableWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FocusableWidgets != nullptr)
		*FocusableWidgets = params.FocusableWidgets;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.GetContextBarWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UKSContextBarWidget*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSContextBarWidget* ABP_GameHUDNew_C::GetContextBarWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetContextBarWidget");

	ABP_GameHUDNew_C_GetContextBarWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ToggleWatermarkDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::ToggleWatermarkDisplay(bool* Show)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ToggleWatermarkDisplay");

	ABP_GameHUDNew_C_ToggleWatermarkDisplay_Params params;
	params.Show = Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.GetAsyncWidgetsForString
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class UUserWidget*>     UserWidgets                    (Parm, OutParm, ZeroConstructor)

void ABP_GameHUDNew_C::GetAsyncWidgetsForString(struct FString* String, TArray<class UUserWidget*>* UserWidgets)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetAsyncWidgetsForString");

	ABP_GameHUDNew_C_GetAsyncWidgetsForString_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UserWidgets != nullptr)
		*UserWidgets = params.UserWidgets;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.SetupJobSelectionManager
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::SetupJobSelectionManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.SetupJobSelectionManager");

	ABP_GameHUDNew_C_SetupJobSelectionManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.GetPopupManager
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PopupManager*      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPUMG_PopupManager* ABP_GameHUDNew_C::GetPopupManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.GetPopupManager");

	ABP_GameHUDNew_C_GetPopupManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.EvaluateFocus
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::EvaluateFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.EvaluateFocus");

	ABP_GameHUDNew_C_EvaluateFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD(class UClass** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD");

	ABP_GameHUDNew_C_OnLoaded_9A584D3E423F982EA7A073A29FBFC2FD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GameHUDNew_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ReceiveBeginPlay");

	ABP_GameHUDNew_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.SetUIFocus
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::SetUIFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.SetUIFocus");

	ABP_GameHUDNew_C_SetUIFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.HandleReturnToHomeClick
// (BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::HandleReturnToHomeClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.HandleReturnToHomeClick");

	ABP_GameHUDNew_C_HandleReturnToHomeClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnShowHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::OnShowHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnShowHUD");

	ABP_GameHUDNew_C_OnShowHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnHideHUD
// (BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::OnHideHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnHideHUD");

	ABP_GameHUDNew_C_OnHideHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.Spawn Tutorial Widget
// (BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::Spawn_Tutorial_Widget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.Spawn Tutorial Widget");

	ABP_GameHUDNew_C_Spawn_Tutorial_Widget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleHUD
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GameHUDNew_C::OnToggleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleHUD");

	ABP_GameHUDNew_C_OnToggleHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleTopBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::OnToggleTopBar(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnToggleTopBar");

	ABP_GameHUDNew_C_OnToggleTopBar_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.SetHUDVisible
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bVisible                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::SetHUDVisible(bool* bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.SetHUDVisible");

	ABP_GameHUDNew_C_SetHUDVisible_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.CreateGameRuleWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSWidgetInfoParams*    WidgetInfoParams               (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_GameHUDNew_C::CreateGameRuleWidget(struct FKSWidgetInfoParams* WidgetInfoParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.CreateGameRuleWidget");

	ABP_GameHUDNew_C_CreateGameRuleWidget_Params params;
	params.WidgetInfoParams = WidgetInfoParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.BroadcastWidgetMessage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::BroadcastWidgetMessage(struct FName* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.BroadcastWidgetMessage");

	ABP_GameHUDNew_C_BroadcastWidgetMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.BindEventToWidgetMessages
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate*        Callback                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABP_GameHUDNew_C::BindEventToWidgetMessages(struct FScriptDelegate* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.BindEventToWidgetMessages");

	ABP_GameHUDNew_C_BindEventToWidgetMessages_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOnPhaseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhaseName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::HandleOnPhaseChanged(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOnPhaseChanged");

	ABP_GameHUDNew_C_HandleOnPhaseChanged_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOpenTextChat
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::HandleOpenTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.HandleOpenTextChat");

	ABP_GameHUDNew_C_HandleOpenTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.DisplayWatermark
// (Event, Protected, BlueprintEvent)

void ABP_GameHUDNew_C::DisplayWatermark()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.DisplayWatermark");

	ABP_GameHUDNew_C_DisplayWatermark_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnAsyncWidgetInfoLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 LoadedClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString*                ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AKSWidgetInfoActor**     WidgetInfoActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::OnAsyncWidgetInfoLoaded(class UClass** LoadedClass, struct FString* ParentWidget, class AKSWidgetInfoActor** WidgetInfoActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnAsyncWidgetInfoLoaded");

	ABP_GameHUDNew_C_OnAsyncWidgetInfoLoaded_Params params;
	params.LoadedClass = LoadedClass;
	params.ParentWidget = ParentWidget;
	params.WidgetInfoActor = WidgetInfoActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OpenTextChatToPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OpenTextChatToPlayer");

	ABP_GameHUDNew_C_OpenTextChatToPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ApplySafeFrameScale
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         SafeFrameScale                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::ApplySafeFrameScale(float* SafeFrameScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ApplySafeFrameScale");

	ABP_GameHUDNew_C_ApplySafeFrameScale_Params params;
	params.SafeFrameScale = SafeFrameScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.WalkinAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWalkinCinematicCharacter_C** Player01                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWalkinCinematicCharacter_C** Player02                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWalkinCinematicCharacter_C** Player03                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AWalkinCinematicCharacter_C** Player04                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::WalkinAnim(class AWalkinCinematicCharacter_C** Player01, class AWalkinCinematicCharacter_C** Player02, class AWalkinCinematicCharacter_C** Player03, class AWalkinCinematicCharacter_C** Player04)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.WalkinAnim");

	ABP_GameHUDNew_C_WalkinAnim_Params params;
	params.Player01 = Player01;
	params.Player02 = Player02;
	params.Player03 = Player03;
	params.Player04 = Player04;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.ExecuteUbergraph_BP_GameHUDNew
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::ExecuteUbergraph_BP_GameHUDNew(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.ExecuteUbergraph_BP_GameHUDNew");

	ABP_GameHUDNew_C_ExecuteUbergraph_BP_GameHUDNew_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnRuleWidgetCreated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget**            UserWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString*                Placement                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ABP_GameHUDNew_C::OnRuleWidgetCreated__DelegateSignature(class UUserWidget** UserWidget, struct FString* Placement)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnRuleWidgetCreated__DelegateSignature");

	ABP_GameHUDNew_C_OnRuleWidgetCreated__DelegateSignature_Params params;
	params.UserWidget = UserWidget;
	params.Placement = Placement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.HUDMessage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::HUDMessage__DelegateSignature(struct FName* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.HUDMessage__DelegateSignature");

	ABP_GameHUDNew_C_HUDMessage__DelegateSignature_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GameHUDNew.BP_GameHUDNew_C.OnSwimmingChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsSwimming                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_GameHUDNew_C::OnSwimmingChanged__DelegateSignature(bool* IsSwimming)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GameHUDNew.BP_GameHUDNew_C.OnSwimmingChanged__DelegateSignature");

	ABP_GameHUDNew_C_OnSwimmingChanged__DelegateSignature_Params params;
	params.IsSwimming = IsSwimming;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
