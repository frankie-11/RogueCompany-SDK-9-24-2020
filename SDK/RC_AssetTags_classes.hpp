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

// Class AssetTags.AssetTagsSubsystem
// 0x0000 (0x0030 - 0x0030)
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		return ptr;
	}


	TArray<struct FName> GetCollectionsContainingAssetPtr(class UObject** AssetPtr);
	TArray<struct FName> GetCollectionsContainingAssetData(struct FAssetData* AssetData);
	TArray<struct FName> GetCollectionsContainingAsset(struct FName* AssetPathName);
	TArray<struct FName> GetCollections();
	TArray<struct FAssetData> GetAssetsInCollection(struct FName* Name);
	bool CollectionExists(struct FName* Name);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
