#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ScopeMagnifier.ScopeMagnifier_C.OnPlayerHealthChanged
struct UScopeMagnifier_C_OnPlayerHealthChanged_Params
{
	class AKSCharacterBase**                           CharacterBase;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScopeMagnifier.ScopeMagnifier_C.OnAimStateChanged
struct UScopeMagnifier_C_OnAimStateChanged_Params
{
	EKSCharacterAimMode*                               AimState;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScopeMagnifier.ScopeMagnifier_C.DetermineScope
struct UScopeMagnifier_C_DetermineScope_Params
{
	float*                                             FOV;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScopeMagnifier.ScopeMagnifier_C.HandleInputModeChanged
struct UScopeMagnifier_C_HandleInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   InputMode;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScopeMagnifier.ScopeMagnifier_C.SetPromptImage
struct UScopeMagnifier_C_SetPromptImage_Params
{
};

// Function ScopeMagnifier.ScopeMagnifier_C.Get_PostPromptText_Text_1
struct UScopeMagnifier_C_Get_PostPromptText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScopeMagnifier.ScopeMagnifier_C.Get_PrePromptText_Text_1
struct UScopeMagnifier_C_Get_PrePromptText_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function ScopeMagnifier.ScopeMagnifier_C.SplitPrompt
struct UScopeMagnifier_C_SplitPrompt_Params
{
	struct FString                                     PreText;                                                  // (Parm, OutParm, ZeroConstructor)
	struct FString                                     PosText;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function ScopeMagnifier.ScopeMagnifier_C.PostSetWeapon
struct UScopeMagnifier_C_PostSetWeapon_Params
{
};

// Function ScopeMagnifier.ScopeMagnifier_C.PreClearWeapon
struct UScopeMagnifier_C_PreClearWeapon_Params
{
};

// Function ScopeMagnifier.ScopeMagnifier_C.InitializeWidget
struct UScopeMagnifier_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ScopeMagnifier.ScopeMagnifier_C.Construct
struct UScopeMagnifier_C_Construct_Params
{
};

// Function ScopeMagnifier.ScopeMagnifier_C.ExecuteUbergraph_ScopeMagnifier
struct UScopeMagnifier_C_ExecuteUbergraph_ScopeMagnifier_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
