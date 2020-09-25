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

// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString*                Language_Code                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Return_Value                   (Parm, OutParm)

void UWBP_OrdinalNumberText_C::Get_Language_Specific_Superscript_Text(struct FString* Language_Code, struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Superscript Text");

	UWBP_OrdinalNumberText_C_Get_Language_Specific_Superscript_Text_Params params;
	params.Language_Code = Language_Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FString*                Language_Code                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FText                   Return_Value                   (Parm, OutParm)

void UWBP_OrdinalNumberText_C::Get_Language_Specific_Main_Text(struct FString* Language_Code, struct FText* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Get Language Specific Main Text");

	UWBP_OrdinalNumberText_C_Get_Language_Specific_Main_Text_Params params;
	params.Language_Code = Language_Code;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_OrdinalNumberText_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.PreConstruct");

	UWBP_OrdinalNumberText_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateFontInfo*         InFontInfo                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_OrdinalNumberText_C::Set_Font(struct FSlateFontInfo* InFontInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Font");

	UWBP_OrdinalNumberText_C_Set_Font_Params params;
	params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           Number                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_OrdinalNumberText_C::Set_Value(int* Number)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.Set Value");

	UWBP_OrdinalNumberText_C_Set_Value_Params params;
	params.Number = Number;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_OrdinalNumberText_C::ExecuteUbergraph_WBP_OrdinalNumberText(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_OrdinalNumberText.WBP_OrdinalNumberText_C.ExecuteUbergraph_WBP_OrdinalNumberText");

	UWBP_OrdinalNumberText_C_ExecuteUbergraph_WBP_OrdinalNumberText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
