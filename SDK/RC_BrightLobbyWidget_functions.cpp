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

// Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBrightLobbyWidget_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyUp");

	UBrightLobbyWidget_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBrightLobbyWidget_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OnKeyDown");

	UBrightLobbyWidget_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::SetErrorMessageDT()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.SetErrorMessageDT");

	UBrightLobbyWidget_C_SetErrorMessageDT_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBrightLobbyWidget_C::UninitializeSubWidgets(class UPanelWidget** Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeSubWidgets");

	UBrightLobbyWidget_C_UninitializeSubWidgets_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget**           Container                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UBrightLobbyWidget_C::InitializeSubWidgets(class UPanelWidget** Container)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeSubWidgets");

	UBrightLobbyWidget_C_InitializeSubWidgets_Params params;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::HidePersistentWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HidePersistentWidgets");

	UBrightLobbyWidget_C_HidePersistentWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleMainLobbyCameraSet
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::HandleMainLobbyCameraSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleMainLobbyCameraSet");

	UBrightLobbyWidget_C_HandleMainLobbyCameraSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandlePreMatchAnimStarted
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::HandlePreMatchAnimStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandlePreMatchAnimStarted");

	UBrightLobbyWidget_C_HandlePreMatchAnimStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UnbindLobbyAnimationHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::UnbindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UnbindLobbyAnimationHandling");

	UBrightLobbyWidget_C_UnbindLobbyAnimationHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.BindLobbyAnimationHandling
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::BindLobbyAnimationHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.BindLobbyAnimationHandling");

	UBrightLobbyWidget_C_BindLobbyAnimationHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::UninitializeKSWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeKSWidgets");

	UBrightLobbyWidget_C_UninitializeKSWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::InitializeKSWidgets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeKSWidgets");

	UBrightLobbyWidget_C_InitializeKSWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::CreateStickyWidgetData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.CreateStickyWidgetData");

	UBrightLobbyWidget_C_CreateStickyWidgetData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::Set_Safe_Frame(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.Set Safe Frame");

	UBrightLobbyWidget_C_Set_Safe_Frame_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidget");

	UBrightLobbyWidget_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.UninitializeWidget");

	UBrightLobbyWidget_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown
// (Event, Public, BlueprintEvent)

void UBrightLobbyWidget_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OnShown");

	UBrightLobbyWidget_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  LastRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EViewManagerLayer*             Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::HandleSpecialRouteCases(struct FName* CurrentRoute, struct FName* LastRoute, EViewManagerLayer* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleSpecialRouteCases");

	UBrightLobbyWidget_C_HandleSpecialRouteCases_Params params;
	params.CurrentRoute = CurrentRoute;
	params.LastRoute = LastRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.Tick");

	UBrightLobbyWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.Handle Viewport Size Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint*              ViewportSize                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::Handle_Viewport_Size_Changed(struct FIntPoint* ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.Handle Viewport Size Changed");

	UBrightLobbyWidget_C_Handle_Viewport_Size_Changed_Params params;
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          BeginChatCommand               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::HandleOpenTextChat(bool* BeginChatCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChat");

	UBrightLobbyWidget_C_HandleOpenTextChat_Params params;
	params.BeginChatCommand = BeginChatCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UBrightLobbyWidget_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.InitializeWidgetButtonListeners");

	UBrightLobbyWidget_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForCommand
// (BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::HandleOpenTextChatForCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForCommand");

	UBrightLobbyWidget_C_HandleOpenTextChatForCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForChat
// (BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::HandleOpenTextChatForChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleOpenTextChatForChat");

	UBrightLobbyWidget_C_HandleOpenTextChatForChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.OpenTextChatToPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_PlayerInfo**       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.OpenTextChatToPlayer");

	UBrightLobbyWidget_C_OpenTextChatToPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  CurrentRoute                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  NextRoute                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EViewManagerLayer*             Layer                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::HandleViewStateChangeStarted(struct FName* CurrentRoute, struct FName* NextRoute, EViewManagerLayer* Layer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.HandleViewStateChangeStarted");

	UBrightLobbyWidget_C_HandleViewStateChangeStarted_Params params;
	params.CurrentRoute = CurrentRoute;
	params.NextRoute = NextRoute;
	params.Layer = Layer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOnePress
// (BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::DebugOnePress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOnePress");

	UBrightLobbyWidget_C_DebugOnePress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOneRelease
// (BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::DebugOneRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugOneRelease");

	UBrightLobbyWidget_C_DebugOneRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoPress
// (BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::DebugTwoPress()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoPress");

	UBrightLobbyWidget_C_DebugTwoPress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoRelease
// (BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::DebugTwoRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.DebugTwoRelease");

	UBrightLobbyWidget_C_DebugTwoRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBrightLobbyWidget_C::ExecuteUbergraph_BrightLobbyWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.ExecuteUbergraph_BrightLobbyWidget");

	UBrightLobbyWidget_C_ExecuteUbergraph_BrightLobbyWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBrightLobbyWidget_C::BackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrightLobbyWidget.BrightLobbyWidget_C.BackButtonClicked__DelegateSignature");

	UBrightLobbyWidget_C_BackButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
