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

// Function VehicleDiagram.VehicleDiagram_C.SetSeating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Seat_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter**           Occupant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UVehicleDiagram_C::SetSeating(int* Seat_Index, class AKSCharacter** Occupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDiagram.VehicleDiagram_C.SetSeating");

	UVehicleDiagram_C_SetSeating_Params params;
	params.Seat_Index = Seat_Index;
	params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
