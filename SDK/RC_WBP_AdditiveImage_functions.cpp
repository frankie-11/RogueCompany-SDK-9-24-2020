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

// Function WBP_AdditiveImage.WBP_AdditiveImage_C.SetAdditiveMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AdditiveImage_C::SetAdditiveMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.SetAdditiveMaterial");

	UWBP_AdditiveImage_C_SetAdditiveMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AdditiveImage_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.PreConstruct");

	UWBP_AdditiveImage_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AdditiveImage_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.Construct");

	UWBP_AdditiveImage_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AdditiveImage.WBP_AdditiveImage_C.ExecuteUbergraph_WBP_AdditiveImage
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AdditiveImage_C::ExecuteUbergraph_WBP_AdditiveImage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AdditiveImage.WBP_AdditiveImage_C.ExecuteUbergraph_WBP_AdditiveImage");

	UWBP_AdditiveImage_C_ExecuteUbergraph_WBP_AdditiveImage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
