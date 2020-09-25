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

// Function DiagramSUV.DiagramSUV_C.SetSeating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Seat_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter**           Occupant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDiagramSUV_C::SetSeating(int* Seat_Index, class AKSCharacter** Occupant)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiagramSUV.DiagramSUV_C.SetSeating");

	UDiagramSUV_C_SetSeating_Params params;
	params.Seat_Index = Seat_Index;
	params.Occupant = Occupant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiagramSUV.DiagramSUV_C.ExecuteUbergraph_DiagramSUV
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UDiagramSUV_C::ExecuteUbergraph_DiagramSUV(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DiagramSUV.DiagramSUV_C.ExecuteUbergraph_DiagramSUV");

	UDiagramSUV_C_ExecuteUbergraph_DiagramSUV_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
