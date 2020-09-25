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

// Function BPI_SetSlomo.BPI_SetSlomo_C.SetSlomo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          bEnableSlomo                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_SetSlomo_C::SetSlomo(bool* bEnableSlomo)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_SetSlomo.BPI_SetSlomo_C.SetSlomo");

	UBPI_SetSlomo_C_SetSlomo_Params params;
	params.bEnableSlomo = bEnableSlomo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
