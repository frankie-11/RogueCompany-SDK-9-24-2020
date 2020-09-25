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

// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ResetJobEntries
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::ResetJobEntries()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ResetJobEntries");

	UWBP_InGameJobSelect_TeamComp_C_ResetJobEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.TeamMembersUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         NewMember                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::TeamMembersUpdated(class AKSPlayerState** NewMember)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.TeamMembersUpdated");

	UWBP_InGameJobSelect_TeamComp_C_TeamMembersUpdated_Params params;
	params.NewMember = NewMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetupTeamDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::SetupTeamDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetupTeamDisplay");

	UWBP_InGameJobSelect_TeamComp_C_SetupTeamDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetInitialView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::SetInitialView()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.SetInitialView");

	UWBP_InGameJobSelect_TeamComp_C_SetInitialView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnJobEntryUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobSelectionEntry              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::OnJobEntryUpdated(class UJobSelectionEntryDetails** JobSelectionEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnJobEntryUpdated");

	UWBP_InGameJobSelect_TeamComp_C_OnJobEntryUpdated_Params params;
	params.JobSelectionEntry = JobSelectionEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::OnPlayerStateChanged(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateChanged");

	UWBP_InGameJobSelect_TeamComp_C_OnPlayerStateChanged_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnTeamChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::OnTeamChanged(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnTeamChanged");

	UWBP_InGameJobSelect_TeamComp_C_OnTeamChanged_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.PreConstruct");

	UWBP_InGameJobSelect_TeamComp_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.Construct");

	UWBP_InGameJobSelect_TeamComp_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.InitializeWidget");

	UWBP_InGameJobSelect_TeamComp_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::OnPlayerStateUpdate(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.OnPlayerStateUpdate");

	UWBP_InGameJobSelect_TeamComp_C_OnPlayerStateUpdate_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_C::ExecuteUbergraph_WBP_InGameJobSelect_TeamComp(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp.WBP_InGameJobSelect_TeamComp_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp");

	UWBP_InGameJobSelect_TeamComp_C_ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
