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

// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ShouldUpdate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAllyDeathMinimapIcon_C::ShouldUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ShouldUpdate");

	UAllyDeathMinimapIcon_C_ShouldUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAllyDeathMinimapIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Construct");

	UAllyDeathMinimapIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Start Fade
// (BlueprintCallable, BlueprintEvent)

void UAllyDeathMinimapIcon_C::Start_Fade()
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.Start Fade");

	UAllyDeathMinimapIcon_C_Start_Fade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.UpdateMeetsHeightThreshold
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bHeight                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDepth                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyDeathMinimapIcon_C::UpdateMeetsHeightThreshold(bool* bHeight, bool* bDepth)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.UpdateMeetsHeightThreshold");

	UAllyDeathMinimapIcon_C_UpdateMeetsHeightThreshold_Params params;
	params.bHeight = bHeight;
	params.bDepth = bDepth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ExecuteUbergraph_AllyDeathMinimapIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyDeathMinimapIcon_C::ExecuteUbergraph_AllyDeathMinimapIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.ExecuteUbergraph_AllyDeathMinimapIcon");

	UAllyDeathMinimapIcon_C_ExecuteUbergraph_AllyDeathMinimapIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.PingExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// unsigned char*                 IconType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAllyDeathMinimapIcon_C::PingExpired__DelegateSignature(unsigned char* IconType, int* UniqueId)
{
	static auto fn = UObject::FindObject<UFunction>("Function AllyDeathMinimapIcon.AllyDeathMinimapIcon_C.PingExpired__DelegateSignature");

	UAllyDeathMinimapIcon_C_PingExpired__DelegateSignature_Params params;
	params.IconType = IconType;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
