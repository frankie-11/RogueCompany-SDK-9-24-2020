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

// Function WBP_Progression.WBP_Progression_C.OnMercLevelUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSActivityInstance**    ActivityInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FActivityTier*          NewTier                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Progression_C::OnMercLevelUp(class UKSActivityInstance** ActivityInstance, struct FActivityTier* NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.OnMercLevelUp");

	UWBP_Progression_C_OnMercLevelUp_Params params;
	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.ResetVisualState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Progression_C::ResetVisualState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.ResetVisualState");

	UWBP_Progression_C_ResetVisualState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProgression*     PlayerProgression              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Progression_C::HandleRogueMasteryProgression(struct FPlayerProgression* PlayerProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleRogueMasteryProgression");

	UWBP_Progression_C_HandleRogueMasteryProgression_Params params;
	params.PlayerProgression = PlayerProgression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.HandleReputationProgression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Progression_C::HandleReputationProgression(int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandleReputationProgression");

	UWBP_Progression_C_HandleReputationProgression_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.HandlePlayerProgression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProgression*     Progression                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Progression_C::HandlePlayerProgression(struct FPlayerProgression* Progression)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.HandlePlayerProgression");

	UWBP_Progression_C_HandlePlayerProgression_Params params;
	params.Progression = Progression;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Progression_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.Construct");

	UWBP_Progression_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.StartAnimation
// (BlueprintCallable, BlueprintEvent)

void UWBP_Progression_C::StartAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.StartAnimation");

	UWBP_Progression_C_StartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Progression_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.PreConstruct");

	UWBP_Progression_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Progression_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.InitializeWidget");

	UWBP_Progression_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.IncrementDelay
// (BlueprintCallable, BlueprintEvent)

void UWBP_Progression_C::IncrementDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.IncrementDelay");

	UWBP_Progression_C_IncrementDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Progression_C::ExecuteUbergraph_WBP_Progression(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Progression.WBP_Progression_C.ExecuteUbergraph_WBP_Progression");

	UWBP_Progression_C_ExecuteUbergraph_WBP_Progression_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
