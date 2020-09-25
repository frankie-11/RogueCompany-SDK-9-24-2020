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

// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetRewardInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           HasReward                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   ItemName                       (Parm, OutParm)
// struct FText                   ItemDescription                (Parm, OutParm)

void UWBP_PlayerProfileScreen_AwardEntry_C::GetRewardInfo(bool* HasReward, struct FText* ItemName, struct FText* ItemDescription)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.GetRewardInfo");

	UWBP_PlayerProfileScreen_AwardEntry_C_GetRewardInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasReward != nullptr)
		*HasReward = params.HasReward;
	if (ItemName != nullptr)
		*ItemName = params.ItemName;
	if (ItemDescription != nullptr)
		*ItemDescription = params.ItemDescription;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateBar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         BarPerc                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateBar(float* BarPerc, bool* Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateBar");

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateBar_Params params;
	params.BarPerc = BarPerc;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ResetState
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::ResetState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ResetState");

	UWBP_PlayerProfileScreen_AwardEntry_C_ResetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnimInternal
// (Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::PlayShowAnimInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnimInternal");

	UWBP_PlayerProfileScreen_AwardEntry_C_PlayShowAnimInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Delay                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardEntry_C::PlayShowAnim(float* Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PlayShowAnim");

	UWBP_PlayerProfileScreen_AwardEntry_C_PlayShowAnim_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateValue");

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::UpdateIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.UpdateIcon");

	UWBP_PlayerProfileScreen_AwardEntry_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.SetActivityInstance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSActivityInstance**    Instance                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardEntry_C::SetActivityInstance(class UKSActivityInstance** Instance)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.SetActivityInstance");

	UWBP_PlayerProfileScreen_AwardEntry_C_SetActivityInstance_Params params;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.PreConstruct");

	UWBP_PlayerProfileScreen_AwardEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerProfileScreen_AwardEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Construct");

	UWBP_PlayerProfileScreen_AwardEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardEntry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.Tick");

	UWBP_PlayerProfileScreen_AwardEntry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlayerProfileScreen_AwardEntry_C::ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C.ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry");

	UWBP_PlayerProfileScreen_AwardEntry_C_ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
