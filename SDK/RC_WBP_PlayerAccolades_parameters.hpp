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

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.GetAccolateWidget
struct UWBP_PlayerAccolades_C_GetAccolateWidget_Params
{
	struct FAccoladeDisplayInfo*                       AccoladeInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_AccoladeMedal_C*                        Widget;                                                   // (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.InitAccoladePool
struct UWBP_PlayerAccolades_C_InitAccoladePool_Params
{
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.SetPresentationSpeed
struct UWBP_PlayerAccolades_C_SetPresentationSpeed_Params
{
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.TickPresentationSpeed
struct UWBP_PlayerAccolades_C_TickPresentationSpeed_Params
{
	float*                                             TimeDelta;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CalculatePresentationSpeed
struct UWBP_PlayerAccolades_C_CalculatePresentationSpeed_Params
{
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.MoveAccolades
struct UWBP_PlayerAccolades_C_MoveAccolades_Params
{
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.QueueAccolade
struct UWBP_PlayerAccolades_C_QueueAccolade_Params
{
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.AllowOtherAccolades
struct UWBP_PlayerAccolades_C_AllowOtherAccolades_Params
{
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.RemoveAccolade
struct UWBP_PlayerAccolades_C_RemoveAccolade_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleAccoladeRecieved
struct UWBP_PlayerAccolades_C_HandleAccoladeRecieved_Params
{
	TArray<struct FAccoladeEventEntry>*                AccoladeEvents;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleMultiplier
struct UWBP_PlayerAccolades_C_HandleMultiplier_Params
{
	struct FAccoladeDisplayInfo*                       AccoladeDisplayInfo;                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.CreateAccolade
struct UWBP_PlayerAccolades_C_CreateAccolade_Params
{
	struct FAccoladeDisplayInfo*                       AccoladeInfo;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Construct
struct UWBP_PlayerAccolades_C_Construct_Params
{
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.HandleKillCamEnabled
struct UWBP_PlayerAccolades_C_HandleKillCamEnabled_Params
{
	bool*                                              IsEnabled;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.Tick
struct UWBP_PlayerAccolades_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_PlayerAccolades.WBP_PlayerAccolades_C.ExecuteUbergraph_WBP_PlayerAccolades
struct UWBP_PlayerAccolades_C_ExecuteUbergraph_WBP_PlayerAccolades_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
