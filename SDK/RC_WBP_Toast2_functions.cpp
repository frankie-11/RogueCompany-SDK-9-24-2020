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

// Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Toast2_C::DisplayItemUnlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayItemUnlock");

	UWBP_Toast2_C_DisplayItemUnlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayMercMasteryLevelUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Toast2_C::DisplayMercMasteryLevelUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayMercMasteryLevelUp");

	UWBP_Toast2_C_DisplayMercMasteryLevelUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.DisplayChallengeAchievement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Toast2_C::DisplayChallengeAchievement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.DisplayChallengeAchievement");

	UWBP_Toast2_C_DisplayChallengeAchievement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Toast2_C::OnOutroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnOutroFinished");

	UWBP_Toast2_C_OnOutroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Toast2_C::OnWaitingFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnWaitingFinished");

	UWBP_Toast2_C_OnWaitingFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Toast2_C::OnIntroFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnIntroFinished");

	UWBP_Toast2_C_OnIntroFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.SetRarityTint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           RarityBase                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor*           RarityHighlight                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Toast2_C::SetRarityTint(struct FLinearColor* RarityBase, struct FLinearColor* RarityHighlight)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.SetRarityTint");

	UWBP_Toast2_C_SetRarityTint_Params params;
	params.RarityBase = RarityBase;
	params.RarityHighlight = RarityHighlight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Toast2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.Construct");

	UWBP_Toast2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Toast2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.PreConstruct");

	UWBP_Toast2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Toast2_C::ExecuteUbergraph_WBP_Toast2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.ExecuteUbergraph_WBP_Toast2");

	UWBP_Toast2_C_ExecuteUbergraph_WBP_Toast2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_Toast2_C::FinishedOutroAnimation__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.FinishedOutroAnimation__DelegateSignature");

	UWBP_Toast2_C_FinishedOutroAnimation__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSWidget**              ToastWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_Toast2_C::OnRemoveToastNotification__DelegateSignature(class UKSWidget** ToastWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Toast2.WBP_Toast2_C.OnRemoveToastNotification__DelegateSignature");

	UWBP_Toast2_C_OnRemoveToastNotification__DelegateSignature_Params params;
	params.ToastWidget = ToastWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
