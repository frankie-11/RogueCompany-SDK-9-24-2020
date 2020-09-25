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

// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ThrobberHorizontal_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.PreConstruct");

	UWBP_ThrobberHorizontal_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ThrobberHorizontal_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.Construct");

	UWBP_ThrobberHorizontal_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.ExecuteUbergraph_WBP_ThrobberHorizontal
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ThrobberHorizontal_C::ExecuteUbergraph_WBP_ThrobberHorizontal(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ThrobberHorizontal.WBP_ThrobberHorizontal_C.ExecuteUbergraph_WBP_ThrobberHorizontal");

	UWBP_ThrobberHorizontal_C_ExecuteUbergraph_WBP_ThrobberHorizontal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
