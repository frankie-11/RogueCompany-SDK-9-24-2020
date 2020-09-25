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

// Function MinimapIcon.MinimapIcon_C.SetupEnemyPing
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::SetupEnemyPing()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupEnemyPing");

	UMinimapIcon_C_SetupEnemyPing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.SetupAlly
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::SetupAlly()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupAlly");

	UMinimapIcon_C_SetupAlly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.SetupLocalPlayer
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::SetupLocalPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupLocalPlayer");

	UMinimapIcon_C_SetupLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.SetObjectiveIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::SetObjectiveIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetObjectiveIcon");

	UMinimapIcon_C_SetObjectiveIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.AllyStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSPlayerState**         PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimapIcon_C::AllyStateChange(class AKSPlayerState** PlayerState)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.AllyStateChange");

	UMinimapIcon_C_AllyStateChange_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.ObjectiveUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSObjectiveBase**       Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimapIcon_C::ObjectiveUpdated(class AKSObjectiveBase** Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.ObjectiveUpdated");

	UMinimapIcon_C_ObjectiveUpdated_Params params;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.SetRelativeHeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EMiniMapRelativeHeight>* RelativeHeight                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimapIcon_C::SetRelativeHeight(TEnumAsByte<EMiniMapRelativeHeight>* RelativeHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetRelativeHeight");

	UMinimapIcon_C_SetRelativeHeight_Params params;
	params.RelativeHeight = RelativeHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.ResetHeightIndicators
// (BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::ResetHeightIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.ResetHeightIndicators");

	UMinimapIcon_C_ResetHeightIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.OnLootSiteStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLootSiteState*         State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimapIcon_C::OnLootSiteStateChanged(struct FLootSiteState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.OnLootSiteStateChanged");

	UMinimapIcon_C_OnLootSiteStateChanged_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.SetupObjective
// (BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::SetupObjective()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupObjective");

	UMinimapIcon_C_SetupObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.SetupLootSite
// (BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::SetupLootSite()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.SetupLootSite");

	UMinimapIcon_C_SetupLootSite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.Update
// (BlueprintCallable, BlueprintEvent)

void UMinimapIcon_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.Update");

	UMinimapIcon_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.Construct");

	UMinimapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.ExecuteUbergraph_MinimapIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimapIcon_C::ExecuteUbergraph_MinimapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.ExecuteUbergraph_MinimapIcon");

	UMinimapIcon_C_ExecuteUbergraph_MinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapIcon.MinimapIcon_C.PingExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMinimapIcon_C::PingExpired__DelegateSignature(int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapIcon.MinimapIcon_C.PingExpired__DelegateSignature");

	UMinimapIcon_C_PingExpired__DelegateSignature_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
