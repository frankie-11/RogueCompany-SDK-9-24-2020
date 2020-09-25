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

// Function PlatformInventoryItem.PlatformInventoryItem.ShouldDisplayToUser
struct UPlatformInventoryItem_ShouldDisplayToUser_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformInventoryItem.PlatformInventoryItem.SetFriendlySearchName
struct UPlatformInventoryItem_SetFriendlySearchName_Params
{
	struct FString*                                    InFriendlyName;                                           // (Parm, ZeroConstructor)
};

// Function PlatformInventoryItem.PlatformInventoryItem.SetCollectionContainer
struct UPlatformInventoryItem_SetCollectionContainer_Params
{
	struct FGameplayTagContainer*                      InContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetTextureAsync
struct UPlatformInventoryItem_GetTextureAsync_Params
{
	struct FScriptDelegate*                            IconLoadedEvent;                                          // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftItemIcon
struct UPlatformInventoryItem_GetSoftItemIcon_Params
{
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetSoftIconByName
struct UPlatformInventoryItem_GetSoftIconByName_Params
{
	struct FName*                                      IconType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemNameAsString
struct UPlatformInventoryItem_GetItemNameAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemName
struct UPlatformInventoryItem_GetItemName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemId
struct UPlatformInventoryItem_GetItemId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescriptionAsString
struct UPlatformInventoryItem_GetItemDescriptionAsString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemDescription
struct UPlatformInventoryItem_GetItemDescription_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetItemByFriendlyName
struct UPlatformInventoryItem_GetItemByFriendlyName_Params
{
	struct FString*                                    InFriendlyName;                                           // (Parm, ZeroConstructor)
};

// Function PlatformInventoryItem.PlatformInventoryItem.GetCollectionContainer
struct UPlatformInventoryItem_GetCollectionContainer_Params
{
	struct FGameplayTagContainer                       ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm)
};

// Function PlatformInventoryItem.PlatformStoreAsset.GetLootId
struct UPlatformStoreAsset_GetLootId_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
