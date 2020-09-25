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

// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.HandleInitialSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_ChatEntry_C::HandleInitialSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.HandleInitialSpawn");

	UWBP_TextChat_ChatEntry_C_HandleInitialSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.InitialShowFinished
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_TextChat_ChatEntry_C::InitialShowFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.InitialShowFinished");

	UWBP_TextChat_ChatEntry_C_InitialShowFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetWindowCollapsed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Collapsed                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatEntry_C::SetWindowCollapsed(bool* Collapsed)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetWindowCollapsed");

	UWBP_TextChat_ChatEntry_C_SetWindowCollapsed_Params params;
	params.Collapsed = Collapsed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithoutPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatEntry_C::SetTextWithoutPlayer(struct FText* Text, EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithoutPlayer");

	UWBP_TextChat_ChatEntry_C_SetTextWithoutPlayer_Params params;
	params.Text = Text;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPUMG_PlayerInfo**       Sender                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPUMG_PlayerInfo**       Recipient                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool*                          IsOwnMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EPUMG_ChatChannel*             Channel                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatEntry_C::SetTextWithPlayer(struct FText* Text, class UPUMG_PlayerInfo** Sender, class UPUMG_PlayerInfo** Recipient, bool* IsOwnMessage, EPUMG_ChatChannel* Channel)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.SetTextWithPlayer");

	UWBP_TextChat_ChatEntry_C_SetTextWithPlayer_Params params;
	params.Text = Text;
	params.Sender = Sender;
	params.Recipient = Recipient;
	params.IsOwnMessage = IsOwnMessage;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_TextChat_ChatEntry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.Construct");

	UWBP_TextChat_ChatEntry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.ExecuteUbergraph_WBP_TextChat_ChatEntry
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWBP_TextChat_ChatEntry_C::ExecuteUbergraph_WBP_TextChat_ChatEntry(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_TextChat_ChatEntry.WBP_TextChat_ChatEntry_C.ExecuteUbergraph_WBP_TextChat_ChatEntry");

	UWBP_TextChat_ChatEntry_C_ExecuteUbergraph_WBP_TextChat_ChatEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
