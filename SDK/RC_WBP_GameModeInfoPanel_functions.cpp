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

// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.GetQueueImageById
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           QueueId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              QueueImage                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UWBP_GameModeInfoPanel_C::GetQueueImageById(int* QueueId, class UTexture2D** QueueImage)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.GetQueueImageById");

	UWBP_GameModeInfoPanel_C_GetQueueImageById_Params params;
	params.QueueId = QueueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QueueImage != nullptr)
		*QueueImage = params.QueueImage;
}


// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetDisplayInfo
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Description                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool*                          UseMapImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUIMapInfo*             MapInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GameModeInfoPanel_C::SetDisplayInfo(struct FText* Title, struct FText* Description, bool* UseMapImage, struct FUIMapInfo* MapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetDisplayInfo");

	UWBP_GameModeInfoPanel_C_SetDisplayInfo_Params params;
	params.Title = Title;
	params.Description = Description;
	params.UseMapImage = UseMapImage;
	params.MapInfo = MapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetQueueInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FClientQueueInfo*       QueueInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          UseMapImage                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUIMapInfo*             MapInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GameModeInfoPanel_C::SetQueueInfo(struct FClientQueueInfo* QueueInfo, bool* UseMapImage, struct FUIMapInfo* MapInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.SetQueueInfo");

	UWBP_GameModeInfoPanel_C_SetQueueInfo_Params params;
	params.QueueInfo = QueueInfo;
	params.UseMapImage = UseMapImage;
	params.MapInfo = MapInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.ExecuteUbergraph_WBP_GameModeInfoPanel
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_GameModeInfoPanel_C::ExecuteUbergraph_WBP_GameModeInfoPanel(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_GameModeInfoPanel.WBP_GameModeInfoPanel_C.ExecuteUbergraph_WBP_GameModeInfoPanel");

	UWBP_GameModeInfoPanel_C_ExecuteUbergraph_WBP_GameModeInfoPanel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
