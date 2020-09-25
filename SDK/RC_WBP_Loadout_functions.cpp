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

// Function WBP_Loadout.WBP_Loadout_C.OnPerkClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                PerkItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::OnPerkClicked(class UKSItem** PerkItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.OnPerkClicked");

	UWBP_Loadout_C_OnPerkClicked_Params params;
	params.PerkItem = PerkItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.OnPerkSectionClicked
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Loadout_C::OnPerkSectionClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.OnPerkSectionClicked");

	UWBP_Loadout_C_OnPerkSectionClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.OnLoadoutClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                LoadoutItem                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWBP_LoadoutButton_C**   LoadoutButton                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Loadout_C::OnLoadoutClicked(class UKSItem** LoadoutItem, class UWBP_LoadoutButton_C** LoadoutButton)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.OnLoadoutClicked");

	UWBP_Loadout_C_OnLoadoutClicked_Params params;
	params.LoadoutItem = LoadoutItem;
	params.LoadoutButton = LoadoutButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.SelectPerk
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                PerkItem                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldUpdate                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::SelectPerk(class UKSItem** PerkItem, bool* ShouldUpdate)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.SelectPerk");

	UWBP_Loadout_C_SelectPerk_Params params;
	params.PerkItem = PerkItem;
	params.ShouldUpdate = ShouldUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_Loadout_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.NavigateBack");

	UWBP_Loadout_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadout.WBP_Loadout_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UWBP_Loadout_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.OnKeyDown");

	UWBP_Loadout_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_Loadout.WBP_Loadout_C.HandleInputModeChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPGAME_INPUT_STATE>* InputMode                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::HandleInputModeChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.HandleInputModeChanged");

	UWBP_Loadout_C_HandleInputModeChanged_Params params;
	params.InputMode = InputMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateStatsPanel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Loadout_C::PopulateStatsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.PopulateStatsPanel");

	UWBP_Loadout_C_PopulateStatsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.SetCurrentIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           SelectedTier                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::SetCurrentIndex(int* SelectedTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.SetCurrentIndex");

	UWBP_Loadout_C_SetCurrentIndex_Params params;
	params.SelectedTier = SelectedTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.CreateWidgetArrays
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Loadout_C::CreateWidgetArrays()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.CreateWidgetArrays");

	UWBP_Loadout_C_CreateWidgetArrays_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.SwapToItemDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                ItemSelected                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShouldSwap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::SwapToItemDisplay(class UKSItem** ItemSelected, bool* ShouldSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.SwapToItemDisplay");

	UWBP_Loadout_C_SwapToItemDisplay_Params params;
	params.ItemSelected = ItemSelected;
	params.ShouldSwap = ShouldSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.Swap to Perk Display
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShouldSwap                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::Swap_to_Perk_Display(bool* ShouldSwap)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.Swap to Perk Display");

	UWBP_Loadout_C_Swap_to_Perk_Display_Params params;
	params.ShouldSwap = ShouldSwap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.PopulatePerkButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Loadout_C::PopulatePerkButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.PopulatePerkButtons");

	UWBP_Loadout_C_PopulatePerkButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateItemDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::PopulateItemDetails(class UKSItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.PopulateItemDetails");

	UWBP_Loadout_C_PopulateItemDetails_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateRogueDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Loadout_C::PopulateRogueDetails()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.PopulateRogueDetails");

	UWBP_Loadout_C_PopulateRogueDetails_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.PopulateLoadout
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Loadout_C::PopulateLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.PopulateLoadout");

	UWBP_Loadout_C_PopulateLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.PreConstruct");

	UWBP_Loadout_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Loadout_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.Construct");

	UWBP_Loadout_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_Loadout_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.OnShown");

	UWBP_Loadout_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.InitializeWidget");

	UWBP_Loadout_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_Loadout_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.OnBackPrompt");

	UWBP_Loadout_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_Loadout_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.InitializeWidgetNavigation");

	UWBP_Loadout_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Loadout.WBP_Loadout_C.ExecuteUbergraph_WBP_Loadout
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Loadout_C::ExecuteUbergraph_WBP_Loadout(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Loadout.WBP_Loadout_C.ExecuteUbergraph_WBP_Loadout");

	UWBP_Loadout_C_ExecuteUbergraph_WBP_Loadout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
