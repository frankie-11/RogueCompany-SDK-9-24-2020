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

// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_QuickPlay_QueueTypeHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.Construct");

	UWBP_QuickPlay_QueueTypeHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeHeader_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.PreConstruct");

	UWBP_QuickPlay_QueueTypeHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.SetHeaderText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  QueueType                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_QuickPlay_QueueTypeHeader_C::SetHeaderText(struct FText* QueueType)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.SetHeaderText");

	UWBP_QuickPlay_QueueTypeHeader_C_SetHeaderText_Params params;
	params.QueueType = QueueType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_QuickPlay_QueueTypeHeader_C::ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_QuickPlay_QueueTypeHeader.WBP_QuickPlay_QueueTypeHeader_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader");

	UWBP_QuickPlay_QueueTypeHeader_C_ExecuteUbergraph_WBP_QuickPlay_QueueTypeHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
