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

// Function WBP_news_screen.WBP_news_screen_C.GoBack
struct UWBP_news_screen_C_GoBack_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.HandleInputModeChanged
struct UWBP_news_screen_C_HandleInputModeChanged_Params
{
	TEnumAsByte<EPGAME_INPUT_STATE>*                   Input_Mode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_news_screen.WBP_news_screen_C.PopulateNewsCards
struct UWBP_news_screen_C_PopulateNewsCards_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.PreConstruct
struct UWBP_news_screen_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_news_screen.WBP_news_screen_C.InitializeWidget
struct UWBP_news_screen_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_news_screen.WBP_news_screen_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UWBP_news_screen_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.HandleCloseHovered
struct UWBP_news_screen_C_HandleCloseHovered_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_news_screen.WBP_news_screen_C.HandleCLoseUnhovered
struct UWBP_news_screen_C_HandleCLoseUnhovered_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_news_screen.WBP_news_screen_C.InitializeWidgetNavigation
struct UWBP_news_screen_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.OnJsonChanged
struct UWBP_news_screen_C_OnJsonChanged_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.HandleLoginStateChange
struct UWBP_news_screen_C_HandleLoginStateChange_Params
{
	EPUMG_LoginState*                                  NewLoginState;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_news_screen.WBP_news_screen_C.OnShown
struct UWBP_news_screen_C_OnShown_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.OnHide
struct UWBP_news_screen_C_OnHide_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.Destruct
struct UWBP_news_screen_C_Destruct_Params
{
};

// Function WBP_news_screen.WBP_news_screen_C.ExecuteUbergraph_WBP_news_screen
struct UWBP_news_screen_C_ExecuteUbergraph_WBP_news_screen_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
