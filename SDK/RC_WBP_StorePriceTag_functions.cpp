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

// Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_StoreItemPrice**   PriceInfo                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_PortalOffer**      PortalOffer                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_StorePriceTag_C::SetPriceDisplay(class UPUMG_StoreItemPrice** PriceInfo, class UPUMG_PortalOffer** PortalOffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePriceTag.WBP_StorePriceTag_C.SetPriceDisplay");

	UWBP_StorePriceTag_C_SetPriceDisplay_Params params;
	params.PriceInfo = PriceInfo;
	params.PortalOffer = PortalOffer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
