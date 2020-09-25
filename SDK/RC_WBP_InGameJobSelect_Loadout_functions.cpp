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

// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerkButtons
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_InGameJobSelect_Loadout_Perk_C*> PerkButtons                    (Parm, OutParm, ZeroConstructor)

void UWBP_InGameJobSelect_Loadout_C::GetLoadoutPerkButtons(TArray<class UWBP_InGameJobSelect_Loadout_Perk_C*>* PerkButtons)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerkButtons");

	UWBP_InGameJobSelect_Loadout_C_GetLoadoutPerkButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PerkButtons != nullptr)
		*PerkButtons = params.PerkButtons;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerks
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UKSItem*>         Perks                          (Parm, OutParm, ZeroConstructor)

void UWBP_InGameJobSelect_Loadout_C::GetLoadoutPerks(TArray<class UKSItem*>* Perks)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetLoadoutPerks");

	UWBP_InGameJobSelect_Loadout_C_GetLoadoutPerks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Perks != nullptr)
		*Perks = params.Perks;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetCurrentJobLoadoutSlotItemInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EJobLoadoutSlot*               JobSlot                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DisplayName                    (Parm, OutParm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UKSItem*                 OutKSItem                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_C::GetCurrentJobLoadoutSlotItemInfo(EJobLoadoutSlot* JobSlot, struct FString* DisplayName, bool* IsValid, class UKSItem** OutKSItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.GetCurrentJobLoadoutSlotItemInfo");

	UWBP_InGameJobSelect_Loadout_C_GetCurrentJobLoadoutSlotItemInfo_Params params;
	params.JobSlot = JobSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DisplayName != nullptr)
		*DisplayName = params.DisplayName;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutKSItem != nullptr)
		*OutKSItem = params.OutKSItem;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeLoadoutButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::InitializeLoadoutButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeLoadoutButtons");

	UWBP_InGameJobSelect_Loadout_C_InitializeLoadoutButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateLoadoutInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::PopulateLoadoutInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateLoadoutInfo");

	UWBP_InGameJobSelect_Loadout_C_PopulateLoadoutInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::PopulateJobInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobInfo");

	UWBP_InGameJobSelect_Loadout_C_PopulateJobInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobLoadout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJobSelectionEntryDetails** JobEntry                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_C::PopulateJobLoadout(class UJobSelectionEntryDetails** JobEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PopulateJobLoadout");

	UWBP_InGameJobSelect_Loadout_C_PopulateJobLoadout_Params params;
	params.JobEntry = JobEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnLoaded_0479943548EBDC9F20CA8D8C126D74BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_C::OnLoaded_0479943548EBDC9F20CA8D8C126D74BE(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnLoaded_0479943548EBDC9F20CA8D8C126D74BE");

	UWBP_InGameJobSelect_Loadout_C_OnLoaded_0479943548EBDC9F20CA8D8C126D74BE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.InitializeWidget");

	UWBP_InGameJobSelect_Loadout_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnShown");

	UWBP_InGameJobSelect_Loadout_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnHide
// (Event, Public, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnHide()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnHide");

	UWBP_InGameJobSelect_Loadout_C_OnHide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.LoadAndPopulateFirstPassive
// (BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::LoadAndPopulateFirstPassive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.LoadAndPopulateFirstPassive");

	UWBP_InGameJobSelect_Loadout_C_LoadAndPopulateFirstPassive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.PreConstruct");

	UWBP_InGameJobSelect_Loadout_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UWBP_InGameJobSelect_Loadout_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_InGameJobSelect_Loadout_C::ExecuteUbergraph_WBP_InGameJobSelect_Loadout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.ExecuteUbergraph_WBP_InGameJobSelect_Loadout");

	UWBP_InGameJobSelect_Loadout_C_ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnNavBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnNavBack__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnNavBack__DelegateSignature");

	UWBP_InGameJobSelect_Loadout_C_OnNavBack__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnJobLockInClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_InGameJobSelect_Loadout_C::OnJobLockInClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C.OnJobLockInClicked__DelegateSignature");

	UWBP_InGameJobSelect_Loadout_C_OnJobLockInClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
