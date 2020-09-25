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

// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.RegisterScrollingInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::RegisterScrollingInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.RegisterScrollingInput");

	UWBP_RougeStatsScreen_C_RegisterScrollingInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RougeStatsScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.NavigateBack");

	UWBP_RougeStatsScreen_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GoBack");

	UWBP_RougeStatsScreen_C_GoBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.TickScrolling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RougeStatsScreen_C::TickScrolling(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.TickScrolling");

	UWBP_RougeStatsScreen_C_TickScrolling_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::ScrollReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollReleased");

	UWBP_RougeStatsScreen_C_ScrollReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollDownPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollDownPressed");

	UWBP_RougeStatsScreen_C_ScrollDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollUpPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ScrollUpPressed");

	UWBP_RougeStatsScreen_C_ScrollUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SetupTabNavigation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::SetupTabNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SetupTabNavigation");

	UWBP_RougeStatsScreen_C_SetupTabNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GetPooledStatEntry
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RogueStatsScreen_RogueEntry_C* StatEntry                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_RougeStatsScreen_C::GetPooledStatEntry(class UWBP_RogueStatsScreen_RogueEntry_C** StatEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.GetPooledStatEntry");

	UWBP_RougeStatsScreen_C_GetPooledStatEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StatEntry != nullptr)
		*StatEntry = params.StatEntry;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ReturnAllStatEntriesToPool
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::ReturnAllStatEntriesToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ReturnAllStatEntriesToPool");

	UWBP_RougeStatsScreen_C_ReturnAllStatEntriesToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                LHS                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                RHS                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_RougeStatsScreen_C::On_PnlStatEntries_SortCompareChildren_1(class UWidget** LHS, class UWidget** RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.On_PnlStatEntries_SortCompareChildren_1");

	UWBP_RougeStatsScreen_C_On_PnlStatEntries_SortCompareChildren_1_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SelectStat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSMercMasteryActivityType*    ActivityType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RougeStatsScreen_C::SelectStat(EKSMercMasteryActivityType* ActivityType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.SelectStat");

	UWBP_RougeStatsScreen_C_SelectStat_Params params;
	params.ActivityType = ActivityType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.AddStatTabs
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::AddStatTabs()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.AddStatTabs");

	UWBP_RougeStatsScreen_C_AddStatTabs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RougeStatsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Construct");

	UWBP_RougeStatsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RougeStatsScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.Tick");

	UWBP_RougeStatsScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RougeStatsScreen_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidget");

	UWBP_RougeStatsScreen_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature
// (BlueprintEvent)

void UWBP_RougeStatsScreen_C::BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature");

	UWBP_RougeStatsScreen_C_BndEvt__KeyboardBackButton_K2Node_ComponentBoundEvent_2_OnBackButtonClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_RougeStatsScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetNavigation");

	UWBP_RougeStatsScreen_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UWBP_RougeStatsScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.InitializeWidgetButtonListeners");

	UWBP_RougeStatsScreen_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_RougeStatsScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnShown");

	UWBP_RougeStatsScreen_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_RougeStatsScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.OnBackPrompt");

	UWBP_RougeStatsScreen_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ExecuteUbergraph_WBP_RougeStatsScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RougeStatsScreen_C::ExecuteUbergraph_WBP_RougeStatsScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RougeStatsScreen.WBP_RougeStatsScreen_C.ExecuteUbergraph_WBP_RougeStatsScreen");

	UWBP_RougeStatsScreen_C_ExecuteUbergraph_WBP_RougeStatsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
