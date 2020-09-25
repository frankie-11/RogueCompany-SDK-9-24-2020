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

// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         KSPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::UpdatePlayerName(class AKSPlayerState** KSPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.UpdatePlayerName");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_UpdatePlayerName_Params params;
	params.KSPlayerState = KSPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PopulateSelectedJob
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::PopulateSelectedJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PopulateSelectedJob");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_PopulateSelectedJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetEnemyDirectly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetEnemyDirectly(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetEnemyDirectly");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_SetEnemyDirectly_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.HandleUIRelevantStateChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         InPlayerState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::HandleUIRelevantStateChange(class AKSPlayerState** InPlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.HandleUIRelevantStateChange");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_HandleUIRelevantStateChange_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ResetJobEntry
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::ResetJobEntry()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ResetJobEntry");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_ResetJobEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Bind to Model Viewer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           ModelIndex                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::Bind_to_Model_Viewer(int* ModelIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Bind to Model Viewer");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_Bind_to_Model_Viewer_Params params;
	params.ModelIndex = ModelIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetInitialDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetInitialDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetInitialDisplay");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_SetInitialDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetJobEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetJobEntry(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetJobEntry");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_SetJobEntry_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetPlayerOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::SetPlayerOwner(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.SetPlayerOwner");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_SetPlayerOwner_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.InitializeWidget");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.Construct");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.PreConstruct");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_ExecuteUbergraph_WBP_InGameJobSelect_TeamComp_Teammate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayPlayerNameDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString*                Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::DisplayPlayerNameDispatcher__DelegateSignature(struct FString* Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayPlayerNameDispatcher__DelegateSignature");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_DisplayPlayerNameDispatcher__DelegateSignature_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayJobInfoDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Job_Item_Id                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           Skin_Item_Id                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EJobSelectionState*            JobSelectionState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_TeamComp_Teammate_C::DisplayJobInfoDispatcher__DelegateSignature(int* Job_Item_Id, int* Skin_Item_Id, EJobSelectionState* JobSelectionState)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_TeamComp_Teammate.WBP_InGameJobSelect_TeamComp_Teammate_C.DisplayJobInfoDispatcher__DelegateSignature");

	UWBP_InGameJobSelect_TeamComp_Teammate_C_DisplayJobInfoDispatcher__DelegateSignature_Params params;
	params.Job_Item_Id = Job_Item_Id;
	params.Skin_Item_Id = Skin_Item_Id;
	params.JobSelectionState = JobSelectionState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
