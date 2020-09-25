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

// Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Platform_ID_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.PreConstruct");

	UWBP_Social_Platform_ID_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Social_Platform_ID_C::OnInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.OnInitialized");

	UWBP_Social_Platform_ID_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.ExecuteUbergraph_WBP_Social_Platform_ID
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Social_Platform_ID_C::ExecuteUbergraph_WBP_Social_Platform_ID(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Social_Platform_ID.WBP_Social_Platform_ID_C.ExecuteUbergraph_WBP_Social_Platform_ID");

	UWBP_Social_Platform_ID_C_ExecuteUbergraph_WBP_Social_Platform_ID_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
