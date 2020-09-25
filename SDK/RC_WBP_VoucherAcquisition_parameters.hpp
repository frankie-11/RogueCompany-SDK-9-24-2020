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

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.AttemptGetAcquisition
struct UWBP_VoucherAcquisition_C_AttemptGetAcquisition_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnRedeemDLC
struct UWBP_VoucherAcquisition_C_OnRedeemDLC_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.NavigateBack
struct UWBP_VoucherAcquisition_C_NavigateBack_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.Tick
struct UWBP_VoucherAcquisition_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidget
struct UWBP_VoucherAcquisition_C_InitializeWidget_Params
{
	class APUMG_HUD**                                  HUD;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.InitializeWidgetNavigation
struct UWBP_VoucherAcquisition_C_InitializeWidgetNavigation_Params
{
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.OnShown
struct UWBP_VoucherAcquisition_C_OnShown_Params
{
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.PreConstruct
struct UWBP_VoucherAcquisition_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_VoucherAcquisition.WBP_VoucherAcquisition_C.ExecuteUbergraph_WBP_VoucherAcquisition
struct UWBP_VoucherAcquisition_C_ExecuteUbergraph_WBP_VoucherAcquisition_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
