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

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.SortQueues
struct UWBP_QuickPlay_QueueTypeSection_C_SortQueues_Params
{
	TArray<struct FClientQueueInfo>                    Queues;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FClientQueueInfo>                    SortedQueues;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ResetQueueButtons
struct UWBP_QuickPlay_QueueTypeSection_C_ResetQueueButtons_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.GetQueueButtons
struct UWBP_QuickPlay_QueueTypeSection_C_GetQueueButtons_Params
{
	TArray<class UWBP_QuickPlay_QueueButton_C*>        Buttons;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.PopulateSection
struct UWBP_QuickPlay_QueueTypeSection_C_PopulateSection_Params
{
	struct FQueueSection*                              QueueSectionInfo;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.Construct
struct UWBP_QuickPlay_QueueTypeSection_C_Construct_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueClicked
struct UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueClicked_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueHovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueHovered_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleOnQueueUnhovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleOnQueueUnhovered_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnHovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnHovered_Params
{
	bool*                                              IsGamepad;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnUnhovered
struct UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnUnhovered_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.HandleCustomBtnClicked
struct UWBP_QuickPlay_QueueTypeSection_C_HandleCustomBtnClicked_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection
struct UWBP_QuickPlay_QueueTypeSection_C_ExecuteUbergraph_WBP_QuickPlay_QueueTypeSection_Params
{
	int*                                               EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchPopulated__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchPopulated__DelegateSignature_Params
{
	TArray<class UKSWidget*>                           Buttons;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnCustomMatchSelected__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnCustomMatchSelected__DelegateSignature_Params
{
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueuePopulated__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueuePopulated__DelegateSignature_Params
{
	TArray<class UWBP_QuickPlay_QueueButton_C*>        QueueButton;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueUnhovered__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueueUnhovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueHovered__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueueHovered__DelegateSignature_Params
{
	class UWidget**                                    Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function WBP_QuickPlay_QueueTypeSection.WBP_QuickPlay_QueueTypeSection_C.OnQueueSelected__DelegateSignature
struct UWBP_QuickPlay_QueueTypeSection_C_OnQueueSelected__DelegateSignature_Params
{
	int*                                               QueueId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
