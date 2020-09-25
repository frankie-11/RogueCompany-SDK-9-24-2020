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

// Function WBP_Header2.WBP_Header2_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Header2_C::SetText(struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.SetText");

	UWBP_Header2_C_SetText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Header2.WBP_Header2_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Header2_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.PreConstruct");

	UWBP_Header2_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Header2.WBP_Header2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Header2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.Construct");

	UWBP_Header2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Header2.WBP_Header2_C.ExecuteUbergraph_WBP_Header2
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_Header2_C::ExecuteUbergraph_WBP_Header2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.ExecuteUbergraph_WBP_Header2");

	UWBP_Header2_C_ExecuteUbergraph_WBP_Header2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
