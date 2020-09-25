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

// Function ResultScreen.ResultScreen_C.ResetAndHandleEndOfMatch
// (Public, BlueprintCallable, BlueprintEvent)

void UResultScreen_C::ResetAndHandleEndOfMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ResetAndHandleEndOfMatch");

	UResultScreen_C_ResetAndHandleEndOfMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.SetColors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundResultAnnoucement* RoundResult                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UResultScreen_C::SetColors(struct FRoundResultAnnoucement* RoundResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.SetColors");

	UResultScreen_C_SetColors_Params params;
	params.RoundResult = RoundResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ResetAnims
// (Public, BlueprintCallable, BlueprintEvent)

void UResultScreen_C::ResetAnims()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ResetAnims");

	UResultScreen_C_ResetAnims_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.OnRoundCycle
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRoundInitState*        RoundInitState                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UResultScreen_C::OnRoundCycle(struct FRoundInitState* RoundInitState)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.OnRoundCycle");

	UResultScreen_C_OnRoundCycle_Params params;
	params.RoundInitState = RoundInitState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ShowScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DelayAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultScreen_C::ShowScreen(float* DelayAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ShowScreen");

	UResultScreen_C_ShowScreen_Params params;
	params.DelayAmount = DelayAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.Auto Return To Lobby
// (BlueprintCallable, BlueprintEvent)

void UResultScreen_C::Auto_Return_To_Lobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.Auto Return To Lobby");

	UResultScreen_C_Auto_Return_To_Lobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UResultScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.Construct");

	UResultScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ShowKillCamHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnabled                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultScreen_C::ShowKillCamHUD(bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ShowKillCamHUD");

	UResultScreen_C_ShowKillCamHUD_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ShowScoreAnim
// (BlueprintCallable, BlueprintEvent)

void UResultScreen_C::ShowScoreAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ShowScoreAnim");

	UResultScreen_C_ShowScoreAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.FailSafeReturnToLobby
// (BlueprintCallable, BlueprintEvent)

void UResultScreen_C::FailSafeReturnToLobby()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.FailSafeReturnToLobby");

	UResultScreen_C_FailSafeReturnToLobby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.OnInitRoundSetup
// (BlueprintCallable, BlueprintEvent)

void UResultScreen_C::OnInitRoundSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.OnInitRoundSetup");

	UResultScreen_C_OnInitRoundSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.HandlePhaseChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  NewPhaseName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  PreviousPhaseName              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultScreen_C::HandlePhaseChanged(struct FName* NewPhaseName, struct FName* PreviousPhaseName)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.HandlePhaseChanged");

	UResultScreen_C_HandlePhaseChanged_Params params;
	params.NewPhaseName = NewPhaseName;
	params.PreviousPhaseName = PreviousPhaseName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.HandleRoundInfoChanged
// (BlueprintCallable, BlueprintEvent)

void UResultScreen_C::HandleRoundInfoChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.HandleRoundInfoChanged");

	UResultScreen_C_HandleRoundInfoChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.HandleResultReceived
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FRoundResultAnnoucement* ResultAnnoucement              (BlueprintVisible, BlueprintReadOnly, Parm)

void UResultScreen_C::HandleResultReceived(struct FRoundResultAnnoucement* ResultAnnoucement)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.HandleResultReceived");

	UResultScreen_C_HandleResultReceived_Params params;
	params.ResultAnnoucement = ResultAnnoucement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ShowSurrenderUI
// (BlueprintCallable, BlueprintEvent)

void UResultScreen_C::ShowSurrenderUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ShowSurrenderUI");

	UResultScreen_C_ShowSurrenderUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ExecuteUbergraph_ResultScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultScreen_C::ExecuteUbergraph_ResultScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ExecuteUbergraph_ResultScreen");

	UResultScreen_C_ExecuteUbergraph_ResultScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ToggleTopBar__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldShow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UResultScreen_C::ToggleTopBar__DelegateSignature(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ToggleTopBar__DelegateSignature");

	UResultScreen_C_ToggleTopBar__DelegateSignature_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.HideHUD__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResultScreen_C::HideHUD__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.HideHUD__DelegateSignature");

	UResultScreen_C_HideHUD__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ShowHUD__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResultScreen_C::ShowHUD__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ShowHUD__DelegateSignature");

	UResultScreen_C_ShowHUD__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ResultScreen.ResultScreen_C.ReturnToHome__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UResultScreen_C::ReturnToHome__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ResultScreen.ResultScreen_C.ReturnToHome__DelegateSignature");

	UResultScreen_C_ReturnToHome__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
