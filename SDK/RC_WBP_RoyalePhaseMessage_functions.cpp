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

// Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RoyalePhaseMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.Construct");

	UWBP_RoyalePhaseMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RoyalePhaseMessage_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.Tick");

	UWBP_RoyalePhaseMessage_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.ExecuteUbergraph_WBP_RoyalePhaseMessage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RoyalePhaseMessage_C::ExecuteUbergraph_WBP_RoyalePhaseMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RoyalePhaseMessage.WBP_RoyalePhaseMessage_C.ExecuteUbergraph_WBP_RoyalePhaseMessage");

	UWBP_RoyalePhaseMessage_C_ExecuteUbergraph_WBP_RoyalePhaseMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
