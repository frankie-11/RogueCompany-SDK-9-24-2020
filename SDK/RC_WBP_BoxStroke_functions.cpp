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

// Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           NewColor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BoxStroke_C::SetStrokeColor(struct FLinearColor* NewColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeColor");

	UWBP_BoxStroke_C_SetStrokeColor_Params params;
	params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         NewSize                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BoxStroke_C::SetStrokeSize(float* NewSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.SetStrokeSize");

	UWBP_BoxStroke_C_SetStrokeSize_Params params;
	params.NewSize = NewSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeColor
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BoxStroke_C::ApplyStrokeColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeColor");

	UWBP_BoxStroke_C_ApplyStrokeColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeSize
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_BoxStroke_C::ApplyStrokeSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.ApplyStrokeSize");

	UWBP_BoxStroke_C_ApplyStrokeSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BoxStroke_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.PreConstruct");

	UWBP_BoxStroke_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_BoxStroke_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.Construct");

	UWBP_BoxStroke_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_BoxStroke.WBP_BoxStroke_C.ExecuteUbergraph_WBP_BoxStroke
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_BoxStroke_C::ExecuteUbergraph_WBP_BoxStroke(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_BoxStroke.WBP_BoxStroke_C.ExecuteUbergraph_WBP_BoxStroke");

	UWBP_BoxStroke_C_ExecuteUbergraph_WBP_BoxStroke_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
