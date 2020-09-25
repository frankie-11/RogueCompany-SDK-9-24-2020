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

// Function WBP_player_level_tracker.WBP_player_level_tracker_C.TriggerLevelUpEvent
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_level_tracker_C::TriggerLevelUpEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.TriggerLevelUpEvent");

	UWBP_player_level_tracker_C_TriggerLevelUpEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXpProgressPercentageInLevel
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          PercentProgress                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            XpNumber                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_player_level_tracker_C::GetXpProgressPercentageInLevel(float* PercentProgress, int* XpNumber)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXpProgressPercentageInLevel");

	UWBP_player_level_tracker_C_GetXpProgressPercentageInLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PercentProgress != nullptr)
		*PercentProgress = params.PercentProgress;
	if (XpNumber != nullptr)
		*XpNumber = params.XpNumber;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetNewLerpTimeframe
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_player_level_tracker_C::SetNewLerpTimeframe()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetNewLerpTimeframe");

	UWBP_player_level_tracker_C_SetNewLerpTimeframe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.UpdateLevelDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_player_level_tracker_C::UpdateLevelDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.UpdateLevelDisplay");

	UWBP_player_level_tracker_C_UpdateLevelDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXPRequiredForLevel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_player_level_tracker_C::GetXPRequiredForLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetXPRequiredForLevel");

	UWBP_player_level_tracker_C_GetXPRequiredForLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetNextLevel
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_player_level_tracker_C::GetNextLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetNextLevel");

	UWBP_player_level_tracker_C_GetNextLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetCurrentLevel
// (Private, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UWBP_player_level_tracker_C::GetCurrentLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.GetCurrentLevel");

	UWBP_player_level_tracker_C_GetCurrentLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.DisplayXpAnimationState
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_player_level_tracker_C::DisplayXpAnimationState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.DisplayXpAnimationState");

	UWBP_player_level_tracker_C_DisplayXpAnimationState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.OnLevelUpAnimCompleted
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_player_level_tracker_C::OnLevelUpAnimCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.OnLevelUpAnimCompleted");

	UWBP_player_level_tracker_C_OnLevelUpAnimCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetPalette
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_player_level_tracker_C::SetPalette()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.SetPalette");

	UWBP_player_level_tracker_C_SetPalette_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.ProcessPlayerProgression
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProgression*     PlayerProgression              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_player_level_tracker_C::ProcessPlayerProgression(struct FPlayerProgression* PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.ProcessPlayerProgression");

	UWBP_player_level_tracker_C_ProcessPlayerProgression_Params params;
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_level_tracker_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.InitializeWidget");

	UWBP_player_level_tracker_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_level_tracker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.Tick");

	UWBP_player_level_tracker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.PlayProgressionAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_level_tracker_C::PlayProgressionAnim(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.PlayProgressionAnim");

	UWBP_player_level_tracker_C_PlayProgressionAnim_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_level_tracker_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.PreConstruct");

	UWBP_player_level_tracker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_player_level_tracker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.Construct");

	UWBP_player_level_tracker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_player_level_tracker.WBP_player_level_tracker_C.ExecuteUbergraph_WBP_player_level_tracker
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_player_level_tracker_C::ExecuteUbergraph_WBP_player_level_tracker(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_player_level_tracker.WBP_player_level_tracker_C.ExecuteUbergraph_WBP_player_level_tracker");

	UWBP_player_level_tracker_C_ExecuteUbergraph_WBP_player_level_tracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
