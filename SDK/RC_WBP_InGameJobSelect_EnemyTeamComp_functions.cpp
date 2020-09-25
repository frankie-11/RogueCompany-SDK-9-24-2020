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

// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ClearJobEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::ClearJobEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ClearJobEntries");

	UWBP_InGameJobSelect_EnemyTeamComp_C_ClearJobEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnTeamsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           AddedTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnTeamsUpdated(class AKSTeamState** AddedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnTeamsUpdated");

	UWBP_InGameJobSelect_EnemyTeamComp_C_OnTeamsUpdated_Params params;
	params.AddedTeam = AddedTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamMemberAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         NewMember                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnEnemyTeamMemberAdded(class AKSPlayerState** NewMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamMemberAdded");

	UWBP_InGameJobSelect_EnemyTeamComp_C_OnEnemyTeamMemberAdded_Params params;
	params.NewMember = NewMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamAdded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSTeamState**           AddedTeam                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnEnemyTeamAdded(class AKSTeamState** AddedTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnEnemyTeamAdded");

	UWBP_InGameJobSelect_EnemyTeamComp_C_OnEnemyTeamAdded_Params params;
	params.AddedTeam = AddedTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ResetJobEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::ResetJobEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ResetJobEntries");

	UWBP_InGameJobSelect_EnemyTeamComp_C_ResetJobEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.SetInitialView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::SetInitialView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.SetInitialView");

	UWBP_InGameJobSelect_EnemyTeamComp_C_SetInitialView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnJobEntryUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobSelectionEntry              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnJobEntryUpdated(class UJobSelectionEntryDetails** JobSelectionEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnJobEntryUpdated");

	UWBP_InGameJobSelect_EnemyTeamComp_C_OnJobEntryUpdated_Params params;
	params.JobSelectionEntry = JobSelectionEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnPlayerStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateChanged");

	UWBP_InGameJobSelect_EnemyTeamComp_C_OnPlayerStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.PreConstruct");

	UWBP_InGameJobSelect_EnemyTeamComp_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_EnemyTeamComp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.Construct");

	UWBP_InGameJobSelect_EnemyTeamComp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.InitializeWidget");

	UWBP_InGameJobSelect_EnemyTeamComp_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::OnPlayerStateUpdate(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.OnPlayerStateUpdate");

	UWBP_InGameJobSelect_EnemyTeamComp_C_OnPlayerStateUpdate_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_EnemyTeamComp_C::ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_EnemyTeamComp.WBP_InGameJobSelect_EnemyTeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp");

	UWBP_InGameJobSelect_EnemyTeamComp_C_ExecuteUbergraph_WBP_InGameJobSelect_EnemyTeamComp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
