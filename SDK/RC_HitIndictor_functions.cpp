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

// Function HitIndictor.HitIndictor_C.ReturnToPool
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHitIndicatorSub_C**     HitIndicatorSub                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UHitIndictor_C::ReturnToPool(class UHitIndicatorSub_C** HitIndicatorSub)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.ReturnToPool");

	UHitIndictor_C_ReturnToPool_Params params;
	params.HitIndicatorSub = HitIndicatorSub;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.Init Indicator Pool
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHitIndictor_C::Init_Indicator_Pool()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.Init Indicator Pool");

	UHitIndictor_C_Init_Indicator_Pool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.CreateHitIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 DamageType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DamageOrigin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          HitArmor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitIndictor_C::CreateHitIndicator(class UClass** DamageType, struct FVector* DamageOrigin, bool* HitArmor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.CreateHitIndicator");

	UHitIndictor_C_CreateHitIndicator_Params params;
	params.DamageType = DamageType;
	params.DamageOrigin = DamageOrigin;
	params.HitArmor = HitArmor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHitIndictor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.Construct");

	UHitIndictor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.On Viewed Pawn Take Damage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DamageOrigin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitIndictor_C::On_Viewed_Pawn_Take_Damage(float* DamageAmount, class UClass** DamageTypeClass, class AActor** DamageCauser, struct FVector* DamageOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.On Viewed Pawn Take Damage");

	UHitIndictor_C_On_Viewed_Pawn_Take_Damage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.DamageCauser = DamageCauser;
	params.DamageOrigin = DamageOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.HandleViewedPawnTakeArmorDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 DamageTypeClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DamageOrigin                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitIndictor_C::HandleViewedPawnTakeArmorDamage(float* DamageAmount, class UClass** DamageTypeClass, class AActor** DamageCauser, struct FVector* DamageOrigin)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.HandleViewedPawnTakeArmorDamage");

	UHitIndictor_C_HandleViewedPawnTakeArmorDamage_Params params;
	params.DamageAmount = DamageAmount;
	params.DamageTypeClass = DamageTypeClass;
	params.DamageCauser = DamageCauser;
	params.DamageOrigin = DamageOrigin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.ExecuteUbergraph_HitIndictor
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UHitIndictor_C::ExecuteUbergraph_HitIndictor(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.ExecuteUbergraph_HitIndictor");

	UHitIndictor_C_ExecuteUbergraph_HitIndictor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
