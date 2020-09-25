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

// Function MarkerDisplay.MarkerDisplay_C.CreateNewIconWidget
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass**                 WidgetClass                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int*                           UniqueId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         CreatingPlayer                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EDisplayType*                  ParentMapDisplayType           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 AssociatedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                AssociatedObject               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                DefaultLocation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Lifespan                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UKSMapIconWidgetBase*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSMapIconWidgetBase* UMarkerDisplay_C::CreateNewIconWidget(class UClass** WidgetClass, int* UniqueId, class AKSPlayerState** CreatingPlayer, EDisplayType* ParentMapDisplayType, class AActor** AssociatedActor, class UObject** AssociatedObject, struct FVector* DefaultLocation, float* Lifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.CreateNewIconWidget");

	UMarkerDisplay_C_CreateNewIconWidget_Params params;
	params.WidgetClass = WidgetClass;
	params.UniqueId = UniqueId;
	params.CreatingPlayer = CreatingPlayer;
	params.ParentMapDisplayType = ParentMapDisplayType;
	params.AssociatedActor = AssociatedActor;
	params.AssociatedObject = AssociatedObject;
	params.DefaultLocation = DefaultLocation;
	params.Lifespan = Lifespan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Off From Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULootSiteMarker_v2_C**   Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMarkerDisplay_C::Receive_Loot_Inspect_Off_From_Marker(class ULootSiteMarker_v2_C** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Off From Marker");

	UMarkerDisplay_C_Receive_Loot_Inspect_Off_From_Marker_Params params;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Request From Marker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AKSLootSiteBase**        Loot_Site                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class ULootSiteMarker_v2_C**   Marker                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMarkerDisplay_C::Receive_Loot_Inspect_Request_From_Marker(class AKSLootSiteBase** Loot_Site, class ULootSiteMarker_v2_C** Marker)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Receive Loot Inspect Request From Marker");

	UMarkerDisplay_C_Receive_Loot_Inspect_Request_From_Marker_Params params;
	params.Loot_Site = Loot_Site;
	params.Marker = Marker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.InitializeTickAnimations
// (Event, Protected, BlueprintEvent)

void UMarkerDisplay_C::InitializeTickAnimations()
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.InitializeTickAnimations");

	UMarkerDisplay_C_InitializeTickAnimations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ElapsedTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ElapsedAlpha                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMarkerDisplay_C::Inspect_Anim_Update(float* ElapsedTime, float* ElapsedAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Update");

	UMarkerDisplay_C_Inspect_Anim_Update_Params params;
	params.ElapsedTime = ElapsedTime;
	params.ElapsedAlpha = ElapsedAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Finished
// (BlueprintCallable, BlueprintEvent)

void UMarkerDisplay_C::Inspect_Anim_Finished()
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Inspect Anim Finished");

	UMarkerDisplay_C_Inspect_Anim_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMarkerDisplay_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.InitializeWidget");

	UMarkerDisplay_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.OnScrambleStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Scrambled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMarkerDisplay_C::OnScrambleStateChanged(bool* Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.OnScrambleStateChanged");

	UMarkerDisplay_C_OnScrambleStateChanged_Params params;
	params.Scrambled = Scrambled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.Handle Loot Site State Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLootSiteState*         Loot_Site_State                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMarkerDisplay_C::Handle_Loot_Site_State_Changed(struct FLootSiteState* Loot_Site_State)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Handle Loot Site State Changed");

	UMarkerDisplay_C_Handle_Loot_Site_State_Changed_Params params;
	params.Loot_Site_State = Loot_Site_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMarkerDisplay_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.Tick");

	UMarkerDisplay_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MarkerDisplay.MarkerDisplay_C.ExecuteUbergraph_MarkerDisplay
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMarkerDisplay_C::ExecuteUbergraph_MarkerDisplay(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MarkerDisplay.MarkerDisplay_C.ExecuteUbergraph_MarkerDisplay");

	UMarkerDisplay_C_ExecuteUbergraph_MarkerDisplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
