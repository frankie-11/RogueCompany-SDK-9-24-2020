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

// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Visibility State For Distance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::Get_Visibility_State_For_Distance(ESlateVisibility* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Visibility State For Distance");

	ULootSiteMarker_v2_C_Get_Visibility_State_For_Distance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.IsHovering
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULootSiteMarker_v2_C::IsHovering()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.IsHovering");

	ULootSiteMarker_v2_C_IsHovering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.ShouldUpdateHover
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULootSiteMarker_v2_C::ShouldUpdateHover()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.ShouldUpdateHover");

	ULootSiteMarker_v2_C_ShouldUpdateHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Default Icon Visibility
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::Get_Default_Icon_Visibility(ESlateVisibility* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Default Icon Visibility");

	ULootSiteMarker_v2_C_Get_Default_Icon_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Icon Scale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Icon_Scale                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::Get_Icon_Scale(float* Icon_Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Icon Scale");

	ULootSiteMarker_v2_C_Get_Icon_Scale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon_Scale != nullptr)
		*Icon_Scale = params.Icon_Scale;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetLootTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Texture2D                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::GetLootTexture(class UTexture2D** Texture2D)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetLootTexture");

	ULootSiteMarker_v2_C_GetLootTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture2D != nullptr)
		*Texture2D = params.Texture2D;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetPinTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*              Texture                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::GetPinTexture(class UTexture2D** Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetPinTexture");

	ULootSiteMarker_v2_C_GetPinTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Texture != nullptr)
		*Texture = params.Texture;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Pin Height
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Pin_Height                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::Get_Pin_Height(float* Pin_Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Pin Height");

	ULootSiteMarker_v2_C_Get_Pin_Height_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Pin_Height != nullptr)
		*Pin_Height = params.Pin_Height;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Render Opacity
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Render_Opacity                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::Get_Render_Opacity(float* Render_Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Get Render Opacity");

	ULootSiteMarker_v2_C_Get_Render_Opacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Render_Opacity != nullptr)
		*Render_Opacity = params.Render_Opacity;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Is Still In Initial Render Position
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Still_In_Initial_Render_Position (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::Is_Still_In_Initial_Render_Position(bool* Still_In_Initial_Render_Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Is Still In Initial Render Position");

	ULootSiteMarker_v2_C_Is_Still_In_Initial_Render_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Still_In_Initial_Render_Position != nullptr)
		*Still_In_Initial_Render_Position = params.Still_In_Initial_Render_Position;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetHitboxMultiplierByDistance
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          HitboxMultiplier               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::GetHitboxMultiplierByDistance(float* HitboxMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.GetHitboxMultiplierByDistance");

	ULootSiteMarker_v2_C_GetHitboxMultiplierByDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitboxMultiplier != nullptr)
		*HitboxMultiplier = params.HitboxMultiplier;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Update
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility ULootSiteMarker_v2_C::Update()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Update");

	ULootSiteMarker_v2_C_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULootSiteMarker_v2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.Construct");

	ULootSiteMarker_v2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.UpdateMetersAway
// (Event, Public, BlueprintEvent)
// Parameters:
// int*                           Meters                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::UpdateMetersAway(int* Meters)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.UpdateMetersAway");

	ULootSiteMarker_v2_C_UpdateMetersAway_Params params;
	params.Meters = Meters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.OnHoverStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// EIconHoverState*               NewHoverState                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::OnHoverStateChanged(EIconHoverState* NewHoverState)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.OnHoverStateChanged");

	ULootSiteMarker_v2_C_OnHoverStateChanged_Params params;
	params.NewHoverState = NewHoverState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.HandleLootSiteRarityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ELootSiteRarity*               CurrentRarity                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::HandleLootSiteRarityChanged(ELootSiteRarity* CurrentRarity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.HandleLootSiteRarityChanged");

	ULootSiteMarker_v2_C_HandleLootSiteRarityChanged_Params params;
	params.CurrentRarity = CurrentRarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetScreenRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// EIconMarkerScreenRegion*       ScreenRegion                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::SetScreenRegion(EIconMarkerScreenRegion* ScreenRegion)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetScreenRegion");

	ULootSiteMarker_v2_C_SetScreenRegion_Params params;
	params.ScreenRegion = ScreenRegion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetArrowAngle
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::SetArrowAngle(float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.SetArrowAngle");

	ULootSiteMarker_v2_C_SetArrowAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootSiteMarker_v2.LootSiteMarker_v2_C.ExecuteUbergraph_LootSiteMarker_v2
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULootSiteMarker_v2_C::ExecuteUbergraph_LootSiteMarker_v2(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootSiteMarker_v2.LootSiteMarker_v2_C.ExecuteUbergraph_LootSiteMarker_v2");

	ULootSiteMarker_v2_C_ExecuteUbergraph_LootSiteMarker_v2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
