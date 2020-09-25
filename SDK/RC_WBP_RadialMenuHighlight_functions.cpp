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

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UWBP_RadialMenuHighlight_C::GetHighlightMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat");

	UWBP_RadialMenuHighlight_C_GetHighlightMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuHighlight_C::SetPosition(float* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition");

	UWBP_RadialMenuHighlight_C_SetPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Width                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuHighlight_C::SetWidth(float* Width)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth");

	UWBP_RadialMenuHighlight_C_SetWidth_Params params;
	params.Width = Width;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
