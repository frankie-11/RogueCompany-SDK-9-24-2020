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

// Function WBP_StorePriceDisplay.WBP_StorePriceDisplay_C.SetStorePrices
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UPUMG_StoreItemPrice*> Prices                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPUMG_PortalOffer*> PortalOffers                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UWBP_StorePriceDisplay_C::SetStorePrices(TArray<class UPUMG_StoreItemPrice*>* Prices, TArray<class UPUMG_PortalOffer*>* PortalOffers)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StorePriceDisplay.WBP_StorePriceDisplay_C.SetStorePrices");

	UWBP_StorePriceDisplay_C_SetStorePrices_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Prices != nullptr)
		*Prices = params.Prices;
	if (PortalOffers != nullptr)
		*PortalOffers = params.PortalOffers;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
