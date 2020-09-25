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

// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PlayerAwardsScreen_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.NavigateBack");

	UWBP_PlayerAwardsScreen_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::GoBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.GoBack");

	UWBP_PlayerAwardsScreen_C_GoBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::RegisterScrollingInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.RegisterScrollingInput");

	UWBP_PlayerAwardsScreen_C_RegisterScrollingInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAwardsScreen_C::TickScrolling(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.TickScrolling");

	UWBP_PlayerAwardsScreen_C_TickScrolling_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::ScrollReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollReleased");

	UWBP_PlayerAwardsScreen_C_ScrollReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::ScrollDownPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollDownPressed");

	UWBP_PlayerAwardsScreen_C_ScrollDownPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::ScrollUpPressed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ScrollUpPressed");

	UWBP_PlayerAwardsScreen_C_ScrollUpPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget**                LHS                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UWidget**                RHS                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UWBP_PlayerAwardsScreen_C::CompareChildren(class UWidget** LHS, class UWidget** RHS)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.CompareChildren");

	UWBP_PlayerAwardsScreen_C_CompareChildren_Params params;
	params.LHS = LHS;
	params.RHS = RHS;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Construct");

	UWBP_PlayerAwardsScreen_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAwardsScreen_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.Tick");

	UWBP_PlayerAwardsScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown
// (Event, Public, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnShown");

	UWBP_PlayerAwardsScreen_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetButtonListeners");

	UWBP_PlayerAwardsScreen_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAwardsScreen_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidget");

	UWBP_PlayerAwardsScreen_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.InitializeWidgetNavigation");

	UWBP_PlayerAwardsScreen_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerAwardsScreen_C::OnBackPrompt()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.OnBackPrompt");

	UWBP_PlayerAwardsScreen_C_OnBackPrompt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerAwardsScreen_C::ExecuteUbergraph_WBP_PlayerAwardsScreen(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerAwardsScreen.WBP_PlayerAwardsScreen_C.ExecuteUbergraph_WBP_PlayerAwardsScreen");

	UWBP_PlayerAwardsScreen_C_ExecuteUbergraph_WBP_PlayerAwardsScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
