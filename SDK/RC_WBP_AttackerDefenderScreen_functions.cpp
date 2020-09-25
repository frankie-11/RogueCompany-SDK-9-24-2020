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

// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.SetRounds
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::SetRounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.SetRounds");

	UWBP_AttackerDefenderScreen_C_SetRounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ResetPreRoundScreen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::ResetPreRoundScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ResetPreRoundScreen");

	UWBP_AttackerDefenderScreen_C_ResetPreRoundScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.Get Pre Round Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   PreRoundText                   (Parm, OutParm)

void UWBP_AttackerDefenderScreen_C::Get_Pre_Round_Text(struct FText* PreRoundText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.Get Pre Round Text");

	UWBP_AttackerDefenderScreen_C_Get_Pre_Round_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PreRoundText != nullptr)
		*PreRoundText = params.PreRoundText;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.IsAttackerRole
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsAttacker                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_AttackerDefenderScreen_C::IsAttackerRole(bool* IsAttacker)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.IsAttackerRole");

	UWBP_AttackerDefenderScreen_C_IsAttackerRole_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAttacker != nullptr)
		*IsAttacker = params.IsAttacker;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandlePhaseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhaseName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AttackerDefenderScreen_C::HandlePhaseChanged(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.HandlePhaseChanged");

	UWBP_AttackerDefenderScreen_C_HandlePhaseChanged_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.PreRoundAnimComplete
// (BlueprintCallable, BlueprintEvent)

void UWBP_AttackerDefenderScreen_C::PreRoundAnimComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.PreRoundAnimComplete");

	UWBP_AttackerDefenderScreen_C_PreRoundAnimComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AttackerDefenderScreen_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.InitializeWidget");

	UWBP_AttackerDefenderScreen_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ExecuteUbergraph_WBP_AttackerDefenderScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AttackerDefenderScreen_C::ExecuteUbergraph_WBP_AttackerDefenderScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C.ExecuteUbergraph_WBP_AttackerDefenderScreen");

	UWBP_AttackerDefenderScreen_C_ExecuteUbergraph_WBP_AttackerDefenderScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
