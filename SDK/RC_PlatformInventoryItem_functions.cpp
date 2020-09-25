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

// Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlatformInventoryItem::ShouldDisplayToUser()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser");

	UPlatformInventoryItem_ShouldDisplayToUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString*                InFriendlyName                 (Parm, ZeroConstructor)

void UPlatformInventoryItem::SetFriendlySearchName(struct FString* InFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName");

	UPlatformInventoryItem_SetFriendlySearchName_Params params;
	params.InFriendlyName = InFriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer*  InContainer                    (ConstParm, Parm, OutParm, ReferenceParm)

void UPlatformInventoryItem::SetCollectionContainer(struct FGameplayTagContainer* InContainer)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer");

	UPlatformInventoryItem_SetCollectionContainer_Params params;
	params.InContainer = InContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FScriptDelegate*        IconLoadedEvent                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UPlatformInventoryItem::GetTextureAsync(struct FScriptDelegate* IconLoadedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync");

	UPlatformInventoryItem_GetTextureAsync_Params params;
	params.IconLoadedEvent = IconLoadedEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)

void UPlatformInventoryItem::GetSoftItemIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon");

	UPlatformInventoryItem_GetSoftItemIcon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName*                  IconType                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPlatformInventoryItem::GetSoftIconByName(struct FName* IconType)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName");

	UPlatformInventoryItem_GetSoftIconByName_Params params;
	params.IconType = IconType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlatformInventoryItem::GetItemNameAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString");

	UPlatformInventoryItem_GetItemNameAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlatformInventoryItem::GetItemName()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemName");

	UPlatformInventoryItem_GetItemName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlatformInventoryItem::GetItemId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemId");

	UPlatformInventoryItem_GetItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPlatformInventoryItem::GetItemDescriptionAsString()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString");

	UPlatformInventoryItem_GetItemDescriptionAsString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPlatformInventoryItem::GetItemDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription");

	UPlatformInventoryItem_GetItemDescription_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString*                InFriendlyName                 (Parm, ZeroConstructor)

void UPlatformInventoryItem::STATIC_GetItemByFriendlyName(struct FString* InFriendlyName)
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName");

	UPlatformInventoryItem_GetItemByFriendlyName_Params params;
	params.InFriendlyName = InFriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer   ReturnValue                    (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)

struct FGameplayTagContainer UPlatformInventoryItem::GetCollectionContainer()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer");

	UPlatformInventoryItem_GetCollectionContainer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlatformInventoryItem.PlatformStoreAsset.GetLootId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlatformStoreAsset::GetLootId()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformInventoryItem.PlatformStoreAsset.GetLootId");

	UPlatformStoreAsset_GetLootId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
