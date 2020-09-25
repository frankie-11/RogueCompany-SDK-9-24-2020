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

// Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EKSPlatformType*               Platform                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlatformIcon_C::SetPlatform(EKSPlatformType* Platform)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.SetPlatform");

	UWBP_PlatformIcon_C_SetPlatform_Params params;
	params.Platform = Platform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlatformIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.PreConstruct");

	UWBP_PlatformIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlatformIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.Construct");

	UWBP_PlatformIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlatformIcon.WBP_PlatformIcon_C.ExecuteUbergraph_WBP_PlatformIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_PlatformIcon_C::ExecuteUbergraph_WBP_PlatformIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlatformIcon.WBP_PlatformIcon_C.ExecuteUbergraph_WBP_PlatformIcon");

	UWBP_PlatformIcon_C_ExecuteUbergraph_WBP_PlatformIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
