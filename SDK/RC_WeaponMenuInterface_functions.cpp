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

// Function WeaponMenuInterface.WeaponMenuInterface_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Should_Cancel                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWeaponMenuInterface_C::Close(bool* Should_Cancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuInterface.WeaponMenuInterface_C.Close");

	UWeaponMenuInterface_C_Close_Params params;
	params.Should_Cancel = Should_Cancel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
