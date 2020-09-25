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

// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CountdownVersusMessage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.Construct");

	UWBP_CountdownVersusMessage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.OnAnimFinished
// (BlueprintCallable, BlueprintEvent)

void UWBP_CountdownVersusMessage_C::OnAnimFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.OnAnimFinished");

	UWBP_CountdownVersusMessage_C_OnAnimFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CountdownVersusMessage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.PreConstruct");

	UWBP_CountdownVersusMessage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.ExecuteUbergraph_WBP_CountdownVersusMessage
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_CountdownVersusMessage_C::ExecuteUbergraph_WBP_CountdownVersusMessage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CountdownVersusMessage.WBP_CountdownVersusMessage_C.ExecuteUbergraph_WBP_CountdownVersusMessage");

	UWBP_CountdownVersusMessage_C_ExecuteUbergraph_WBP_CountdownVersusMessage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
