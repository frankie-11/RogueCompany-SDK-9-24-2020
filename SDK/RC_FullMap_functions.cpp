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

// Function FullMap.FullMap_C.CreateNewIconWidget
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

class UKSMapIconWidgetBase* UFullMap_C::CreateNewIconWidget(class UClass** WidgetClass, int* UniqueId, class AKSPlayerState** CreatingPlayer, EDisplayType* ParentMapDisplayType, class AActor** AssociatedActor, class UObject** AssociatedObject, struct FVector* DefaultLocation, float* Lifespan)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.CreateNewIconWidget");

	UFullMap_C_CreateNewIconWidget_Params params;
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


// Function FullMap.FullMap_C.IsOnMap
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              MapCoords                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFullMap_C::IsOnMap(struct FVector2D* MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.IsOnMap");

	UFullMap_C_IsOnMap_Params params;
	params.MapCoords = MapCoords;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.ToIconRenderAngle
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         PlayerAngle                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UFullMap_C::ToIconRenderAngle(float* PlayerAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ToIconRenderAngle");

	UFullMap_C_ToIconRenderAngle_Params params;
	params.PlayerAngle = PlayerAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.ToIconRenderCoords
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              MapCoords                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector2D UFullMap_C::ToIconRenderCoords(struct FVector2D* MapCoords)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ToIconRenderCoords");

	UFullMap_C_ToIconRenderCoords_Params params;
	params.MapCoords = MapCoords;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.NavigateBack
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFullMap_C::NavigateBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.NavigateBack");

	UFullMap_C_NavigateBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.ApplyZoom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         ZoomInput                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullMap_C::ApplyZoom(float* ZoomInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ApplyZoom");

	UFullMap_C_ApplyZoom_Params params;
	params.ZoomInput = ZoomInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.ConstrainMapScreenPosition
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D*              ProposedPosition               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ConstrainedPosition            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UFullMap_C::ConstrainMapScreenPosition(struct FVector2D* ProposedPosition, struct FVector2D* ConstrainedPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ConstrainMapScreenPosition");

	UFullMap_C_ConstrainMapScreenPosition_Params params;
	params.ProposedPosition = ProposedPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConstrainedPosition != nullptr)
		*ConstrainedPosition = params.ConstrainedPosition;
}


// Function FullMap.FullMap_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFullMap_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseMove");

	UFullMap_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFullMap_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseButtonUp");

	UFullMap_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFullMap_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseButtonDown");

	UFullMap_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UFullMap_C::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnMouseWheel");

	UFullMap_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FullMap.FullMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFullMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.Construct");

	UFullMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.FindMinimapRenderer
// (BlueprintCallable, BlueprintEvent)

void UFullMap_C::FindMinimapRenderer()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.FindMinimapRenderer");

	UFullMap_C_FindMinimapRenderer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.GetMapTexture
// (BlueprintCallable, BlueprintEvent)

void UFullMap_C::GetMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.GetMapTexture");

	UFullMap_C_GetMapTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.OnShown
// (Event, Public, BlueprintEvent)

void UFullMap_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnShown");

	UFullMap_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.InitializeWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APUMG_HUD**              HUD                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullMap_C::InitializeWidget(class APUMG_HUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.InitializeWidget");

	UFullMap_C_InitializeWidget_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.InitializeWidgetNavigation
// (Event, Public, BlueprintEvent)

void UFullMap_C::InitializeWidgetNavigation()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.InitializeWidgetNavigation");

	UFullMap_C_InitializeWidgetNavigation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.InitializeWidgetButtonListeners
// (Event, Public, BlueprintEvent)

void UFullMap_C::InitializeWidgetButtonListeners()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.InitializeWidgetButtonListeners");

	UFullMap_C_InitializeWidgetButtonListeners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.MapButtonClose
// (BlueprintCallable, BlueprintEvent)

void UFullMap_C::MapButtonClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.MapButtonClose");

	UFullMap_C_MapButtonClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullMap_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.Tick");

	UFullMap_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.Handle Zone Wait
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         TimeUntilShrink                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullMap_C::Handle_Zone_Wait(float* TimeUntilShrink)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.Handle Zone Wait");

	UFullMap_C_Handle_Zone_Wait_Params params;
	params.TimeUntilShrink = TimeUntilShrink;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.OnScrambleStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool*                          Scrambled                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullMap_C::OnScrambleStateChanged(bool* Scrambled)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.OnScrambleStateChanged");

	UFullMap_C_OnScrambleStateChanged_Params params;
	params.Scrambled = Scrambled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.RemoveSelf
// (BlueprintCallable, BlueprintEvent)

void UFullMap_C::RemoveSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.RemoveSelf");

	UFullMap_C_RemoveSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullMap.FullMap_C.ExecuteUbergraph_FullMap
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullMap_C::ExecuteUbergraph_FullMap(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullMap.FullMap_C.ExecuteUbergraph_FullMap");

	UFullMap_C_ExecuteUbergraph_FullMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
