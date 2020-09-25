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

// Function Minimap.Minimap_C.TickVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__DeltaTime__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::TickVisibility(float* bpp__DeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.TickVisibility");

	UMinimap_C_TickVisibility_Params params;
	params.bpp__DeltaTime__pf = bpp__DeltaTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.Tick
// (BlueprintCosmetic, Native, Event, Public)
// Parameters:
// struct FGeometry*              bpp__MyGeometry__pf            (Parm, IsPlainOldData)
// float*                         bpp__InDeltaTime__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::Tick(struct FGeometry* bpp__MyGeometry__pf, float* bpp__InDeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.Tick");

	UMinimap_C_Tick_Params params;
	params.bpp__MyGeometry__pf = bpp__MyGeometry__pf;
	params.bpp__InDeltaTime__pf = bpp__InDeltaTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.SetScrambleTexture
// (Native, Public, BlueprintCallable)

void UMinimap_C::SetScrambleTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.SetScrambleTexture");

	UMinimap_C_SetScrambleTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.SetRoyaleMode
// (Native, Public, BlueprintCallable)
// Parameters:
// bool*                          bpp__IsRoyaleMode__pf          (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::SetRoyaleMode(bool* bpp__IsRoyaleMode__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.SetRoyaleMode");

	UMinimap_C_SetRoyaleMode_Params params;
	params.bpp__IsRoyaleMode__pf = bpp__IsRoyaleMode__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.OnScrambleStateChanged
// (Native, Event, Public)
// Parameters:
// bool*                          bpp__Scrambled__pf             (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::OnScrambleStateChanged(bool* bpp__Scrambled__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.OnScrambleStateChanged");

	UMinimap_C_OnScrambleStateChanged_Params params;
	params.bpp__Scrambled__pf = bpp__Scrambled__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E
// (Native, Public, BlueprintCallable)
// Parameters:
// class UObject**                bpp__Loaded__pf                (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E(class UObject** bpp__Loaded__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E");

	UMinimap_C_OnLoaded_DB612B4F430AF7AB8BD23B968AE6C16E_Params params;
	params.bpp__Loaded__pf = bpp__Loaded__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.Handle Royale Zone Wait
// (Native, Public, BlueprintCallable)
// Parameters:
// float*                         bpp__TimeUntilShrink__pf       (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::Handle_Royale_Zone_Wait(float* bpp__TimeUntilShrink__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.Handle Royale Zone Wait");

	UMinimap_C_Handle_Royale_Zone_Wait_Params params;
	params.bpp__TimeUntilShrink__pf = bpp__TimeUntilShrink__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.GetTransformInfo
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          bpp__NormalizedX__pf           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          bpp__NormalizedY__pf           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          bpp__Rotation__pf              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          bpp__Scale__pf                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::GetTransformInfo(float* bpp__NormalizedX__pf, float* bpp__NormalizedY__pf, float* bpp__Rotation__pf, float* bpp__Scale__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.GetTransformInfo");

	UMinimap_C_GetTransformInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__NormalizedX__pf != nullptr)
		*bpp__NormalizedX__pf = params.bpp__NormalizedX__pf;
	if (bpp__NormalizedY__pf != nullptr)
		*bpp__NormalizedY__pf = params.bpp__NormalizedY__pf;
	if (bpp__Rotation__pf != nullptr)
		*bpp__Rotation__pf = params.bpp__Rotation__pf;
	if (bpp__Scale__pf != nullptr)
		*bpp__Scale__pf = params.bpp__Scale__pf;
}


// Function Minimap.Minimap_C.GetMapTexture
// (Native, Public, BlueprintCallable)

void UMinimap_C::GetMapTexture()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.GetMapTexture");

	UMinimap_C_GetMapTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.FindMinimapRenderer
// (Native, Public, BlueprintCallable)

void UMinimap_C::FindMinimapRenderer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.FindMinimapRenderer");

	UMinimap_C_FindMinimapRenderer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.ExecuteUbergraph_Minimap_2
// (Final, Native, Public)
// Parameters:
// int*                           bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::ExecuteUbergraph_Minimap_2(int* bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.ExecuteUbergraph_Minimap_2");

	UMinimap_C_ExecuteUbergraph_Minimap_2_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.EvaluateRelativeHeight
