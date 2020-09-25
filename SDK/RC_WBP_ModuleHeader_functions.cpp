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

// Function WBP_ModuleHeader.WBP_ModuleHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ModuleHeader_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ModuleHeader.WBP_ModuleHeader_C.PreConstruct");

	UWBP_ModuleHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ModuleHeader.WBP_ModuleHeader_C.ExecuteUbergraph_WBP_ModuleHeader
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_ModuleHeader_C::ExecuteUbergraph_WBP_ModuleHeader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ModuleHeader.WBP_ModuleHeader_C.ExecuteUbergraph_WBP_ModuleHeader");

	UWBP_ModuleHeader_C_ExecuteUbergraph_WBP_ModuleHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
