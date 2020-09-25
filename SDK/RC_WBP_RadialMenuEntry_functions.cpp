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

// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ShowBigTextInsteadOfIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          ShowBigText                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuEntry_C::ShowBigTextInsteadOfIcon(bool* ShowBigText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ShowBigTextInsteadOfIcon");

	UWBP_RadialMenuEntry_C_ShowBigTextInsteadOfIcon_Params params;
	params.ShowBigText = ShowBigText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RadialMenuEntry_C::SetEmpty()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetEmpty");

	UWBP_RadialMenuEntry_C_SetEmpty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor*           LinearColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuEntry_C::SetIconColor(struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconColor");

	UWBP_RadialMenuEntry_C_SetIconColor_Params params;
	params.LinearColor = LinearColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconFromSoftTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_RadialMenuEntry_C::SetIconFromSoftTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetIconFromSoftTexture");

	UWBP_RadialMenuEntry_C_SetIconFromSoftTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Set IconAndName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKSItem**                Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          ShowSmallText                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuEntry_C::Set_IconAndName(class UKSItem** Item, bool* ShowSmallText)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Set IconAndName");

	UWBP_RadialMenuEntry_C_Set_IconAndName_Params params;
	params.Item = Item;
	params.ShowSmallText = ShowSmallText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuEntry_C::SetRotation(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.SetRotation");

	UWBP_RadialMenuEntry_C_SetRotation_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuEntry_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.PreConstruct");

	UWBP_RadialMenuEntry_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_RadialMenuEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.Construct");

	UWBP_RadialMenuEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ExecuteUbergraph_WBP_RadialMenuEntry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_RadialMenuEntry_C::ExecuteUbergraph_WBP_RadialMenuEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuEntry.WBP_RadialMenuEntry_C.ExecuteUbergraph_WBP_RadialMenuEntry");

	UWBP_RadialMenuEntry_C_ExecuteUbergraph_WBP_RadialMenuEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
