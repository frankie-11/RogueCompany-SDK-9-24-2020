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

// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState**           PlayerState                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSCharacter**           Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWBP_LobbyNameplate_C::OnPossession(class APlayerState** PlayerState, class AKSCharacter** Character)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnPossession");

	UNewWBP_LobbyNameplate_C_OnPossession_Params params;
	params.PlayerState = PlayerState;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWBP_LobbyNameplate_C::OnHovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnHovered");

	UNewWBP_LobbyNameplate_C_OnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered
// (Public, BlueprintCallable, BlueprintEvent)

void UNewWBP_LobbyNameplate_C::OnUnhovered()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.OnUnhovered");

	UNewWBP_LobbyNameplate_C_OnUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewWBP_LobbyNameplate_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.Construct");

	UNewWBP_LobbyNameplate_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  InName                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UNewWBP_LobbyNameplate_C::SetName(struct FText* InName)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetName");

	UNewWBP_LobbyNameplate_C_SetName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetIcons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          IsLeader                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSItem**                AvatarItem                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWBP_LobbyNameplate_C::SetIcons(bool* IsLeader, class UKSItem** AvatarItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.SetIcons");

	UNewWBP_LobbyNameplate_C_SetIcons_Params params;
	params.IsLeader = IsLeader;
	params.AvatarItem = AvatarItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWBP_LobbyNameplate_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.InitializeWidget");

	UNewWBP_LobbyNameplate_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWBP_LobbyNameplate_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.PreConstruct");

	UNewWBP_LobbyNameplate_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UNewWBP_LobbyNameplate_C::ExecuteUbergraph_NewWBP_LobbyNameplate(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C.ExecuteUbergraph_NewWBP_LobbyNameplate");

	UNewWBP_LobbyNameplate_C_ExecuteUbergraph_NewWBP_LobbyNameplate_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
