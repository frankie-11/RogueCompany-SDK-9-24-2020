#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlatformInventoryItem.PInv_AssetManager
// 0x0148 (0x0588 - 0x0440)
class UPInv_AssetManager : public UAssetManager
{
public:
	unsigned char                                      bHasCompletedInitialAssetScan;                            // 0x0440(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x147];                                     // 0x0441(0x0147) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PInv_AssetManager");
		return ptr;
	}

};


// Class PlatformInventoryItem.PlatformInventoryItem
// 0x00C8 (0x00F8 - 0x0030)
class UPlatformInventoryItem : public UPrimaryDataAsset
{
public:
	int                                                ItemId;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData)
	struct FText                                       ItemDisplayName;                                          // 0x0038(0x0018) (Edit, DisableEditOnInstance, DuplicateTransient)
	struct FText                                       ItemDescription;                                          // 0x0050(0x0018) (Edit, DisableEditOnInstance, DuplicateTransient)
	struct FString                                     FriendlySearchName;                                       // 0x0068(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient)
	unsigned char                                      IsOwnableInventoryItem;                                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0079(0x0028) UNKNOWN PROPERTY: SoftObjectProperty PlatformInventoryItem.PlatformInventoryItem.ItemIcon
	TArray<struct FIconReference>                      Icons;                                                    // 0x00A8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FGameplayTagContainer                       CollectionContainer;                                      // 0x00B8(0x0020) (Edit, Config, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x20];                                      // 0x00D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PlatformInventoryItem");
		return ptr;
	}


	bool ShouldDisplayToUser();
	void SetFriendlySearchName(struct FString* InFriendlyName);
	void SetCollectionContainer(struct FGameplayTagContainer* InContainer);
	void GetTextureAsync(struct FScriptDelegate* IconLoadedEvent);
	void GetSoftItemIcon();
	bool GetSoftIconByName(struct FName* IconType);
	struct FString GetItemNameAsString();
	struct FText GetItemName();
	int GetItemId();
	struct FString GetItemDescriptionAsString();
	struct FText GetItemDescription();
	void STATIC_GetItemByFriendlyName(struct FString* InFriendlyName);
	struct FGameplayTagContainer GetCollectionContainer();
};


// Class PlatformInventoryItem.PlatformStoreAsset
// 0x0010 (0x0108 - 0x00F8)
class UPlatformStoreAsset : public UPlatformInventoryItem
{
public:
	int                                                LootId;                                                   // 0x00F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, DuplicateTransient, IsPlainOldData)
	struct FPrimaryAssetRules                          Rules;                                                    // 0x00FC(0x000C) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PlatformStoreAsset");
		return ptr;
	}


	int GetLootId();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
