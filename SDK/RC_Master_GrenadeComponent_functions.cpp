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

// Function Master_GrenadeComponent.Master_GrenadeComponent_C.ShowGadget
// (Native, Public, BlueprintCallable)

void UMaster_GrenadeComponent_C::ShowGadget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_GrenadeComponent.Master_GrenadeComponent_C.ShowGadget");

	UMaster_GrenadeComponent_C_ShowGadget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_GrenadeComponent.Master_GrenadeComponent_C.HideGadget
// (Native, Public, BlueprintCallable)

void UMaster_GrenadeComponent_C::HideGadget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_GrenadeComponent.Master_GrenadeComponent_C.HideGadget");

	UMaster_GrenadeComponent_C_HideGadget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Master_GrenadeComponent.Master_GrenadeComponent_C.Get Scaled Grenade Fire Playrate
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAnimMontage**           bpp__AnimxMontage__pfT         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__NewParam__pf              (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__ScaledxPlayrate__pfT      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMaster_GrenadeComponent_C::Get_Scaled_Grenade_Fire_Playrate(class UAnimMontage** bpp__AnimxMontage__pfT, float* bpp__NewParam__pf, float* bpp__ScaledxPlayrate__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_GrenadeComponent.Master_GrenadeComponent_C.Get Scaled Grenade Fire Playrate");

	UMaster_GrenadeComponent_C_Get_Scaled_Grenade_Fire_Playrate_Params params;
	params.bpp__AnimxMontage__pfT = bpp__AnimxMontage__pfT;
	params.bpp__NewParam__pf = bpp__NewParam__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__ScaledxPlayrate__pfT != nullptr)
		*bpp__ScaledxPlayrate__pfT = params.bpp__ScaledxPlayrate__pfT;
}


// Function Master_GrenadeComponent.Master_GrenadeComponent_C.ExecuteUbergraph_Master_GrenadeComponent_1
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMaster_GrenadeComponent_C::ExecuteUbergraph_Master_GrenadeComponent_1(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Master_GrenadeComponent.Master_GrenadeComponent_C.ExecuteUbergraph_Master_GrenadeComponent_1");

	UMaster_GrenadeComponent_C_ExecuteUbergraph_Master_GrenadeComponent_1_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
