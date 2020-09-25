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

// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.GetPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AKSPlayerState*          OutPlayerState                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::GetPlayerState(class AKSPlayerState** OutPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.GetPlayerState");

	UScoreboardPlayerEntry_C_GetPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPlayerState != nullptr)
		*OutPlayerState = params.OutPlayerState;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetColors
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::SetColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetColors");

	UScoreboardPlayerEntry_C_SetColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetStatText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::SetStatText()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetStatText");

	UScoreboardPlayerEntry_C_SetStatText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::SetPlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerName");

	UScoreboardPlayerEntry_C_SetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetIconsAndIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::SetIconsAndIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetIconsAndIndicators");

	UScoreboardPlayerEntry_C_SetIconsAndIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerData
// (Public, BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::SetPlayerData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetPlayerData");

	UScoreboardPlayerEntry_C_SetPlayerData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UpdateVoiceInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsTalking                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsMuted                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::UpdateVoiceInfo(bool* IsTalking, bool* IsMuted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UpdateVoiceInfo");

	UScoreboardPlayerEntry_C_UpdateVoiceInfo_Params params;
	params.IsTalking = IsTalking;
	params.IsMuted = IsMuted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetMercIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::SetMercIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.SetMercIcon");

	UScoreboardPlayerEntry_C_SetMercIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSPersistentPlayerData** PlayerData                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::Update(class UKSPersistentPlayerData** PlayerData)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Update");

	UScoreboardPlayerEntry_C_Update_Params params;
	params.PlayerData = PlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UScoreboardPlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UScoreboardPlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UScoreboardPlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UScoreboardPlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UScoreboardPlayerEntry_C::BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UScoreboardPlayerEntry_C_BndEvt__PlayerButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoUnhoverState
// (BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::DoUnhoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoUnhoverState");

	UScoreboardPlayerEntry_C_DoUnhoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoHoverState
// (BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::DoHoverState()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.DoHoverState");

	UScoreboardPlayerEntry_C_DoHoverState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.InitializeWidget");

	UScoreboardPlayerEntry_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnShown
// (Event, Public, BlueprintEvent)

void UScoreboardPlayerEntry_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnShown");

	UScoreboardPlayerEntry_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnNeedUpdatePlayerUI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::OnNeedUpdatePlayerUI(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnNeedUpdatePlayerUI");

	UScoreboardPlayerEntry_C_OnNeedUpdatePlayerUI_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UninitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::UninitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.UninitializeWidget");

	UScoreboardPlayerEntry_C_UninitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.Tick");

	UScoreboardPlayerEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ScheduleUpdate
// (BlueprintCallable, BlueprintEvent)

void UScoreboardPlayerEntry_C::ScheduleUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ScheduleUpdate");

	UScoreboardPlayerEntry_C_ScheduleUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ExecuteUbergraph_ScoreboardPlayerEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::ExecuteUbergraph_ScoreboardPlayerEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.ExecuteUbergraph_ScoreboardPlayerEntry");

	UScoreboardPlayerEntry_C_ExecuteUbergraph_ScoreboardPlayerEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnPlayerClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64_t*                       ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         NewPlayerState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           TeamNum                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          CanReport                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UScoreboardPlayerEntry_C::OnPlayerClicked__DelegateSignature(int64_t* ID, class AKSPlayerState** NewPlayerState, int* TeamNum, bool* CanReport)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScoreboardPlayerEntry.ScoreboardPlayerEntry_C.OnPlayerClicked__DelegateSignature");

	UScoreboardPlayerEntry_C_OnPlayerClicked__DelegateSignature_Params params;
	params.ID = ID;
	params.NewPlayerState = NewPlayerState;
	params.TeamNum = TeamNum;
	params.CanReport = CanReport;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
