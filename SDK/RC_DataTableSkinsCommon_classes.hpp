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

// Class DataTableSkinsCommon.DynamicSkinTable
// 0x0218 (0x0240 - 0x0028)
class UDynamicSkinTable : public UObject
{
public:
	TArray<struct FDataTableInfo>                      ActiveDataTables;                                         // 0x0028(0x0010) (ZeroConstructor, Transient)
	TArray<struct FDataTableInfo>                      InactiveDataTables;                                       // 0x0038(0x0010) (ZeroConstructor, Transient)
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                             // 0x0048(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0048(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x1D0];                                     // 0x0058(0x01D0) MISSED OFFSET
	TScriptInterface<class USkinTagAssetInterface>     SkinTagAsset;                                             // 0x0228(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0238(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.DynamicSkinTable");
		return ptr;
	}


	void RemoveDataTables(TArray<class UDataTable*>* InTables);
	void RemoveDataTable(class UDataTable** InTable);
	bool IsTablePendingAssetLoad();
	class UTexture* GetTexture(struct FName* RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(struct FName* RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(struct FName* RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(struct FName* RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(struct FName* RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(struct FName* RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(struct FName* RowName, int* Priority);
	struct FName GetNameField(struct FName* RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(struct FName* RowName, int* Priority);
	struct FLinearColor GetLinearColor(struct FName* RowName, int* Priority);
	int GetInt(struct FName* RowName, int* Priority);
	float GetFloat(struct FName* RowName, int* Priority);
	class UClass* GetClass(struct FName* RowName, int* Priority);
	bool GetBool(struct FName* RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(struct FName* RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(struct FName* RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(struct FName* RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(struct FName* RowName, int* Priority);
	class UAnimationAsset* GetAnimationAsset(struct FName* RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(struct FName* RowName, int* Priority);
	void GetAllKeywords();
	void AddDataTableWithQuery(class UDataTable** InTable, int* InPriority, struct FGameplayTagQuery* InQuery);
	void AddDataTables(TArray<struct FDataTableInfo>* InTableInfos);
	void AddDataTable(class UDataTable** InTable, int* InPriority);
};


// Class DataTableSkinsCommon.MultiSkinObject
// 0x01A8 (0x01D0 - 0x0028)
class UMultiSkinObject : public UObject
{
public:
	TArray<class UMultiSkinObject*>                    ParentSkinnedObjects;                                     // 0x0028(0x0010) (ZeroConstructor)
	TArray<TWeakObjectPtr<class UMultiSkinObject>>     ChildSkinnedObjects;                                      // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0048(0x0050) UNKNOWN PROPERTY: SetProperty DataTableSkinsCommon.MultiSkinObject.SubscribedKeywords
	unsigned char                                      bSubscribeToAllKeywords;                                  // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0099(0x0050) UNKNOWN PROPERTY: SetProperty DataTableSkinsCommon.MultiSkinObject.SubscribedMaterialPrefixes
	unsigned char                                      UnknownData02[0x18];                                      // 0x00F0(0x0018) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFinishedAllPendingLoadsDel;                             // 0x0108(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData04[0x18];                                      // 0x0118(0x0018) MISSED OFFSET
	TMap<int, struct FDynamicSkinTableMapEntry>        DynamicSkinTables;                                        // 0x0130(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FCachedRowsEntry>        CachedRows;                                               // 0x0180(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.MultiSkinObject");
		return ptr;
	}


	void UnsubscribeToKeywords(TArray<struct FName>* InKeywords);
	void UnsubscribeToKeyword(struct FName* InKeyword);
	void UnsubscribeToAllKeywords();
	void SubscribeToKeywords(TArray<struct FName>* InKeywords);
	void SubscribeToKeyword(struct FName* InKeyword);
	void SubscribeToAllKeywords();
	void RemoveParent(class UMultiSkinObject** InParent);
	class UTexture* GetTexture(struct FName* RowName, int* Priority);
	class UStaticMesh* GetStaticMesh(struct FName* RowName, int* Priority);
	class USkeletalMesh* GetSkeletalMesh(struct FName* RowName, int* Priority);
	class USelectiveAkAudioEvent* GetSelectiveAudioEvent(struct FName* RowName, int* Priority);
	class UPoseAsset* GetPoseAsset(struct FName* RowName, int* Priority);
	class UPhysicsAsset* GetPhysicsAsset(struct FName* RowName, int* Priority);
	class UParticleSystem* GetParticleSystem(struct FName* RowName, int* Priority);
	struct FName GetNameField(struct FName* RowName, int* Priority);
	class UMaterialInterface* GetMaterialInterface(struct FName* RowName, int* Priority);
	struct FLinearColor GetLinearColor(struct FName* RowName, int* Priority);
	int GetInt(struct FName* RowName, int* Priority);
	float GetFloat(struct FName* RowName, int* Priority);
	class UClass* GetClass(struct FName* RowName, int* Priority);
	bool GetBool(struct FName* RowName, int* Priority);
	class UAkAudioEvent* GetAudioEvent(struct FName* RowName, int* Priority);
	class UAnimSequence* GetAnimSequence(struct FName* RowName, int* Priority);
	class UAnimMontage* GetAnimMontage(struct FName* RowName, int* Priority);
	class UBlendSpace* GetAnimBlendSpace(struct FName* RowName, int* Priority);
	class UAimOffsetBlendSpace* GetAnimAimOffset(struct FName* RowName, int* Priority);
	void GetAllSkinKeywords();
	void AddParent(class UMultiSkinObject** InParent);
};


// Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent
// 0x0150 (0x0CC0 - 0x0B70)
class USkinnableSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	unsigned char                                      bDelaySkinUpdatesUntilTick;                               // 0x0B70(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSkinUpdateIsQueued;                                      // 0x0B71(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       SkeletalMeshKeyword;                                      // 0x0B74(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               FailSafeSkeletalMesh;                                     // 0x0B80(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PhysicsAssetKeyword;                                      // 0x0B88(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UPhysicsAsset*                               FailSafePhysicsAsset;                                     // 0x0B90(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimInstanceClassKeyword;                                 // 0x0B98(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UClass*                                      FailSafeAnimClass;                                        // 0x0BA0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      LastSkinnedAnimClass;                                     // 0x0BA8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bForceAnimationUpdateOnSkinUpdate;                        // 0x0BB0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UMultiSkinObject*                            SkinObject;                                               // 0x0BB8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAnimInitializedOnSkinnableMeshDel;                      // 0x0BC0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0BC0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x30];                                      // 0x0BD0(0x0030) MISSED OFFSET
	unsigned char                                      bAllowMaterialSkinning;                                   // 0x0C00(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             MaterialSkinningPrefixes;                                 // 0x0C08(0x0010) (ZeroConstructor, Deprecated)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0C18(0x0050) UNKNOWN PROPERTY: SetProperty DataTableSkinsCommon.SkinnableSkeletalMeshComponent.MaterialSkinningPrefixes_New
	unsigned char                                      UnknownData03[0x48];                                      // 0x0C68(0x0048) MISSED OFFSET
	int                                                ForcedLodModel_Skinned;                                   // 0x0CB0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0CB4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent");
		return ptr;
	}


	void STATIC_StaticSetForcedLOD(class USkinnedMeshComponent** InMeshComp, int* InForcedLOD);
	void SetSkeletalMeshKeyword(struct FName* InKeyword, class USkeletalMesh** InFailSafeSkeletalMesh);
	void SetPhysicsAssetKeyword(struct FName* InKeyword, class UPhysicsAsset** InFailSafePhysicsAsset);
	int SetPersistentVectorParameterOnAllMaterials(struct FName* ParameterName, struct FLinearColor* ParameterValue);
	int SetPersistentVectorParameter(int* MaterialSlot, struct FName* ParameterName, struct FLinearColor* ParameterValue);
	int SetPersistentTextureParameterOnAllMaterials(struct FName* ParameterName, class UTexture** ParameterValue);
	int SetPersistentTextureParameter(int* MaterialSlot, struct FName* ParameterName, class UTexture** ParameterValue);
	int SetPersistentScalarParameterOnAllMaterials(struct FName* ParameterName, float* ParameterValue);
	int SetPersistentScalarParameter(int* MaterialSlot, struct FName* ParameterName, float* ParameterValue);
	void SetForcedLOD_Skinned(int* InNewForcedLOD);
	void SetAnimClassKeyword(struct FName* InKeyword, class UClass** InFailSafeAnimClass);
	void RemovePersistentMaterialParameter(int* ParameterId);
	class UMultiSkinObject* GetSkinObject();
	void ForwardAnimInitialized();
};


// Class DataTableSkinsCommon.SkinnableMergedMeshComponent
// 0x0040 (0x0D00 - 0x0CC0)
class USkinnableMergedMeshComponent : public USkinnableSkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0CC0(0x0008) MISSED OFFSET
	unsigned char                                      bAlwaysUseTheFailsafeMeshWhileMerging;                    // 0x0CC8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDelayFullSkinUpdateUntilMeshMergingIsComplete;           // 0x0CC9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               BestPlaceHolderMesh;                                      // 0x0CD0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bMergeMarkedComplete;                                     // 0x0CD8(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               CachedMergeResult;                                        // 0x0CE0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0CE8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinnableMergedMeshComponent");
		return ptr;
	}


	void SetSkeletalMeshKeywords(TArray<struct FName>* InKeywords, class USkeletalMesh** InFailSafeSkeletalMesh);
	void RemoveSkeletalMeshKeyword(struct FName* InKeyword);
	void AddSkeletalMeshKeyword(struct FName* InKeyword);
};


// Class DataTableSkinsCommon.SkinObjectManagerComponent
// 0x00A0 (0x0150 - 0x00B0)
class USkinObjectManagerComponent : public UActorComponent
{
public:
	TMap<struct FName, class UMultiSkinObject*>        SkinObjects;                                              // 0x00B0(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) UNKNOWN PROPERTY: SetProperty DataTableSkinsCommon.SkinObjectManagerComponent.SkinObjectsSet

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinObjectManagerComponent");
		return ptr;
	}

};


// Class DataTableSkinsCommon.SkinTagAssetInterface
// 0x0000 (0x0028 - 0x0028)
class USkinTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinTagAssetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
