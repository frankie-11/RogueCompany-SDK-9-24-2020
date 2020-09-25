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

// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ProgressionCardSlot_C::SetInitialState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.SetInitialState");

	UWBP_ProgressionCardSlot_C_SetInitialState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ProgressionCardSlot_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.Construct");

	UWBP_ProgressionCardSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionCardSlot_C::AnimateIn(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.AnimateIn");

	UWBP_ProgressionCardSlot_C_AnimateIn_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionCardSlot_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.PreConstruct");

	UWBP_ProgressionCardSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSActivityInstance**    ActivityInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FActivityTier*          NewTier                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ProgressionCardSlot_C::CustomEvent_1(class UKSActivityInstance** ActivityInstance, struct FActivityTier* NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.CustomEvent_1");

	UWBP_ProgressionCardSlot_C_CustomEvent_1_Params params;
	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionCardSlot_C::ExecuteUbergraph_WBP_ProgressionCardSlot(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.ExecuteUbergraph_WBP_ProgressionCardSlot");

	UWBP_ProgressionCardSlot_C_ExecuteUbergraph_WBP_ProgressionCardSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           CurrencyEarned                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionCardSlot_C::StartAnimation__DelegateSignature(int* CurrencyEarned)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot.WBP_ProgressionCardSlot_C.StartAnimation__DelegateSignature");

	UWBP_ProgressionCardSlot_C_StartAnimation__DelegateSignature_Params params;
	params.CurrencyEarned = CurrencyEarned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
