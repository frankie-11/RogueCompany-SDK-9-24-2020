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

// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerProgression*     PlayerProgress                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::ProcessPlayerProgression(struct FPlayerProgression* PlayerProgress)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ProcessPlayerProgression");

	UWBP_ProgressionCardSlot_MercMasteryXP_C_ProcessPlayerProgression_Params params;
	params.PlayerProgress = PlayerProgress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.Construct");

	UWBP_ProgressionCardSlot_MercMasteryXP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           NewLevel                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::CustomEvent_1(int* NewLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.CustomEvent_1");

	UWBP_ProgressionCardSlot_MercMasteryXP_C_CustomEvent_1_Params params;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP");

	UWBP_ProgressionCardSlot_MercMasteryXP_C_ExecuteUbergraph_WBP_ProgressionCardSlot_MercMasteryXP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSActivityInstance**    ActivityInstance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FActivityTier*          NewTier                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ProgressionCardSlot_MercMasteryXP_C::OnMercLevelUp__DelegateSignature(class UKSActivityInstance** ActivityInstance, struct FActivityTier* NewTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressionCardSlot_MercMasteryXP.WBP_ProgressionCardSlot_MercMasteryXP_C.OnMercLevelUp__DelegateSignature");

	UWBP_ProgressionCardSlot_MercMasteryXP_C_OnMercLevelUp__DelegateSignature_Params params;
	params.ActivityInstance = ActivityInstance;
	params.NewTier = NewTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
