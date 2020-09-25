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

// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetWorldPosition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEnemyPingFullMapIcon_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetWorldPosition");

	UEnemyPingFullMapIcon_C_GetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetPingType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EKSPingType                    NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEnemyPingFullMapIcon_C::GetPingType(EKSPingType* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.GetPingType");

	UEnemyPingFullMapIcon_C_GetPingType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEnemyPingFullMapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Construct");

	UEnemyPingFullMapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Start Ping
// (BlueprintCallable, BlueprintEvent)

void UEnemyPingFullMapIcon_C::Start_Ping()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Start Ping");

	UEnemyPingFullMapIcon_C_Start_Ping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Re Ping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSClientShotInfo*      ShotInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UEnemyPingFullMapIcon_C::Re_Ping(struct FKSClientShotInfo* ShotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.Re Ping");

	UEnemyPingFullMapIcon_C_Re_Ping_Params params;
	params.ShotInfo = ShotInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.ExecuteUbergraph_EnemyPingFullMapIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEnemyPingFullMapIcon_C::ExecuteUbergraph_EnemyPingFullMapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.ExecuteUbergraph_EnemyPingFullMapIcon");

	UEnemyPingFullMapIcon_C_ExecuteUbergraph_EnemyPingFullMapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.PingExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Icon_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEnemyPingFullMapIcon_C::PingExpired__DelegateSignature(unsigned char* Icon_Type, int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingFullMapIcon.EnemyPingFullMapIcon_C.PingExpired__DelegateSignature");

	UEnemyPingFullMapIcon_C_PingExpired__DelegateSignature_Params params;
	params.Icon_Type = Icon_Type;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
