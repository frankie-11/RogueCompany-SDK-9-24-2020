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

// Function MasterWalkin_ABP.MasterWalkin_ABP_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UMasterWalkin_ABP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.AnimGraph");

	UMasterWalkin_ABP_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.Update Skin Dependent Variables
// (Public, BlueprintCallable, BlueprintEvent)

void UMasterWalkin_ABP_C::Update_Skin_Dependent_Variables()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.Update Skin Dependent Variables");

	UMasterWalkin_ABP_C_Update_Skin_Dependent_Variables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWalkin_ABP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintUpdateAnimation");

	UMasterWalkin_ABP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.Set Skin Parameters
// (HasOutParms, BlueprintCallable, BlueprintEvent)

void UMasterWalkin_ABP_C::Set_Skin_Parameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.Set Skin Parameters");

	UMasterWalkin_ABP_C_Set_Skin_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UMasterWalkin_ABP_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.BlueprintInitializeAnimation");

	UMasterWalkin_ABP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MasterWalkin_ABP.MasterWalkin_ABP_C.ExecuteUbergraph_MasterWalkin_ABP
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMasterWalkin_ABP_C::ExecuteUbergraph_MasterWalkin_ABP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MasterWalkin_ABP.MasterWalkin_ABP_C.ExecuteUbergraph_MasterWalkin_ABP");

	UMasterWalkin_ABP_C_ExecuteUbergraph_MasterWalkin_ABP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
