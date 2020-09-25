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

// Function PickupNotify.PickupNotify_C.Should Show Interaction
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::Should_Show_Interaction(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Should Show Interaction");

	UPickupNotify_C_Should_Show_Interaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function PickupNotify.PickupNotify_C.IsBombDropInteraction
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 Interactable                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::IsBombDropInteraction(class AActor** Interactable, bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.IsBombDropInteraction");

	UPickupNotify_C_IsBombDropInteraction_Params params;
	params.Interactable = Interactable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function PickupNotify.PickupNotify_C.BindInteractAction
// (Public, BlueprintCallable, BlueprintEvent)

void UPickupNotify_C::BindInteractAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.BindInteractAction");

	UPickupNotify_C_BindInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.UnBindInteractAction
// (Public, BlueprintCallable, BlueprintEvent)

void UPickupNotify_C::UnBindInteractAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.UnBindInteractAction");

	UPickupNotify_C_UnBindInteractAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.SetItemIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::SetItemIcon(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.SetItemIcon");

	UPickupNotify_C_SetItemIcon_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.DisplayTimeRemaining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::DisplayTimeRemaining(float* Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.DisplayTimeRemaining");

	UPickupNotify_C_DisplayTimeRemaining_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.OnSkydiveEarlyOutChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          CanRemove                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::OnSkydiveEarlyOutChanged(bool* CanRemove)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.OnSkydiveEarlyOutChanged");

	UPickupNotify_C_OnSkydiveEarlyOutChanged_Params params;
	params.CanRemove = CanRemove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.Bind_PostButtonText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPickupNotify_C::Bind_PostButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Bind_PostButtonText");

	UPickupNotify_C_Bind_PostButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.GetSplitPrompt
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 PreSplit                       (Parm, OutParm, ZeroConstructor)
// struct FString                 PostSplit                      (Parm, OutParm, ZeroConstructor)

void UPickupNotify_C::GetSplitPrompt(struct FString* PreSplit, struct FString* PostSplit)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.GetSplitPrompt");

	UPickupNotify_C_GetSplitPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreSplit != nullptr)
		*PreSplit = params.PreSplit;
	if (PostSplit != nullptr)
		*PostSplit = params.PostSplit;
}


// Function PickupNotify.PickupNotify_C.Bind_PreButtonText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPickupNotify_C::Bind_PreButtonText()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Bind_PreButtonText");

	UPickupNotify_C_Bind_PreButtonText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.Bind_RootVisibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UPickupNotify_C::Bind_RootVisibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Bind_RootVisibility");

	UPickupNotify_C_Bind_RootVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.OnHoveredInteractableChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::OnHoveredInteractableChanged(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.OnHoveredInteractableChanged");

	UPickupNotify_C_OnHoveredInteractableChanged_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.Get Pickup Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPickupNotify_C::Get_Pickup_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Get Pickup Text");

	UPickupNotify_C_Get_Pickup_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PickupNotify.PickupNotify_C.PreClearPawn
// (Event, Protected, BlueprintEvent)

void UPickupNotify_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.PreClearPawn");

	UPickupNotify_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.PostSetPawn
// (Event, Protected, BlueprintEvent)

void UPickupNotify_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.PostSetPawn");

	UPickupNotify_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.InitializeWidget");

	UPickupNotify_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.ModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::ModeChange(TEnumAsByte<EPGAME_INPUT_STATE>* InputState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.ModeChange");

	UPickupNotify_C_ModeChange_Params params;
	params.InputState = InputState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPickupNotify_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Construct");

	UPickupNotify_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.HandleKillCamChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::HandleKillCamChange(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.HandleKillCamChange");

	UPickupNotify_C_HandleKillCamChange_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.OnKeyBindSettingChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  KeyBindName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::OnKeyBindSettingChanged(struct FName* KeyBindName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.OnKeyBindSettingChanged");

	UPickupNotify_C_OnKeyBindSettingChanged_Params params;
	params.KeyBindName = KeyBindName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.StartInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::StartInteract(class AActor** Target, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.StartInteract");

	UPickupNotify_C_StartInteract_Params params;
	params.Target = Target;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.StartAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText*                  Prompt                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickupNotify_C::StartAction(float* Duration, struct FText* Prompt)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.StartAction");

	UPickupNotify_C_StartAction_Params params;
	params.Duration = Duration;
	params.Prompt = Prompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Tick");

	UPickupNotify_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.end
// (BlueprintCallable, BlueprintEvent)

void UPickupNotify_C::end()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.end");

	UPickupNotify_C_end_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.Handle Bomb State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSNeutralBombState*    BombState                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UPickupNotify_C::Handle_Bomb_State_Changed(struct FKSNeutralBombState* BombState)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.Handle Bomb State Changed");

	UPickupNotify_C_Handle_Bomb_State_Changed_Params params;
	params.BombState = BombState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupNotify.PickupNotify_C.ExecuteUbergraph_PickupNotify
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPickupNotify_C::ExecuteUbergraph_PickupNotify(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupNotify.PickupNotify_C.ExecuteUbergraph_PickupNotify");

	UPickupNotify_C_ExecuteUbergraph_PickupNotify_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