// (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__SubjectxLocation__pfT     (Parm, ZeroConstructor, IsPlainOldData)
// EMiniMapRelativeHeight         bpp__RelativeHeight__pf        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::EvaluateRelativeHeight(struct FVector* bpp__SubjectxLocation__pfT, EMiniMapRelativeHeight* bpp__RelativeHeight__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.EvaluateRelativeHeight");

	UMinimap_C_EvaluateRelativeHeight_Params params;
	params.bpp__SubjectxLocation__pfT = bpp__SubjectxLocation__pfT;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__RelativeHeight__pf != nullptr)
		*bpp__RelativeHeight__pf = params.bpp__RelativeHeight__pf;
}


// Function Minimap.Minimap_C.EvaluateIconPosition
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector*                bpp__SubjectLocation__pf       (Parm, ZeroConstructor, IsPlainOldData)
// class UUserWidget**            bpp__Icon__pf                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UMinimap_C::EvaluateIconPosition(struct FVector* bpp__SubjectLocation__pf, class UUserWidget** bpp__Icon__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.EvaluateIconPosition");

	UMinimap_C_EvaluateIconPosition_Params params;
	params.bpp__SubjectLocation__pf = bpp__SubjectLocation__pf;
	params.bpp__Icon__pf = bpp__Icon__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.CreateNewIconWidget
// (Native, Event, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UClass**                 bpp__WidgetClass__pf           (Parm, ZeroConstructor, IsPlainOldData)
// int*                           bpp__UniqueId__pf              (Parm, ZeroConstructor, IsPlainOldData)
// class AKSPlayerState**         bpp__CreatingPlayer__pf        (Parm, ZeroConstructor, IsPlainOldData)
// EDisplayType*                  bpp__ParentMapDisplayType__pf  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 bpp__AssociatedActor__pf       (Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                bpp__AssociatedObject__pf      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                bpp__DefaultLocation__pf       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         bpp__Lifespan__pf              (Parm, ZeroConstructor, IsPlainOldData)
// class UKSMapIconWidgetBase*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UKSMapIconWidgetBase* UMinimap_C::CreateNewIconWidget(class UClass** bpp__WidgetClass__pf, int* bpp__UniqueId__pf, class AKSPlayerState** bpp__CreatingPlayer__pf, EDisplayType* bpp__ParentMapDisplayType__pf, class AActor** bpp__AssociatedActor__pf, class UObject** bpp__AssociatedObject__pf, struct FVector* bpp__DefaultLocation__pf, float* bpp__Lifespan__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.CreateNewIconWidget");

	UMinimap_C_CreateNewIconWidget_Params params;
	params.bpp__WidgetClass__pf = bpp__WidgetClass__pf;
	params.bpp__UniqueId__pf = bpp__UniqueId__pf;
	params.bpp__CreatingPlayer__pf = bpp__CreatingPlayer__pf;
	params.bpp__ParentMapDisplayType__pf = bpp__ParentMapDisplayType__pf;
	params.bpp__AssociatedActor__pf = bpp__AssociatedActor__pf;
	params.bpp__AssociatedObject__pf = bpp__AssociatedObject__pf;
	params.bpp__DefaultLocation__pf = bpp__DefaultLocation__pf;
	params.bpp__Lifespan__pf = bpp__Lifespan__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Minimap.Minimap_C.Construct
// (BlueprintCosmetic, Native, Event, Public)

void UMinimap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.Construct");

	UMinimap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Minimap.Minimap_C.CanShowMinimap
// (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           bpp__CanShow__pf               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::CanShowMinimap(bool* bpp__CanShow__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.CanShowMinimap");

	UMinimap_C_CanShowMinimap_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bpp__CanShow__pf != nullptr)
		*bpp__CanShow__pf = params.bpp__CanShow__pf;
}


// DelegateFunction Minimap.Minimap_C.OnRoyaleZoneWait__DelegateSignature
// (Public, Delegate)
// Parameters:
// float*                         bpp__TimeUntilShrink__pf       (Parm, ZeroConstructor, IsPlainOldData)

void UMinimap_C::OnRoyaleZoneWait__DelegateSignature(float* bpp__TimeUntilShrink__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction Minimap.Minimap_C.OnRoyaleZoneWait__DelegateSignature");

	UMinimap_C_OnRoyaleZoneWait__DelegateSignature_Params params;
	params.bpp__TimeUntilShrink__pf = bpp__TimeUntilShrink__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
