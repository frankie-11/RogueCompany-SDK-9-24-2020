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

// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MatchSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::Set_Brush_from_Texture_on_Item(class UKSItem** Item, bool* MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Set Brush from Texture on Item");

	UWBP_AsyncIcon_C_Set_Brush_from_Texture_on_Item_Params params;
	params.Item = Item;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstanceDynamic* MaterialInstanceDynamic        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::Get_Material(class UMaterialInstanceDynamic** MaterialInstanceDynamic)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Get Material");

	UWBP_AsyncIcon_C_Get_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaterialInstanceDynamic != nullptr)
		*MaterialInstanceDynamic = params.MaterialInstanceDynamic;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface**     Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::SetMaterialToUse(class UMaterialInterface** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetMaterialToUse");

	UWBP_AsyncIcon_C_SetMaterialToUse_Params params;
	params.Material = Material;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_AsyncIcon_C::ApplyDefaultBrush()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.ApplyDefaultBrush");

	UWBP_AsyncIcon_C_ApplyDefaultBrush_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          MatchSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::SetBrushFromSoftTexture(bool* MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromSoftTexture");

	UWBP_AsyncIcon_C_SetBrushFromSoftTexture_Params params;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MatchSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::SetBrushFromTexture(class UTexture2D** Texture, bool* MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromTexture");

	UWBP_AsyncIcon_C_SetBrushFromTexture_Params params;
	params.Texture = Texture;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlatformInventoryItem** Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          MatchSize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::SetBrushFromItemIcon(class UPlatformInventoryItem** Item, bool* MatchSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.SetBrushFromItemIcon");

	UWBP_AsyncIcon_C_SetBrushFromItemIcon_Params params;
	params.Item = Item;
	params.MatchSize = MatchSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.PreConstruct");

	UWBP_AsyncIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_AsyncIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.Construct");

	UWBP_AsyncIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_AsyncImage**       Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_AsyncIcon_C::OnStartLoad(class UPUMG_AsyncImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnStartLoad");

	UWBP_AsyncIcon_C_OnStartLoad_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPUMG_AsyncImage**       Image                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UWBP_AsyncIcon_C::OnFinishLoad(class UPUMG_AsyncImage** Image)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnFinishLoad");

	UWBP_AsyncIcon_C_OnFinishLoad_Params params;
	params.Image = Image;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::ExecuteUbergraph_WBP_AsyncIcon(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.ExecuteUbergraph_WBP_AsyncIcon");

	UWBP_AsyncIcon_C_ExecuteUbergraph_WBP_AsyncIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D**             Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_AsyncIcon_C::OnIconUpdated__DelegateSignature(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_AsyncIcon.WBP_AsyncIcon_C.OnIconUpdated__DelegateSignature");

	UWBP_AsyncIcon_C_OnIconUpdated__DelegateSignature_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
