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

// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
// (Final, Native, Static, Private, HasOutParms, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FAnimationBudgetAllocatorParameters* InParameters                   (ConstParm, Parm, OutParm, ReferenceParm)

void UAnimationBudgetBlueprintLibrary::STATIC_SetAnimationBudgetParameters(class UObject** WorldContextObject, struct FAnimationBudgetAllocatorParameters* InParameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters");

	UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InParameters = InParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UObject**                WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEnabled                       (Parm, ZeroConstructor, IsPlainOldData)

void UAnimationBudgetBlueprintLibrary::STATIC_EnableAnimationBudget(class UObject** WorldContextObject, bool* bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget");

	UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bInAutoRegisterWithBudgetAllocator (Parm, ZeroConstructor, IsPlainOldData)

void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool* bInAutoRegisterWithBudgetAllocator)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator");

	USkeletalMeshComponentBudgeted_SetAutoRegisterWithBudgetAllocator_Params params;
	params.bInAutoRegisterWithBudgetAllocator = bInAutoRegisterWithBudgetAllocator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
