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

// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay
// (Native, Event, Public)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   bpp__EndPlayReason__pf         (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterHeatSourceComponent_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* bpp__EndPlayReason__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ReceiveEndPlay");

	UCharacterHeatSourceComponent_C_ReceiveEndPlay_Params params;
	params.bpp__EndPlayReason__pf = bpp__EndPlayReason__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged
// (BlueprintCosmetic, Native, Event, Public)
// Parameters:
// EModViewModeState*             bpp__NewState__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterHeatSourceComponent_C::OnThermalVisionStateChanged(EModViewModeState* bpp__NewState__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnThermalVisionStateChanged");

	UCharacterHeatSourceComponent_C_OnThermalVisionStateChanged_Params params;
	params.bpp__NewState__pf = bpp__NewState__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1
// (Native, Public, BlueprintCallable)
// Parameters:
// class UKSHeatSourceComponent** bpp__HeatSource__pf__const     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         bpp__NewTemperature__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterHeatSourceComponent_C::OnTemperatureChanged_Event_1(class UKSHeatSourceComponent** bpp__HeatSource__pf__const, float* bpp__NewTemperature__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTemperatureChanged_Event_1");

	UCharacterHeatSourceComponent_C_OnTemperatureChanged_Event_1_Params params;
	params.bpp__HeatSource__pf__const = bpp__HeatSource__pf__const;
	params.bpp__NewTemperature__pf = bpp__NewTemperature__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify
// (Native, Event, Public, BlueprintCallable)

void UCharacterHeatSourceComponent_C::OnOwnerInfoUpdateNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnOwnerInfoUpdateNotify");

	UCharacterHeatSourceComponent_C_OnOwnerInfoUpdateNotify_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterHeatSourceComponent_C::ExecuteUbergraph_CharacterHeatSourceComponent_2(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.ExecuteUbergraph_CharacterHeatSourceComponent_2");

	UCharacterHeatSourceComponent_C_ExecuteUbergraph_CharacterHeatSourceComponent_2_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__AppliedxTemp__pfT         (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterHeatSourceComponent_C::Apply_Temperature(float* bpp__AppliedxTemp__pfT)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.Apply Temperature");

	UCharacterHeatSourceComponent_C_Apply_Temperature_Params params;
	params.bpp__AppliedxTemp__pfT = bpp__AppliedxTemp__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UKSHeatSourceComponent** bpp__HeatSource__pf            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         bpp__NewTemperature__pf        (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterHeatSourceComponent_C::OnTempChanged__DelegateSignature(class UKSHeatSourceComponent** bpp__HeatSource__pf, float* bpp__NewTemperature__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction CharacterHeatSourceComponent.CharacterHeatSourceComponent_C.OnTempChanged__DelegateSignature");

	UCharacterHeatSourceComponent_C_OnTempChanged__DelegateSignature_Params params;
	params.bpp__HeatSource__pf = bpp__HeatSource__pf;
	params.bpp__NewTemperature__pf = bpp__NewTemperature__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
