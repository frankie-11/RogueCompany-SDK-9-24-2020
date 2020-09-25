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

// Function MinimapRenderer.MinimapRenderer_C.GetMinimapWidth
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMinimapRenderer_C::GetMinimapWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.GetMinimapWidth");

	AMinimapRenderer_C_GetMinimapWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MinimapRenderer.MinimapRenderer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMinimapRenderer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.UserConstructionScript");

	AMinimapRenderer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapRenderer.MinimapRenderer_C.OnLoaded_1F80951A45CA8E54458A18AA362E670C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject**                Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinimapRenderer_C::OnLoaded_1F80951A45CA8E54458A18AA362E670C(class UObject** Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.OnLoaded_1F80951A45CA8E54458A18AA362E670C");

	AMinimapRenderer_C_OnLoaded_1F80951A45CA8E54458A18AA362E670C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapRenderer.MinimapRenderer_C.3_CaptureMinimap
// (BlueprintCallable, BlueprintEvent)

void AMinimapRenderer_C::_3_CaptureMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.3_CaptureMinimap");

	AMinimapRenderer_C__3_CaptureMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapRenderer.MinimapRenderer_C.1_LoadMinimapTexture
// (BlueprintCallable, BlueprintEvent)

void AMinimapRenderer_C::_1_LoadMinimapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.1_LoadMinimapTexture");

	AMinimapRenderer_C__1_LoadMinimapTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapRenderer.MinimapRenderer_C.5_ResetVRAM
// (BlueprintCallable, BlueprintEvent)

void AMinimapRenderer_C::_5_ResetVRAM()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.5_ResetVRAM");

	AMinimapRenderer_C__5_ResetVRAM_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapRenderer.MinimapRenderer_C.4_SaveToTexture
// (BlueprintCallable, BlueprintEvent)

void AMinimapRenderer_C::_4_SaveToTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.4_SaveToTexture");

	AMinimapRenderer_C__4_SaveToTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapRenderer.MinimapRenderer_C.2_PrepareRenderTarget
// (BlueprintCallable, BlueprintEvent)

void AMinimapRenderer_C::_2_PrepareRenderTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.2_PrepareRenderTarget");

	AMinimapRenderer_C__2_PrepareRenderTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MinimapRenderer.MinimapRenderer_C.ExecuteUbergraph_MinimapRenderer
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AMinimapRenderer_C::ExecuteUbergraph_MinimapRenderer(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MinimapRenderer.MinimapRenderer_C.ExecuteUbergraph_MinimapRenderer");

	AMinimapRenderer_C_ExecuteUbergraph_MinimapRenderer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
