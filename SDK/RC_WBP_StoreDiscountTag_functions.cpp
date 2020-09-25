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

// Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetDiscountPercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Percentage                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StoreDiscountTag_C::SetDiscountPercentage(int* Percentage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreDiscountTag.WBP_StoreDiscountTag_C.SetDiscountPercentage");

	UWBP_StoreDiscountTag_C_SetDiscountPercentage_Params params;
	params.Percentage = Percentage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
