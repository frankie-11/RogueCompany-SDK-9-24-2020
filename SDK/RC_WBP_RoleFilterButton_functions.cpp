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

// Function WBP_RoleFilterButton.WBP_RoleFilterButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RoleFilterButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoleFilterButton.WBP_RoleFilterButton_C.Construct");

	UWBP_RoleFilterButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RoleFilterButton.WBP_RoleFilterButton_C.ExecuteUbergraph_WBP_RoleFilterButton
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RoleFilterButton_C::ExecuteUbergraph_WBP_RoleFilterButton(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoleFilterButton.WBP_RoleFilterButton_C.ExecuteUbergraph_WBP_RoleFilterButton");

	UWBP_RoleFilterButton_C_ExecuteUbergraph_WBP_RoleFilterButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
