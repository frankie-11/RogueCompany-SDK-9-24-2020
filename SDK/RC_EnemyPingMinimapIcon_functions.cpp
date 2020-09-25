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

// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.GetWorldPosition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector UEnemyPingMinimapIcon_C::GetWorldPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.GetWorldPosition");

	UEnemyPingMinimapIcon_C_GetWorldPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEnemyPingMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Construct");

	UEnemyPingMinimapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Re Ping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKSClientShotInfo*      ShotInfo                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UEnemyPingMinimapIcon_C::Re_Ping(struct FKSClientShotInfo* ShotInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.Re Ping");

	UEnemyPingMinimapIcon_C_Re_Ping_Params params;
	params.ShotInfo = ShotInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.UpdateMeetsHeightThreshold
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHeight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDepth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEnemyPingMinimapIcon_C::UpdateMeetsHeightThreshold(bool* bHeight, bool* bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.UpdateMeetsHeightThreshold");

	UEnemyPingMinimapIcon_C_UpdateMeetsHeightThreshold_Params params;
	params.bHeight = bHeight;
	params.bDepth = bDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.ExecuteUbergraph_EnemyPingMinimapIcon
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEnemyPingMinimapIcon_C::ExecuteUbergraph_EnemyPingMinimapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.ExecuteUbergraph_EnemyPingMinimapIcon");

	UEnemyPingMinimapIcon_C_ExecuteUbergraph_EnemyPingMinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.PingExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 Icon_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEnemyPingMinimapIcon_C::PingExpired__DelegateSignature(unsigned char* Icon_Type, int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function EnemyPingMinimapIcon.EnemyPingMinimapIcon_C.PingExpired__DelegateSignature");

	UEnemyPingMinimapIcon_C_PingExpired__DelegateSignature_Params params;
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
