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

// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.AnimGraph
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink               AnimGraph                      (Parm, OutParm)

void UABP_GAD_ZiplineDevice_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.AnimGraph");

	UABP_GAD_ZiplineDevice_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;
}


// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_GAD_ZiplineDevice_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.BlueprintUpdateAnimation");

	UABP_GAD_ZiplineDevice_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.ExecuteUbergraph_ABP_GAD_ZiplineDevice
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UABP_GAD_ZiplineDevice_C::ExecuteUbergraph_ABP_GAD_ZiplineDevice(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C.ExecuteUbergraph_ABP_GAD_ZiplineDevice");

	UABP_GAD_ZiplineDevice_C_ExecuteUbergraph_ABP_GAD_ZiplineDevice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
