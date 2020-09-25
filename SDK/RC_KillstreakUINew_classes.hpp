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

// Class KillstreakUINew.GuidedMenuCalloutData
// 0x0028 (0x0050 - 0x0028)
class UGuidedMenuCalloutData : public UObject
{
public:
	struct FText                                       HeaderText;                                               // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	TArray<struct FGuidedCalloutCardData>              CalloutCards;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.GuidedMenuCalloutData");
		return ptr;
	}

};


// Class KillstreakUINew.GuidedMenuCalloutsViewRedirector
// 0x0010 (0x0038 - 0x0028)
class UGuidedMenuCalloutsViewRedirector : public UPUMG_ViewRedirecter
{
public:
	class UDataTable*                                  GuidedCalloutsTable;                                      // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.GuidedMenuCalloutsViewRedirector");
		return ptr;
	}


	void SetNPEGuidedCalloutSeen(EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene);
	bool HasSeenNPEGuidedCallout(EConfigPropertyGuidedCalloutScenes* GuidedCalloutScene);
};


// Class KillstreakUINew.KSWidget
// 0x0040 (0x04D8 - 0x0498)
class UKSWidget : public UPUMG_Widget
{
public:
	unsigned char                                      bIsUIOnlyWidget;                                          // 0x0498(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsExclusiveMenuWidget;                                   // 0x0499(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTickAnimationManager*                       TickAnimations;                                           // 0x04A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             ViewportEvent;                                            // 0x04A8(0x0010) (ZeroConstructor, InstancedReference)
	unsigned char                                      bSubstituteKillCamWorld;                                  // 0x04B8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bSubstituteKillCamOwningPlayer;                           // 0x04B9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bWantsKillCamCallbacks;                                   // 0x04BA(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1D];                                      // 0x04BB(0x001D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWidget");
		return ptr;
	}


	void UnbindFromViewportSizeChange();
	void TriggerGlobalInvalidate();
	void StopTickAnimation(struct FName* AnimName);
	void SkipToEndTickAnimation(struct FName* AnimName);
	void SetAllAnimationsPlaybackSpeed(float* PlaybackSpeed);
	void ResumeTickAnimation(struct FName* AnimName);
	void RemoveTickAnimation(struct FName* AnimName);
	void PlayTickAnimation(struct FName* AnimName);
	void PauseTickAnimation(struct FName* AnimName);
	bool IsInKillCamPlayback();
	void InitializeTickAnimations();
	bool GetTickAnimationInfo(struct FName* AnimName, struct FTickAnimationParams* OutAnimParams);
	class APlayerController* GetNormalOwningPlayer();
	class APlayerController* GetKillCamSpectatorController();
	class APlayerController* GetActivePlayerController();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintFinishKillCamPlayback();
	void BindToViewportSizeChange(struct FScriptDelegate* InViewportEvent);
	void AddTickAnimation(struct FName* AnimName, float* Duration, struct FScriptDelegate* UpdateEvent, struct FScriptDelegate* FinishedEvent);
};


// Class KillstreakUINew.KSAccoladeQueueWidget
// 0x0048 (0x0520 - 0x04D8)
class UKSAccoladeQueueWidget : public UKSWidget
{
public:
	unsigned char                                      IsBusy;                                                   // 0x04D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumInQueue;                                               // 0x04DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAccoladeReceived;                                       // 0x04E0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04E0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnAccoladeUpdateMultiplier;                               // 0x04F0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x04F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x20];                                      // 0x0500(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAccoladeQueueWidget");
		return ptr;
	}


	void Queue(TArray<struct FAccoladeEventEntry>* Accolades);
	void OnAccoladeRemovedFromScreen(struct FAccoladeDisplayInfo* AccoladeRemoved);
	bool GetNext(struct FAccoladeDisplayInfo* Accolade);
	void ClearAccoladeQueue();
};


// Class KillstreakUINew.KSAcquisitionModal
// 0x0000 (0x04D8 - 0x04D8)
class UKSAcquisitionModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAcquisitionModal");
		return ptr;
	}


	void SetupBindings();
	void HandleShowAcquisitionModal(class UPUMG_StoreItem** pItem);
	class UPUMG_AcquisitionManager* GetAcquisitionManager();
};


// Class KillstreakUINew.KSPawnWidget
// 0x0020 (0x04F8 - 0x04D8)
class UKSPawnWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPawnWidget");
		return ptr;
	}


	void SetPlayerStateUIRelevanceChanged();
	void SetPawn(class AKSCharacter** NewPawn);
	void PreClearPlayerState();
	void PreClearPawn();
	void PostSetPlayerState();
	void PostSetPawn();
	void OnBoundPlayerStateDestroyed(class AActor** DestroyedActor);
	void OnBoundPawnDestroyed(class AActor** DestroyedActor);
	class AKSPlayerState* GetPlayerState();
	class AKSCharacterBase* GetPawnBase();
	class AKSCharacter* GetPawn();
};


// Class KillstreakUINew.KSPawnInventoryWidget
// 0x0070 (0x0568 - 0x04F8)
class UKSPawnInventoryWidget : public UKSPawnWidget
{
public:
	TMap<uint16_t, class UKSWeaponComponentWidget*>    EquipmentWidgets;                                         // 0x04F8(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0548(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPawnInventoryWidget");
		return ptr;
	}


	bool RemoveWidgetFor(class UKSWeaponComponent** InWeaponComponent);
	class UKSWeaponComponentWidget* GetWidgetForWeaponComponent(class UKSWeaponComponent** InWeaponComponent);
	void EquipmentRemoved(class UKSWeaponComponent** RemovedEquipment);
	void EquipmentEndActive(class UKSWeaponComponent** InactiveEquipment);
	void EquipmentBecomeActive(class UKSWeaponComponent** ActiveEquipment);
	void EquipmentAdded(class UKSWeaponComponent** AddedEquipment);
	class UKSWeaponComponentWidget* CreateWeaponComponentWidgetFor(class UObject** WorldContextObject, class UKSWeaponComponent** InWeaponComponent, class UClass** WidgetClass, class APlayerController** OwningPlayer);
};


// Class KillstreakUINew.KSActiveWeaponComponentWidget
// 0x0038 (0x05A0 - 0x0568)
class UKSActiveWeaponComponentWidget : public UKSPawnInventoryWidget
{
public:
	int                                                ActiveWeaponSlot;                                         // 0x0568(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGameplayTagContainer                       EquipPointsToIgnore;                                      // 0x0570(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      bDelayClearUntilNextTick;                                 // 0x0590(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class UKSWeaponComponent>           WeakActiveWeaponComponentPtr;                             // 0x0594(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSActiveWeaponComponentWidget");
		return ptr;
	}


	void PreClearActiveWeaponComponent();
	void PostSetActiveWeaponComponent();
	class UKSWeaponComponent* GetActiveWeaponComponent();
};


// Class KillstreakUINew.KSActivity_ViewRedirector
// 0x0010 (0x0038 - 0x0028)
class UKSActivity_ViewRedirector : public UPUMG_ViewRedirecter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) UNKNOWN PROPERTY: ArrayProperty KillstreakUINew.KSActivity_ViewRedirector.ActivitiesToCheck

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSActivity_ViewRedirector");
		return ptr;
	}


	class UKSActivityManagerBase* GetRelevantActivityManager(class UKSGameInstance** GameInstance);
};


// Class KillstreakUINew.KSAimAssistDebugWidget
// 0x0008 (0x0238 - 0x0230)
class UKSAimAssistDebugWidget : public UUserWidget
{
public:
	unsigned char                                      bDrawAimAssistBoundary;                                   // 0x0230(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawHeadAimCorrectionBoundary;                           // 0x0231(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawMagnetismDebug;                                      // 0x0232(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bDrawTargetInfo;                                          // 0x0233(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAimAssistDebugWidget");
		return ptr;
	}


	class AKSPlayerController* GetOwningKSPlayer();
	class UKSAimAssistComponent* GetAimAssistComponent();
};


// Class KillstreakUINew.KSMapIconWidgetBase
// 0x0080 (0x02B0 - 0x0230)
class UKSMapIconWidgetBase : public UUserWidget
{
public:
	unsigned char                                      bDoesIconRotate;                                          // 0x0230(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MarkerAnchorHeight;                                       // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeightThreshold;                                          // 0x0238(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                UniqueId;                                                 // 0x0240(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AKSPlayerState>               CreatingPlayer;                                           // 0x0244(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EDisplayType                                       ParentMapDisplayType;                                     // 0x024C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       AssociatedActor;                                          // 0x0250(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UObject>                      AssociatedObject;                                         // 0x0258(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     DefaultLocation;                                          // 0x0260(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Lifespan;                                                 // 0x026C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UKSMapWidgetBase>             ParentMapWidget;                                          // 0x0270(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector2D                                   ScreenMargins;                                            // 0x0278(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CenterPercentageWidth;                                    // 0x0280(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CenterPercentageHeight;                                   // 0x0284(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0288(0x0010) MISSED OFFSET
	float                                              HoverDelaySeconds;                                        // 0x0298(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x029C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMapIconWidgetBase");
		return ptr;
	}


	void UpdateScreenRegion();
	void UpdateMetersAway(int* Meters);
	void UpdateMeetsHeightThreshold(bool* bHeight, bool* bDepth);
	ESlateVisibility Update();
	bool ShouldUpdateHover();
	bool ShouldUpdate();
	void SetScreenRegion(EIconMarkerScreenRegion* ScreenRegion);
	void SetLifeSpan(float* InLifespan);
	void SetArrowAngle(float* Angle);
	void OnUnhoverTimerComplete();
	void OnHoverTimerComplete();
	void OnHoverStateChanged(EIconHoverState* NewHoverState);
	void OnAssociatedActorDestroyed(class AActor** Actor);
	void IsScreenRegion(bool* InsideCenter, bool* InsideMargins);
	bool IsInCenteredScreenRect(float* PositionX, float* PositionY, float* XMargin, float* YMargin);
	bool IsHovering();
	float GetWorldYaw();
	struct FVector GetWorldPosition();
	EIconHoverState GetHoverState();
	float GetEdgeArrowAngleBase(float* Angle);
	float GetDistanceToIcon();
	void GetArrowPosition(bool* IsIconVisible, float* Angle, struct FVector2D* ArrowPosition);
};


// Class KillstreakUINew.KSAllyMarkerWidget
// 0x0048 (0x02F8 - 0x02B0)
class UKSAllyMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class UWidget*                                     ArrowWidget;                                              // 0x02B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidget*                                     NameOrStatusWidget;                                       // 0x02B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UWidget*                                     DownedSectionWidget;                                      // 0x02C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UDataTable*                                  ContextualPingTypesDT;                                    // 0x02C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ContextualPingMessagesDT;                                 // 0x02D0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x20];                                      // 0x02D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAllyMarkerWidget");
		return ptr;
	}


	void View_SetSelfPingIcon(EPingType* PingType, EPingMessage* PingMessage);
	void View_SetRevivePercent(float* PercentValue);
	void View_SetNameText(struct FText* NameText);
	void View_SetMode(EAllyMarkerState* AllyMarkerState, bool* HasBomb, bool* HasSelfPing);
	void View_SetJob(class UKSJobItem** Job);
	void View_SetHealthPercent(float* PercentValue);
	void View_AcknowledgeSelfPing(class AKSPlayerState** AcknowledingPlayer);
	void SetPlayerName();
	bool IsOwningPlayer();
	void HandleUIRelevantChanged(class AKSPlayerState** InPlayerState);
	void HandleRemoveSelfPing(class AKSPlayerState** PingingPlayer);
	void HandlePlayerDown(struct FCombatEventInfo* CombatEventInfo, int* ExpBonus);
	void HandlePlayerDeath(struct FCombatEventInfo* DeathInfo);
	void HandleOnJobChanged();
	void HandleChangeSelfPing(class AKSPlayerState** PingingPlayer, class AKSPlayerState** AcknowledgingPlayer);
	void HandleBombStateChanged(struct FKSNeutralBombState* BombState);
	void HandleAddSelfPing(class AKSPlayerState** PingingPlayer, EPingType* PingType, EPingMessage* PingMessage);
	bool GetPingIconByType(EPingType* PingType);
	bool GetPingIconByMessage(EPingMessage* PingMessage);
	bool GetPingColorByType(EPingType* PingType, struct FLinearColor* PingColor);
	struct FVector2D GetArrowPositionFromAngleBlueprint(float* Angle);
	bool FindRowByType(EPingType* PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(EPingMessage* PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	void ChangeOwnerContentVisibility(bool* bVisible);
};


// Class KillstreakUINew.KSAlphaDisclaimer
// 0x0000 (0x04D8 - 0x04D8)
class UKSAlphaDisclaimer : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAlphaDisclaimer");
		return ptr;
	}


	bool STATIC_LoadAlphaDisclaimerText(struct FString* SaveText);
};


// Class KillstreakUINew.KSWeaponWidget
// 0x0008 (0x04E0 - 0x04D8)
class UKSWeaponWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponWidget");
		return ptr;
	}


	void SetOwningWeapon(class AKSWeapon** InWeapon);
	void PreClearWeapon();
	void PostSetWeapon();
	void OtherWeaponUpdate();
	void OnOwningWeaponDestroyed(class AActor** DestroyedWeapon);
	class AKSWeapon* GetOwningWeapon();
};


// Class KillstreakUINew.KSAmmoWidget
// 0x0020 (0x0500 - 0x04E0)
class UKSAmmoWidget : public UKSWeaponWidget
{
public:
	int                                                CachedAmmoInClip;                                         // 0x04E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CachedClipSize;                                           // 0x04E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CachedInReserve;                                          // 0x04E8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CachedIsReloading;                                        // 0x04EC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x04ED(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int* OldInClip, int* OldClipSize, int* OldReserve, int* NewInClip, int* NewClipSize, int* NewReserve);
};


// Class KillstreakUINew.KSAnnouncementQueuedMessageWidget
// 0x0048 (0x0520 - 0x04D8)
class UKSAnnouncementQueuedMessageWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnEndDisplay;                                             // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FAnnouncementData                           AnnouncementData;                                         // 0x04E8(0x0038) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAnnouncementQueuedMessageWidget");
		return ptr;
	}


	void DisplayAnnouncement();
};


// Class KillstreakUINew.KSAnnouncementQueueWidget
// 0x0028 (0x0500 - 0x04D8)
class UKSAnnouncementQueueWidget : public UKSWidget
{
public:
	unsigned char                                      IsBusy;                                                   // 0x04D8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnReadyForNextAnnouncement;                               // 0x04E0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D9(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x10];                                      // 0x04F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAnnouncementQueueWidget");
		return ptr;
	}


	void Queue(struct FAnnouncementData* Announcement);
	bool GetNext(struct FAnnouncementData* Announcement);
	void ClearAnnoucementQueue();
};


// Class KillstreakUINew.KSAsyncImage
// 0x0010 (0x0268 - 0x0258)
class UKSAsyncImage : public UPUMG_AsyncImage
{
public:
	class UMaterialInstanceDynamic*                    MaterialToUse;                                            // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FName                                       MaterialParameter;                                        // 0x0260(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAsyncImage");
		return ptr;
	}


	void SetMaterialToUse(class UMaterialInstanceDynamic** InMID);
	void SetBrushFromTextureOnItem(class UPlatformInventoryItem** Item, bool* bMatchSize);
	void SetBrushFromItemIcon(class UPlatformInventoryItem** Item, bool* bMatchSize);
};


// Class KillstreakUINew.KSChatDataFactory
// 0x0000 (0x0118 - 0x0118)
class UKSChatDataFactory : public UPUMG_ChatDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSChatDataFactory");
		return ptr;
	}

};


// Class KillstreakUINew.KSComponentReticleWidgetBase
// 0x0020 (0x05C0 - 0x05A0)
class UKSComponentReticleWidgetBase : public UKSActiveWeaponComponentWidget
{
public:
	float                                              ShrinkAnimationTime;                                      // 0x05A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMaxScale;                                  // 0x05A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMinScale;                                  // 0x05A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotMinScaleSqDist;                                // 0x05AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bGrenadeCooking;                                          // 0x05B0(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bInADS;                                                   // 0x05B1(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bCachedBlockIconVisible;                                  // 0x05B2(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedWeaponAccuracy;                                     // 0x05B4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedReticleOffset;                                      // 0x05B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSComponentReticleWidgetBase");
		return ptr;
	}


	void ViewedPawnInstigatedDamageNotify(struct FCombatEventInfo* DamageInfo);
	void UpdateReticleOffset(float* OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool* IconVisible, struct FVector2D* Translation, struct FVector2D* IconScale);
	void CalculateReticleOffset(float* DeltaTime);
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.ContextActionData
// 0x0058 (0x0080 - 0x0028)
class UContextActionData : public UObject
{
public:
	struct FName                                       RowName;                                                  // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FContextAction                              RowData;                                                  // 0x0030(0x0040) (BlueprintVisible, BlueprintReadOnly)
	struct FScriptDelegate                             OnContextAction;                                          // 0x0070(0x0010) (ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.ContextActionData");
		return ptr;
	}


	void TriggerContextAction();
};


// Class KillstreakUINew.KSContextBarWidget
// 0x0068 (0x0540 - 0x04D8)
class UKSContextBarWidget : public UKSWidget
{
public:
	class UDataTable*                                  ContextActionDT;                                          // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FName, struct FRouteContextInfo>       RouteContextInfoMap;                                      // 0x04E0(0x0050) (ZeroConstructor)
	struct FName                                       ActiveRoute;                                              // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       OverrideRoute;                                            // 0x0538(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSContextBarWidget");
		return ptr;
	}


	void UpdateContextActions(TArray<class UContextActionData*>* ContextActions, struct FName* CurrentRoute);
	void SetPrompts(struct FName* Route, TArray<struct FName>* ContextNames);
	void SetPromptAction(struct FName* Route, struct FName* ContextName, struct FScriptDelegate* EventCallback);
	void SetPrompt(struct FName* Route, struct FName* ContextName);
	void SetOverrideRoute(struct FName* Route);
	void SetActiveRoute(struct FName* Route);
	void RefreshContextBar();
	void OverrideKeyButtons();
	struct FName GetCurrentContextRoute();
	void ClearPromptByKey(struct FName* Route, struct FKey* Key);
	void ClearPrompt(struct FName* Route, struct FName* ContextName);
	void ClearOverrideRoute();
	void ClearAllPrompts(struct FName* Route);
};


// Class KillstreakUINew.KSContextualPingMarkerWidget
// 0x0088 (0x0338 - 0x02B0)
class UKSContextualPingMarkerWidget : public UKSMapIconWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnPingRemovedCalled;                                      // 0x02B0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPingChangedCalled;                                      // 0x02C0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02C0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FPingInfo                                   CurrentPingInfo;                                          // 0x02D0(0x0050) (BlueprintVisible)
	class UKSPingManager*                              PingManager;                                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  ContextualPingTypesDT;                                    // 0x0328(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ContextualPingMessagesDT;                                 // 0x0330(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSContextualPingMarkerWidget");
		return ptr;
	}


	void SetupPingOnReady();
	void SetPingInfo(struct FPingInfo* PingInfoVal);
	void OnPingUnhovered(int* PingId, class AKSPlayerState** PingingPlayer);
	void OnPingHovered(int* PingId, class AKSPlayerState** PingingPlayer);
	void OnInitializePing();
	bool IsInvisiblePingType(EPingType* PingType);
	void HandleOnContextualPingRemoved(int* PingId, class AKSPlayerState** PingingPlayer);
	void HandleOnContextualPingChanged(int* PingId, class AKSPlayerState** PingingPlayer, class AKSPlayerState** AcknowledgingPlayer);
	float GetPingLifeSpan(EPingType* PingType);
	bool GetPingIconByType(EPingType* PingType);
	bool GetPingIconByMessage(EPingMessage* PingMessage);
	bool GetPingColorByType(EPingType* PingType, struct FLinearColor* PingColor);
	bool FindRowByType(EPingType* PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(EPingMessage* PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
};


// Class KillstreakUINew.KSCustomizationSelection
// 0x0008 (0x04E0 - 0x04D8)
class UKSCustomizationSelection : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSCustomizationSelection");
		return ptr;
	}


	void SetWingSuitAsset(class UKSWeaponAsset** WingSuit);
	void OnVendorLoaded(int* GroupId, TArray<int>* VendorIds);
	bool GetWingSuitItems(TArray<class UPUMG_StoreItem*>* WingSuitSkinItems);
	class UKSWeaponAsset* GetWingSuitAsset();
	bool GetWeaponSlotItems(EWeaponSlot* WeaponSlotType, class UKSJobItem** JobItem, TArray<class UPUMG_StoreItem*>* WeaponSkinItems);
	bool GetWeaponItem(EWeaponSlot* WeaponSlotType, class UKSJobItem** JobItem, class UKSWeaponAsset** Weapon);
	bool GetSkinItemsForJobItem(class UKSJobItem** JobItem, TArray<class UPUMG_StoreItem*>* JobSkinItems);
	bool GetRadialMenuItems(int* LootTableId, TArray<class UPUMG_StoreItem*>* RadialMenuItems);
	TArray<class UPUMG_StoreItem*> GetItemsForSlot(EMercCosmeticSlot* SlotType, EWeaponSlot* WeaponSlotType, class UKSJobItem** JobItem);
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSDataSocialCategory
// 0x00B8 (0x00E0 - 0x0028)
class UKSDataSocialCategory : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnPlayersUpdated;                                         // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnHeaderUpdated;                                          // 0x0038(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0038(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnMessageUpdated;                                         // 0x0048(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0048(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData03[0x78];                                      // 0x0058(0x0078) MISSED OFFSET
	TArray<class UKSDataSocialPlayer*>                 SortedPlayerList;                                         // 0x00D0(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataSocialCategory");
		return ptr;
	}


	bool TryConsumeOpenOnUpdate();
	void SetOpenOnUpdate(bool* Value);
	void SetMessageText(bool* bProcessing, struct FText* MessageText);
	void SetHeaderText(struct FText* Header);
	int Num();
	bool IsProcessing();
	TArray<class UKSDataSocialPlayer*> GetPlayerList();
	struct FText GetMessageText();
	struct FText GetHeaderText();
	unsigned char BP_GetSectionValue();
};


// Class KillstreakUINew.KSDataSocialPlayer
// 0x0018 (0x0040 - 0x0028)
class UKSDataSocialPlayer : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnDataUpdate;                                             // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UKSPlayerInfo*                               Info;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataSocialPlayer");
		return ptr;
	}


	void KSSocialPlayerUpdate__DelegateSignature(class UKSPlayerInfo** playerinfo);
	bool IsValid();
	class UKSPlayerInfo* GetPlayerInfo();
};


// Class KillstreakUINew.KSDebugMenu
// 0x0010 (0x04E8 - 0x04D8)
class UKSDebugMenu : public UKSWidget
{
public:
	TArray<struct FDebugMenuCommandInfo>               DebugCommands;                                            // 0x04D8(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDebugMenu");
		return ptr;
	}


	bool GetSubmenu(struct FDebugMenuCommandInfo* BaseCommand, TArray<struct FDebugMenuCommandInfo>* Submenu);
	void GetSortedBaseDebugCommands(TArray<struct FDebugMenuCommandInfo>* SortedCommands);
	EConsoleCommandParamType GetParamTypeForSubCommand(struct FString* BaseCommandString);
};


// Class KillstreakUINew.KSEditableTextBox
// 0x0010 (0x0A38 - 0x0A28)
class UKSEditableTextBox : public UEditableTextBox
{
public:
	struct FScriptDelegate                             OnKeyDown;                                                // 0x0A28(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEditableTextBox");
		return ptr;
	}

};


// Class KillstreakUINew.KSQueuedMessageWidget
// 0x0018 (0x04F0 - 0x04D8)
class UKSQueuedMessageWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueuedMessageWidget");
		return ptr;
	}


	void QueueMessage(struct FText* Message);
	bool GetNextMessage(struct FText* Message);
};


// Class KillstreakUINew.KSEliminationMessageWidget
// 0x0030 (0x0520 - 0x04F0)
class UKSEliminationMessageWidget : public UKSQueuedMessageWidget
{
public:
	struct FScriptMulticastDelegate                    OnReceivedMessage;                                        // 0x04F0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04F0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class APawn*                                       KillCamPawn;                                              // 0x0500(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0508(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEliminationMessageWidget");
		return ptr;
	}


	void QueueCombatMessage(struct FEliminationMessage* CombatMessage);
	void OnPlayerDownReceived(struct FCombatEventInfo* EventInfo);
	void OnPlayerDeathReceived(struct FCombatEventInfo* EventInfo);
	void OnPlayerAssistReceived(struct FAssistInfo* EventInfo);
	bool IsViewedPlayerStateSelf(class APlayerState** ViewedPlayerState);
	bool IsViewedKillCamPlayerState(class APlayerState** KillCamPlayerState);
	bool GetNextCombatMessage(struct FEliminationMessage* CombatMessage);
	void ClearCombatMessages();
};


// Class KillstreakUINew.KSEMODataFactory
// 0x00F0 (0x0128 - 0x0038)
class UKSEMODataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0038(0x000C) MISSED OFFSET
	unsigned char                                      haveRecieveMatchReport;                                   // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xA3];                                      // 0x0045(0x00A3) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnRewardsRecieved;                                        // 0x00E8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0045(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPlayerProgressionRecieved;                              // 0x00F8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x00F8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPlayerReputationRecieved;                               // 0x0108(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0108(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnRogueMasteryProgressReceived;                           // 0x0118(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x0118(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEMODataFactory");
		return ptr;
	}


	void SetupTestData();
	bool IsLocalPlayer(int64_t* PlayerId);
	void HandlePlayerRewards(struct FPlayerRewardsSummary* PlayerRewardSummary, bool* bFakeTestData);
	void HandleEOMDetail();
	struct FScoreboardStats GetScoreboardStats();
	struct FPlayerRewardsSummary GetPlayerRewardsSummary();
	int GetLastMatchQueueId();
	bool FindPlayerProgressionActivity(class UKSActivityInstance** PlayerProgressionActivity);
	void ComputeEOMResults();
	void CalcPlayerProgression(int* XpEarned, bool* bFakeTestData);
};


// Class KillstreakUINew.KSViewedPawnWidget
// 0x0010 (0x0508 - 0x04F8)
class UKSViewedPawnWidget : public UKSPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04F8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSExpDisplayWidget
// 0x0018 (0x0520 - 0x0508)
class UKSExpDisplayWidget : public UKSViewedPawnWidget
{
public:
	unsigned char                                      bIsWaitingForNextQueue;                                   // 0x0508(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0509(0x0017) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSExpDisplayWidget");
		return ptr;
	}


	void QueueExpDisplays(struct FExpDisplayInfo* ExpInfo);
	void NativeHandleDisplayExpInfo();
	bool GetNextExpDisplay(struct FExpDisplayInfo* ExpInfo);
	void DisplayExpInfo();
};


// Class KillstreakUINew.KSFloatTickLerpWidgetBase
// 0x0018 (0x0248 - 0x0230)
class UKSFloatTickLerpWidgetBase : public UUserWidget
{
public:
	float                                              LerpTime;                                                 // 0x0230(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LerpPower;                                                // 0x0234(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0238(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFloatTickLerpWidgetBase");
		return ptr;
	}


	void SetTargetValue(float* Value);
	void SetLerpTime(float* Time);
	void SetLerpPower(float* Power);
	bool IsLerping();
	float GetCurrentValue();
	void ForceCurrentValue(float* Value);
	void DisplayForValue(float* Value);
};


// Class KillstreakUINew.KSFriendDataFactory
// 0x0010 (0x0118 - 0x0108)
class UKSFriendDataFactory : public UPUMG_FriendDataFactory
{
public:
	struct FScriptMulticastDelegate                    OnUpdateRecentlyPlayedPlayers;                            // 0x0108(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0108(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFriendDataFactory");
		return ptr;
	}


	void UIX_ShowExternalProfile(int64_t* PlayerId);
	void OnEOMRewardsReceived(struct FPlayerRewardsSummary* PlayerRewardsSummary, struct FScoreboardStats* ScoreboardStats);
	void KSUpdateRecentlyPlayedPlayers__DelegateSignature(class UKSFriendDataFactory** Source);
	TArray<class UPUMG_PlayerInfo*> GetSuggestedFriends_Info();
	TArray<class UKSPlayerInfo*> GetPlayersPlayedWithThisClientSession_Info();
	TArray<class UPUMG_PlayerInfo*> GetPendingFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetOnlineFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriends_Info();
	TArray<class UPUMG_PlayerInfo*> GetFriendRequests_Info();
};


// Class KillstreakUINew.KSMapWidgetBase
// 0x00B8 (0x0590 - 0x04D8)
class UKSMapWidgetBase : public UKSWidget
{
public:
	EDisplayType                                       MapDisplayType;                                           // 0x04D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x17];                                      // 0x04D9(0x0017) MISSED OFFSET
	TMap<class AKSPlayerState*, class UKSMapIconWidgetBase*> PlayerIconMap;                                            // 0x04F0(0x0050) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0540(0x0040) MISSED OFFSET
	unsigned char                                      AbsoluteRotation;                                         // 0x0580(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      CanBeScrambled;                                           // 0x0581(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      IsScrambled;                                              // 0x0582(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bAffectedByScramble;                                      // 0x0583(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0584(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMapWidgetBase");
		return ptr;
	}


	void UpdateIcon(class UKSMapIconWidgetBase** Icon);
	struct FVector2D ToIconRenderCoords(struct FVector2D* MapCoords);
	float ToIconRenderAngle(float* PlayerAngle);
	void TickCachedTransform();
	void SetScrambleState(bool* Scrambled);
	void OnScrambleStateChanged(bool* Scrambled);
	void OnReceiveDisplayWidgetInfo(struct FDisplayInfo* DisplayInfo);
	void OnGameStateSet(class AGameStateBase** GameStateBase);
	bool IsOnMap(struct FVector2D* MapCoords);
	float GetDistanceToIcon(class UKSMapIconWidgetBase** Icon);
	class APawn* GetCachedViewedPawn();
	struct FTransform GetCachedTransform();
	class UKSMapIconWidgetBase* CreateNewIconWidget(class UClass** WidgetClass, int* UniqueId, class AKSPlayerState** CreatingPlayer, EDisplayType* ParentMapDisplayType, class AActor** AssociatedActor, class UObject** AssociatedObject, struct FVector* DefaultLocation, float* Lifespan);
};


// Class KillstreakUINew.KSFullMapWidget
// 0x0010 (0x05A0 - 0x0590)
class UKSFullMapWidget : public UKSMapWidgetBase
{
public:
	float                                              MinimapWidth;                                             // 0x0590(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0594(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFullMapWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSHUDCommon
// 0x0078 (0x0520 - 0x04A8)
class AKSHUDCommon : public APUMG_HUD
{
public:
	struct FScriptMulticastDelegate                    OnPreferredSiteUpdated;                                   // 0x04A8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04A8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UPUMG_LoginDataFactory*                      LoginDataFactory;                                         // 0x04B8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSSettingsDataFactory*                      SettingsFactory;                                          // 0x04C0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSChatDataFactory*                          ChatDataFactory;                                          // 0x04C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSPartyDataFactory*                         PartyDataFactory;                                         // 0x04D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSLoadoutDataFactory*                       LoadoutDataFactory;                                       // 0x04D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSMercManager*                              MercManager;                                              // 0x04E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	class UKSNPEDataFactory*                           NPEDataFactory;                                           // 0x04E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bDisplayWatermark;                                        // 0x04F0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkAlpha;                                           // 0x04F4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetLeft;                                      // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetTop;                                       // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetRight;                                     // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkOffsetBottom;                                    // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	float                                              WatermarkChangePositionTime;                              // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData)
	class UDataTable*                                  ColorPaletteDT;                                           // 0x0510(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  FontPaletteDT;                                            // 0x0518(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHUDCommon");
		return ptr;
	}


	void TestChallengeNotification();
	void ShowErrorPopup(struct FText* ErrorMsg);
	bool ShouldShowCrossplayIconForPlayerState(class AKSPlayerState** PlayerState);
	bool ShouldShowCrossplayIconForPlayer(int64_t* PlayerId);
	void SetPreferredSiteId(int* SiteId);
	void PrintToLog(struct FText* InText);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player);
	void LogErrorMessage(struct FText* ErrorMsg);
	bool IsSamePortalAsLocalPlayer(int64_t* PlayerId);
	void HandleOpenTextChat(bool* BeginChatCommand);
	void HandleControllerDisconnect();
	class UKSUISessionManager* GetUISessionManager();
	void GetSiteList(TMap<int, struct FText>* OutSiteIdToNameMap);
	class UKSSettingsDataFactory* GetSettingsDataFactory();
	bool GetPreferredSiteId(int* OutSiteId);
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSNPEDataFactory* GetNPEDataFactory();
	class UKSMercManager* GetMercManager();
	class UPUMG_LoginDataFactory* GetLoginDataFactory();
	class UKSLoadoutDataFactory* GetLoadoutDataFactory();
	class UKSStoreItemHelper* GetItemHelper();
	bool GetFont(struct FName* FontName, struct FSlateFontInfo* ReturnFont);
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	class UKSContextBarWidget* GetContextBarWidget();
	bool GetColor(struct FName* ColorName, struct FLinearColor* ReturnColor);
	class UKSChatDataFactory* GetChatDataFactory();
	class UKSAcquisitionManager* GetAcquisitionManager();
	void DisplayWatermark();
	void ApplySafeFrameScale(float* SafeFrameScale);
};


// Class KillstreakUINew.KSGameHUDNew
// 0x0098 (0x05B8 - 0x0520)
class AKSGameHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0520(0x0008) MISSED OFFSET
	class UClass*                                      AimAssistDebugWidgetClass;                                // 0x0528(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TWeakObjectPtr<class UUserWidget>                  AimAssistDebugWidget;                                     // 0x0530(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TArray<struct FDataTableInfo>                      BaseAssetDataTables;                                      // 0x0538(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UDynamicSkinTable*                           AssetDataTableManager;                                    // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UMultiSkinObject*                            SkinObject;                                               // 0x0550(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UKSHUDStateTracker*                          HUDStateTracker;                                          // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x58];                                      // 0x0560(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGameHUDNew");
		return ptr;
	}


	void UIX_ReturnLobby();
	bool UIX_MutePlayer(class AKSPlayerState** KSPlayerState, bool* Mute);
	void ToggleAimAssistDebug();
	void SetHUDVisible(bool* bVisible);
	void ReturnToHome();
	void OnViewedPlayerStateModRemoved(class UKSPlayerMod** PlayerMod, class UKSPlayerModInstance** ModInstance);
	void OnViewedPlayerStateModAdded(class UKSPlayerMod** PlayerMod, class UKSPlayerModInstance** ModInstance);
	void OnViewedPawnChanged(class AKSPlayerController** Controller, class AActor** OldViewTarget, class AActor** NewViewTarget);
	void OnToggleHUD();
	void OnAssetDataTableManagerChanged();
	bool IsPlayerMuted(class AKSPlayerState** KSPlayerState);
	void HandleLoginStateChange(EPUMG_LoginState* LoginState);
	void HandleFubar();
	class UKSHUDStateTracker* GetHUDStateTracker();
};


// Class KillstreakUINew.KSGameInfoOverlayBase
// 0x0020 (0x04F8 - 0x04D8)
class UKSGameInfoOverlayBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x04D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGameInfoOverlayBase");
		return ptr;
	}


	void HandlePlayerStateReady(class AKSPlayerState** PlayerState);
};


// Class KillstreakUINew.KSGamepadPromptWidget
// 0x0010 (0x04E8 - 0x04D8)
class UKSGamepadPromptWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGamepadPromptWidget");
		return ptr;
	}


	void SetContext(struct FButtonPromptContext* PromptContext);
	void PushContext(struct FButtonPromptContext* PromptContext);
	bool PopContext(struct FButtonPromptContext* OutContext);
	void ClearAllContext();
	void ApplyContext(struct FButtonPromptContext* Context);
};


// Class KillstreakUINew.KSHealthWidget
// 0x0020 (0x0518 - 0x04F8)
class UKSHealthWidget : public UKSPawnWidget
{
public:
	float                                              CachedHealth;                                             // 0x04F8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CachedArmor;                                              // 0x04FC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CachedMaxHealth;                                          // 0x0500(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CachedOverheal;                                           // 0x0504(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0508(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHealthWidget");
		return ptr;
	}


	void OverhealChangeFromChar(class AKSCharacterBase** Character, bool* bAnimatedChange);
	void OnOverhealChanged(float* OldOverheal, float* NewOverheal, bool* bAnimatedChange);
	void OnHealthChanged(float* OldHealth, float* OldMaxHealth, float* NewHealth, float* NewMaxHealth, bool* bAnimatedChange);
	void OnArmorChanged(float* OldArmor, float* NewArmor);
	void HealthChangeFromChar(class AKSCharacterBase** Character, bool* bAnimatedChange);
	void HandlePawnOverhealChange(class AKSCharacterBase** Character);
	void HandlePawnHealthChange(class AKSCharacterBase** Character);
};


// Class KillstreakUINew.KSHUDStateTracker
// 0x0028 (0x0050 - 0x0028)
class UKSHUDStateTracker : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnHUDMatchPhaseChanged;                                   // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              PhaseTime;                                                // 0x0038(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       TrackedCurrentMatchPhase;                                 // 0x003C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0044(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHUDStateTracker");
		return ptr;
	}


	void PollMatchPhase();
	void HandleUpdatedMatchPhase(struct FName* NewPhaseName, struct FName* PreviousPhaseName);
	void HandleGameStateBeginPlay(class AKSGameState** GameState);
};


// Class KillstreakUINew.KSInfoActorWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UKSInfoActorWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInfoActorWidgetInterface");
		return ptr;
	}


	bool SetInfoActor(class AKSWidgetInfoActor** InfoActor);
};


// Class KillstreakUINew.KSInputManager
// 0x0000 (0x00D8 - 0x00D8)
class UKSInputManager : public UPUMG_InputManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInputManager");
		return ptr;
	}

};


// Class KillstreakUINew.KSInspectPlayerInterface
// 0x0000 (0x0028 - 0x0028)
class UKSInspectPlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInspectPlayerInterface");
		return ptr;
	}


	void UnbindEventFromInspectPlayerChanged(struct FScriptDelegate* Callback);
	class AKSPlayerState* GetInspectPlayerState();
	void BindEventToInspectPlayerChanged(struct FScriptDelegate* Callback);
};


// Class KillstreakUINew.KSJobSelectionWidget
// 0x0000 (0x04D8 - 0x04D8)
class UKSJobSelectionWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSJobSelectionWidget");
		return ptr;
	}


	void RefreshJobItems();
	void OnJobVendorLoaded(int* GroupId, TArray<int>* VendorIds);
	TArray<class UPUMG_StoreItem*> GetJobStoreItems();
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSKevinTest
// 0x0000 (0x04D8 - 0x04D8)
class UKSKevinTest : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSKevinTest");
		return ptr;
	}


	int RequestJobItems();
	TArray<class UPUMG_StoreItem*> GetJobStoreItems();
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSLoadoutDataFactory
// 0x0000 (0x00B0 - 0x00B0)
class UKSLoadoutDataFactory : public UPUMG_LoadoutDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoadoutDataFactory");
		return ptr;
	}


	bool GetEquippedAccountItem(EPlayerAccountSlot* eSlot, class UKSItem** EquippedItem);
	bool EquipAccountItemToSlot(EPlayerAccountSlot* eSlot, class UKSItem** Item, bool* bSave);
	void CheckForDefaultCosmeticItemsForJob(class UKSJobItem** JobItem, class UPUMG_Loadout** Loadout);
	void CheckForDefaultCosmeticItems();
	void AssignDefaultCosmeticItemsToJob(class UKSJobItem** JobItem, class UPUMG_Loadout** Loadout);
};


// Class KillstreakUINew.KSLobbyHUDNew
// 0x00E0 (0x0600 - 0x0520)
class AKSLobbyHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0520(0x0018) MISSED OFFSET
	class UKSQueueDataFactory*                         QueueDataFactory;                                         // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSFriendDataFactory*                        FriendDataFactory;                                        // 0x0540(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSPlayerQueryDataFactory*                   PlayerQueryDataFactory;                                   // 0x0548(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSEMODataFactory*                           EMODataFactory;                                           // 0x0550(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSPlayerDataFactory*                        PlayerDataFactory;                                        // 0x0558(0x0008) (ZeroConstructor, IsPlainOldData)
	class UKSPlayerWhoDataFactory*                     PlayerWhoDataFactory;                                     // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UKSMediaPlayerWidget>         CurrentMediaPlayerWidget;                                 // 0x0568(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0570(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnTriggerBlockerChange;                                   // 0x0578(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0570(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      EnablePreMatchAnimation;                                  // 0x0588(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      EnablePostMatchAnimation;                                 // 0x0589(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      EnableEOMIdleAnimation;                                   // 0x058A(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                LastWhatsNewVersion;                                      // 0x058C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FScriptMulticastDelegate                    LobbyWidgetReady;                                         // 0x0590(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0590(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    MainLobbyCameraSet;                                       // 0x05A0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x05A0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    LoginCameraSet;                                           // 0x05B0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData05[0xF];                                       // 0x05B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    BeginPlayingPreMatchAnim;                                 // 0x05C0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData06[0xF];                                       // 0x05C0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    EndPlayingPreMatchAnim;                                   // 0x05D0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData07[0xF];                                       // 0x05D0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    EndPlayingPostMatchAnim;                                  // 0x05E0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData08[0xF];                                       // 0x05E0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	ELobbyCharacterAnimState                           CurrentLobbyCharacterAnimState;                           // 0x05F0(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EPUMG_MatchStatus                                  CurrentMatchStatus;                                       // 0x05F1(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LoadingScreenFadeInDelay;                                 // 0x05F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              LoadingScreenFadeInDuration;                              // 0x05FC(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLobbyHUDNew");
		return ptr;
	}


	void UpdateLobbySkinToEquippedSkin();
	bool UIX_MutePlayer(class UPUMG_PlayerInfo** PlayerData, bool* Mute);
	void TransitionCamera(struct FName* CameraTag, float* BlendTime);
	void ToggleDisablePartyLobbyCharacters(bool* Disable);
	void TestPostMatchLobby();
	void ShowPopupConfirmation(struct FText* Message, ESocialMessageType* MessageType);
	void SetNewLobbyAnimState(ELobbyCharacterAnimState* TargetState);
	void ResetLobbyCharactersByIndex(TArray<ELobbyCharacterIndex>* IndicesToReset);
	void ResetLobbyCharacters();
	void PlayLoopingLevelSequence(struct FName* LvlSeqTag);
	void OnStoreVendorsLoaded(int* GroupId, TArray<int>* VendorIds);
	void OnNotEnoughCurreny(class UPUMG_StorePurchaseRequest** PurchaseRequest);
	void NotifyViewStateChange(struct FName* NewRoute, struct FName* PreviousRoute);
	bool IsPlayerMuted(class UPUMG_PlayerInfo** PlayerData);
	void HandleSpecificPartyIdDataUpdated(int64_t* PlayerId);
	void HandleSpecificPartyDataUpdated(struct FPUMG_PartyMemberData* PartyMember);
	void HandleSpecificPartyDataAdded(struct FPUMG_PartyMemberData* PartyMember);
	void HandleReturnFromBattleLevelSeqStopped();
	void HandlePlayerLoadoutsUpdated();
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember, int* MemberIndex);
	void HandlePartyDataUpdated();
	void HandleMatchStatusUpdated(EPUMG_MatchStatus* MatchStatus);
	void HandleLoginUserChange();
	void HandleLoginStateChange(EPUMG_LoginState* LoginState);
	void HandleExitToGameLevelSeqStopped();
	void HandleDenyPartyInvitation();
	void HandleAcceptPartyInvitation();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UKSPlayerQueryDataFactory* GetPlayerQueryDataFactory();
	class UPUMG_PlayerDataFactory* GetPlayerDataFactory();
	class UKSLobbyWidget* GetLobbyWidget();
	bool GetLobbyCharacterByPosition(ELobbyCharacterIndex* CharacterIndex, class AKSLobbyCharacter** LobbyCharacter);
	class UKSQueueDataFactory* GetKSQueueDataFactory();
	class UKSJsonDataFactory* GetJsonDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	class UKSEMODataFactory* GetEMODataFactory();
	void ForceEulaAccept();
	void CreateInitialPlayerLoadout();
	void CheckForVoucherRedemption();
	void CheckForExistingPenaltyTime();
	void CancelExitToGameLevelAnimStoppedHandling();
};


// Class KillstreakUINew.KSLobbyWidget
// 0x0000 (0x04D8 - 0x04D8)
class UKSLobbyWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLobbyWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginExistingBase
// 0x0000 (0x04D8 - 0x04D8)
class UKSLoginExistingBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginExistingBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginInventoryCheckViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSLoginInventoryCheckViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginInventoryCheckViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginInventoryCheck
// 0x0018 (0x04F0 - 0x04D8)
class UKSLoginInventoryCheck : public UKSWidget
{
public:
	float                                              TimeUntilForcedProceed;                                   // 0x04DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginInventoryCheck");
		return ptr;
	}


	float GetTimeUntilForcedProceed();
	float GetTimeElapsed();
};


// Class KillstreakUINew.KSLoginProcessRewardsViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSLoginProcessRewardsViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginProcessRewardsViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginProcessRewards
// 0x0000 (0x04D8 - 0x04D8)
class UKSLoginProcessRewards : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginProcessRewards");
		return ptr;
	}


	void ProcessAccountRewards();
};


// Class KillstreakUINew.KSLootSiteIconWidget
// 0x0008 (0x02B8 - 0x02B0)
class UKSLootSiteIconWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLootSiteIconWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLootSiteMarkerWidget
// 0x0020 (0x02D0 - 0x02B0)
class UKSLootSiteMarkerWidget : public UKSMapIconWidgetBase
{
public:
	class AKSLootSiteBase*                             MarkedLootSite;                                           // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDisplayDistance;                                       // 0x02B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bViewedPawnHasEndedFreeFall;                              // 0x02BC(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<ELootSiteRarity>                            TagsToHide;                                               // 0x02C0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLootSiteMarkerWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLowAmmoAlertWidget
// 0x0020 (0x05C0 - 0x05A0)
class UKSLowAmmoAlertWidget : public UKSActiveWeaponComponentWidget
{
public:
	float                                              LowAmmoThreshold;                                         // 0x05A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ELowAmmoState                                      CachedLowAmmoState;                                       // 0x05A4(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnAmmoStateChangedDel;                                    // 0x05A8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x05A5(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x8];                                       // 0x05B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLowAmmoAlertWidget");
		return ptr;
	}


	ELowAmmoState GetAmmoState();
	ELowAmmoState CalcAmmoState();
	void AmmoStateChanged();
};


// Class KillstreakUINew.KSMarkerDisplayBase
// 0x0080 (0x0610 - 0x0590)
class UKSMarkerDisplayBase : public UKSMapWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0590(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMarkerDisplayBase");
		return ptr;
	}


	bool GetScreenPositionForMarker(struct FVector* TargetLocation, float* AnchorHeight, float* MarginX, float* MarginY, struct FVector2D* ScreenLocation);
};


// Class KillstreakUINew.KSDataMassInviteBase
// 0x0050 (0x0078 - 0x0028)
class UKSDataMassInviteBase : public UObject
{
public:
	struct FText                                       Title;                                                    // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ButtonLabel;                                              // 0x0040(0x0018) (Edit, BlueprintVisible)
	struct FScriptDelegate                             OnShouldShow;                                             // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnClose;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataMassInviteBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSDataIndividualInviteSetup
// 0x0020 (0x0098 - 0x0078)
class UKSDataIndividualInviteSetup : public UKSDataMassInviteBase
{
public:
	struct FScriptDelegate                             OnGetIsSelected;                                          // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)
	struct FScriptDelegate                             OnSelect;                                                 // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataIndividualInviteSetup");
		return ptr;
	}


	class UKSDataIndividualInviteSetup* SetCallbacks(struct FScriptDelegate* GetIsSelected, struct FScriptDelegate* Select, struct FScriptDelegate* ShouldShowPlayer, struct FScriptDelegate* Close);
	EKSInviteSelectResult KSInviteSelect__DelegateSignature(class UKSPlayerInfo** playerinfo);
	bool KSInviteGetIsSelected__DelegateSignature(class UKSPlayerInfo** playerinfo);
};


// Class KillstreakUINew.KSDataBatchInviteSetup
// 0x0010 (0x0088 - 0x0078)
class UKSDataBatchInviteSetup : public UKSDataMassInviteBase
{
public:
	struct FScriptDelegate                             OnSelect;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataBatchInviteSetup");
		return ptr;
	}


	class UKSDataBatchInviteSetup* SetCallbacks(struct FScriptDelegate* Select, struct FScriptDelegate* ShouldShowPlayer, struct FScriptDelegate* Cancel);
	void KSBatchSelect__DelegateSignature(TArray<class UKSPlayerInfo*>* playerinfo);
};


// Class KillstreakUINew.KSMassInviteModal
// 0x0018 (0x04F0 - 0x04D8)
class UKSMassInviteModal : public UKSWidget
{
public:
	TArray<class UKSPlayerInfo*>                       SelectedPlayers;                                          // 0x04D8(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UKSDataMassInviteBase*                       RouteData;                                                // 0x04E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMassInviteModal");
		return ptr;
	}


	bool UpdateRouteData();
	EKSInviteSelectResult SelectPlayer(class UKSPlayerInfo** Player);
	void RequestFriends(struct FScriptDelegate* OnReceivePlayers);
	void KSInviteReceivePlayers__DelegateSignature(TArray<class UKSPlayerInfo*>* Players);
	bool GetShouldSelect(class UKSPlayerInfo** Player);
	void CloseScreen(EKSInviteCloseAction* CloseAction);
};


// Class KillstreakUINew.KSMatchInvitationModal
// 0x0018 (0x04F0 - 0x04D8)
class UKSMatchInvitationModal : public UKSWidget
{
public:
	struct FName                                       RouteName;                                                // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET
	struct FTimerHandle                                InvitationExpireTimeout;                                  // 0x04E8(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMatchInvitationModal");
		return ptr;
	}


	void ShowInvitation(class UKSPlayerInfo** playerinfo, struct FClientQueueInfo* QueueInfo);
	void ShowError(struct FText* ErrorMessage);
	void OnInvitationExpired();
	void HandleReceivePlayerName(class UPUMG_PlayerInfo** playerinfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	float GetInvitationTotalTimeToExpire();
	float GetInvitationTimeRemaining();
	void DeclineInvite();
	void CloseScreen();
	void AcceptInvite(int* mapId);
};


// Class KillstreakUINew.KSMatchResult
// 0x0048 (0x0520 - 0x04D8)
class UKSMatchResult : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x04D8(0x000C) MISSED OFFSET
	float                                              FinalResultEndTime;                                       // 0x04E4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRoundResultAnnoucement                     RoundResultAnnoucement;                                   // 0x04E8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	int                                                pTeamNum;                                                 // 0x0508(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pOpposeTeamNum;                                           // 0x050C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pTeamScore;                                               // 0x0510(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                pOpposeTeamScore;                                         // 0x0514(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsEndOfMatch;                                            // 0x0518(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bMatchEndedInSurrender;                                   // 0x0519(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMatchResult");
		return ptr;
	}


	void UpdateRoundBaseScore(class AKSGameState_RoundGame** pGameState);
	void UpdateResultStatus(EGameResult* Result, struct FText* Status);
	void ProcessResultAnnoucement(EGameResult* Result);
	void HandleResultReceived(struct FRoundResultAnnoucement* ResultAnnoucement);
	void HandleEndOfMatch();
	void GetTeamNames(struct FText* pTeamName, struct FText* pOpposingTeamName);
	void GetSurrenderText(struct FText* pSurrenderText);
};


// Class KillstreakUINew.KSMediaPlayerWidget
// 0x0058 (0x0530 - 0x04D8)
class UKSMediaPlayerWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.KSMediaPlayerWidget.MediaPlayerPlaylistEntries
	unsigned char                                      UnknownData01[0x30];                                      // 0x0500(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMediaPlayerWidget");
		return ptr;
	}


	void UIX_SkipEntry();
	void OnShouldShowPromptChanged(bool* bCanSkipEntry);
	void OnReadyForPlayback(class UPlatformMediaSource** PlatformMediaSource, class UAkAudioEvent** PlayEvent, class UAkAudioEvent** StopEvent);
	void OnEndLoadingPlaylist();
	void OnBeginLoadingPlaylist();
	bool IsCurrentEntrySkippable();
};


// Class KillstreakUINew.KSMercManager
// 0x0008 (0x0030 - 0x0028)
class UKSMercManager : public UObject
{
public:
	class APUMG_HUD*                                   MyHud;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMercManager");
		return ptr;
	}


	void Uninitialize();
	bool IsItemEquippedInSlot(class UKSItem** CosmeticItem, EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem);
	bool IsItemEquippedInAnySlot(class UKSItem** CosmeticItem, EMercCosmeticSlot* eSlot, TArray<int>* SlotPosition, class UKSJobItem** JobItem);
	void Initialize(class APUMG_HUD** InHud);
	class UKSLoadoutDataFactory* GetLoadoutDataFactory();
	bool GetEquippedCosmeticItemBySlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem, class UKSItem** CosmeticItem);
	bool EquipCosmeticItemToSlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem, class UKSItem** CosmeticItem, bool* bGlobal);
	void ClearCosmeticItemOnSlot(EMercCosmeticSlot* eSlot, int* SlotPosition, class UKSJobItem** JobItem);
};


// Class KillstreakUINew.KSMinimapWidgetBase
// 0x0010 (0x05A0 - 0x0590)
class UKSMinimapWidgetBase : public UKSMapWidgetBase
{
public:
	EMinimapWidgetClampStyle                           ClampStyle;                                               // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0591(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMinimapWidgetBase");
		return ptr;
	}


	void UpdateMapMaterialTransform(class UMaterialInstanceDynamic** MapMaterial, float* NormalizedX, float* NormalizedY, float* Rotation, float* Scale);
};


// Class KillstreakUINew.KSModelViewer
// 0x0000 (0x0028 - 0x0028)
class UKSModelViewer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModelViewer");
		return ptr;
	}


	void STATIC_ViewModelByName(class UObject** WorldContextObject, struct FName* InTargetItem, class UDataTable** InDataTable);
	void STATIC_ViewModelAttachment(class UObject** WorldContextObject, class UKSWeaponAttachment** InAttachment, struct FName* InSpawnOnActorName, unsigned char* Slot);
	void STATIC_ViewModel(class UObject** WorldContextObject, class UKSItem** InItem, struct FName* InSpawnOnActorName, EWeaponStateNew* DefaultWeaponState, bool* InScaleToFitTargetActor, struct FRotator* InDefaultRotation, bool* InBindControllerToSpawner);
	void STATIC_UnbindControllerFromSpawner(class UObject** WorldContextObject, struct FName* InSpawnActorName);
	void STATIC_UnbindAllControllersFromSpawners(class UObject** WorldContextObject);
	void STATIC_SetAnimation(class UObject** WorldContextObject, class UAnimSequence** InAnim, struct FName* InSpawnOnActorName, bool* bLooping);
	void STATIC_HideModelAttachment(class UObject** WorldContextObject, struct FName* InSpawnOnActorName, unsigned char* Slot);
	void STATIC_ClearModelAttachments(class UObject** WorldContextObject, struct FName* InSpawnOnActorName);
	void STATIC_ClearModel(class UObject** WorldContextObject, struct FName* InSpawnOnActorName);
	bool STATIC_BindDelForWeaponModelSet(class UObject** WorldContextObject, struct FName* InSpawnOnActorName, struct FScriptDelegate* InEventCallback);
	void STATIC_BindControllerToSpawner(class UObject** WorldContextObject, struct FName* InSpawnActorName);
};


// Class KillstreakUINew.KSModWidget_DetectEnemy
// 0x0018 (0x04F0 - 0x04D8)
class UKSModWidget_DetectEnemy : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModWidget_DetectEnemy");
		return ptr;
	}


	void OnDetectChanged(class UKSModInst_DetectEnemy** DetectEnemyModInst, bool* bIsDetectingEnemy);
	class UHorizontalBox* GetIconBox();
};


// Class KillstreakUINew.KSModWidgetInterface
// 0x0000 (0x0028 - 0x0028)
class UKSModWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModWidgetInterface");
		return ptr;
	}


	bool RemoveModInstance(class UKSPlayerModInstance** InInstance);
	bool AddModInstance(class UKSPlayerModInstance** InInstance);
};


// Class KillstreakUINew.KSNewsRotatorData
// 0x0020 (0x0048 - 0x0028)
class UKSNewsRotatorData : public UObject
{
public:
	class UTexture2DDynamic*                           Image;                                                    // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ENewsActions                                       PanelAction;                                              // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     ActionDetails;                                            // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNewsRotatorData");
		return ptr;
	}

};


// Class KillstreakUINew.KSNewsRotatorWidget
// 0x0018 (0x04F0 - 0x04D8)
class UKSNewsRotatorWidget : public UKSWidget
{
public:
	struct FString                                     JsonSection;                                              // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate)
	float                                              TimePerSection;                                           // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNewsRotatorWidget");
		return ptr;
	}


	void OnJsonChanged();
	TArray<class UKSNewsRotatorData*> GetPanelData();
	class UKSJsonDataFactory* GetJsonDataFactory();
};


// Class KillstreakUINew.KSNPEDataFactory
// 0x0000 (0x0038 - 0x0038)
class UKSNPEDataFactory : public UPUMG_DataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNPEDataFactory");
		return ptr;
	}


	void UIX_ClaimTutorialActivity();
	void UIX_ClaimRegionSelectedActivity();
	void SkipTutorial();
	void QueueTutorial();
	bool HasClaimedActivity(EKSNPEActivityType* ActivityType);
	class UKSQueueDataFactory* GetQueueDataFactory();
	void ClaimActivity(EKSNPEActivityType* ActivityType);
};


// Class KillstreakUINew.KSPartyDataFactory
// 0x0000 (0x0168 - 0x0168)
class UKSPartyDataFactory : public UPUMG_PartyDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPartyDataFactory");
		return ptr;
	}


	void BroadcastPartyInvitationError(struct FText* InvitationError);
};


// Class KillstreakUINew.KSPartyManagerWidgetBase
// 0x0000 (0x04D8 - 0x04D8)
class UKSPartyManagerWidgetBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPartyManagerWidgetBase");
		return ptr;
	}


	void RefreshFromPartyData();
	void HandlePartyMemberUpdateByName(struct FText* PlayerName);
	void HandlePartyMemberUpdateByInfo(class UPUMG_PlayerInfo** playerinfo);
	void HandlePartyMemberUpdateById(int64_t* PlayerId);
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* MemberData);
	class UPUMG_PlayerInfo* GetSuggestedInvite();
	class UKSPartyDataFactory* GetPartyDataFactory();
	void ApplyPartyData(TArray<struct FPUMG_PartyMemberData>* PartyMembers);
};


// Class KillstreakUINew.KSPerkTreeBase
// 0x0040 (0x0518 - 0x04D8)
class UKSPerkTreeBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnPerkHovered;                                            // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPerkSelected;                                           // 0x04E8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x04E8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPerkUnlockRequest;                                      // 0x04F8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x04F8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UWidget*                                     HoverTarget;                                              // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0510(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeBase");
		return ptr;
	}


	void SetCursorLerping(bool* bLerping);
	void RefreshEdge(class UKSPerkTreeEdgeBase** Edge, int* column, int* Row, TMap<struct FIntPoint, class UKSPerkTreeNodeBase*>* NodesMap);
	TMap<struct FIntPoint, class UKSPerkTreeNodeBase*> InitializeNodes();
	void HandleTreeNodeSelected(class UKSPerkTreeNodeBase** SelectedNode, struct FCustomLoadoutItem* SelectedPerk, bool* bAlreadyEquipped);
	void HandleTreeNodeHovered(class UKSPerkTreeNodeBase** HoveredNode, struct FCustomLoadoutItem* HoveredPerk);
	class UWidget* GetHoverCursor();
	class UKSPerkTreeNodeBase* GetDefaultFocusNode();
	void BindNode(class UKSPerkTreeNodeBase** TreeNode);
};


// Class KillstreakUINew.KSPerkTreeEdgeBase
// 0x0018 (0x04F0 - 0x04D8)
class UKSPerkTreeEdgeBase : public UKSWidget
{
public:
	unsigned char                                      bTopEnabled;                                              // 0x04D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bLeftEnabled;                                             // 0x04D9(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bDiagonalEnabled;                                         // 0x04DA(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      bBackDiagonalEnabled;                                     // 0x04DB(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FLinearColor                                AccentColor;                                              // 0x04DC(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeEdgeBase");
		return ptr;
	}


	void SetViewByState(struct FKSPerkTreeEdgeInfo* EdgeInfo);
};


// Class KillstreakUINew.KSPerkTreeNodeBase
// 0x0060 (0x0538 - 0x04D8)
class UKSPerkTreeNodeBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.KSPerkTreeNodeBase.AssignedPerk
	struct FScriptMulticastDelegate                    OnTreeNodeHovered;                                        // 0x0500(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0500(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnTreeNodeSelected;                                       // 0x0510(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0510(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnRequestPerkPurchase;                                    // 0x0520(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0520(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      bIsPlaceholder;                                           // 0x0530(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EPerkTreeNodeState                                 NodeState;                                                // 0x0531(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeNodeBase");
		return ptr;
	}


	void SetNodeState(EPerkTreeNodeState* NewNodeState);
	void RefreshView();
	EPerkTreeNodeState GetNodeState();
};


// Class KillstreakUINew.KSViewedActiveWeaponWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSViewedActiveWeaponWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveWeaponWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerAmmoLoaderWidget
// 0x0118 (0x0608 - 0x04F0)
class UKSPlayerAmmoLoaderWidget : public UKSViewedActiveWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x04F0(0x0028) UNKNOWN PROPERTY: SoftClassProperty KillstreakUINew.KSPlayerAmmoLoaderWidget.PendingAmmoWidgetClass
	class UClass*                                      LoadedAmmoWidgetClass;                                    // 0x0518(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x0520(0x00E8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerAmmoLoaderWidget");
		return ptr;
	}


	void SetActiveAmmoWidget(class UClass** NewWidgetClass, class AKSWeapon** NewWeapon);
	class UKSAmmoWidget* GetActiveAmmoWidget();
	void ClearActiveAmmoWidget();
};


// Class KillstreakUINew.KSPlayerCardModuleBase
// 0x0010 (0x04E8 - 0x04D8)
class UKSPlayerCardModuleBase : public UKSWidget
{
public:
	class UPUMG_PlayerInfo*                            AssignedPlayerInfo;                                       // 0x04D8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x04E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerCardModuleBase");
		return ptr;
	}


	void View_SetPlayer(class UPUMG_PlayerInfo** playerinfo, EKSPlayerOnlineStatus* PlayerStatus, bool* IsPortalFriend, bool* IsPending);
	void OnPlayerUpdate(class UPUMG_PlayerInfo** playerinfo, EKSPlayerOnlineStatus* PlayerStatus, bool* IsPortalFriend, bool* IsPending);
	void HandlePlayerDataUpdated(class UPUMG_PlayerInfo** playerinfo);
};


// Class KillstreakUINew.KSPlayerDataFactory
// 0x0018 (0x00C8 - 0x00B0)
class UKSPlayerDataFactory : public UPUMG_PlayerDataFactory
{
public:
	class UKSPlayerStatsManager*                       PlayerStatsManager;                                       // 0x00B0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPlayerLevelChanged;                                     // 0x00B8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00B8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerDataFactory");
		return ptr;
	}


	void HandlePlayerLevelIncremented(class UKSActivityInstance** ActivityInstance, int* Count);
	void HandlePlayerLevelChanged(class UKSActivityInstance** Activity, int* Tier, int* Count);
	int GetRogueBucksCount();
	int GetReputationCount();
	int GetPlayerLevel();
	int GetPlayerId();
	int GetPlayerBannerIndex();
};


// Class KillstreakUINew.KSPlayerHealthSegmentBase
// 0x0000 (0x04D8 - 0x04D8)
class UKSPlayerHealthSegmentBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerHealthSegmentBase");
		return ptr;
	}


	void View_SetResidualValue(float* PercentValue);
	void View_SetResidualColor(struct FLinearColor* Color);
	void View_SetMainValue(float* PercentValue, bool* bCanTriggerPulse);
	void View_SetMainColor(struct FLinearColor* Color);
	void View_PlayEmptiedPulse();
	void View_PlayDamagePulse(struct FLinearColor* PeakColor, struct FLinearColor* BaseColor);
};


// Class KillstreakUINew.KSViewedTargetHealthWidget
// 0x0010 (0x0528 - 0x0518)
class UKSViewedTargetHealthWidget : public UKSHealthWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0518(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedTargetHealthWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerHealthWidgetBase
// 0x0030 (0x0558 - 0x0528)
class UKSPlayerHealthWidgetBase : public UKSViewedTargetHealthWidget
{
public:
	struct FPlayerHealthMeterState                     CurrentHealthMeterState;                                  // 0x0528(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0540(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerHealthWidgetBase");
		return ptr;
	}


	void View_SetResidualPercent(float* ResidualPercent);
	void View_SetResidualMode(bool* IsHealing);
	void View_SetResidualAlpha(float* ResidualAlpha);
	void View_SetHealthTextValue(float* HealthValue, float* OverhealValue);
	void View_SetHealthPercent(float* HealthPercent);
	void View_SetHealthMode(bool* IsDowned, bool* IsOverhealed);
	void View_PlayDamagePulse();
	void View_OnDeathStateChanged();
	void OnJobChanged(class UKSJobItem** Job);
	void OnHealthMeterStateChanged();
	void OnHealthDecreased();
	void HandlePlayerDownedChanged(class AKSPlayerState** pKSPlayerState);
	void HandleJobChanged();
	void HandleDeathStateChanged();
};


// Class KillstreakUINew.KSPlayerInfo
// 0x0020 (0x00A0 - 0x0080)
class UKSPlayerInfo : public UPUMG_PlayerInfo
{
public:
	struct FScriptMulticastDelegate                    OnPlayerStatusChanged;                                    // 0x0080(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0080(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerInfo");
		return ptr;
	}


	void ViewExternalProfile();
	void ToggleDND();
	bool ShouldShowViewGamercardForPlayer();
	bool ShouldShowViewExternalProfile();
	bool ShouldShowInviteToPartyForPlayer();
	bool ShouldShowCrossplayIconForPlayer();
	bool IsSuggestedFriend();
	bool IsSamePortalAsLocalPlayer();
	bool IsRequestingFriend();
	bool IsPendingFriend();
	bool IsOnline();
	bool IsMuted();
	bool IsInQueue();
	bool IsInMatch();
	bool IsInLocalParty();
	bool IsInLobby();
	bool IsFriend();
	bool IsDND();
	bool InviteToParty(struct FText* OutErrorText);
	bool HasPortalRelationship();
	bool HasPortalInfoForClientPortal();
	bool HasHRRelationship();
	struct FText GetStatusMessage();
	struct FText GetRichPresenceText();
	EKSPlayerInputType GetPlayerSelectedInputType();
	bool GetPlayersDisplayedSkin(class UKSItem** SkinItem);
	EKSPlatformType GetPlayerPlatformType();
	EKSPlayerOnlineStatus GetPlayerOnlineStatus();
	int GetPlayerLevel();
	TArray<struct FPlayerAlias> GetPlayerAliases();
	bool GetEquippedAccountItem(EPlayerAccountSlot* eSlot, class UKSItem** EquippedItem);
	bool CanBeSpectated();
	bool CanBeChallenged();
};


// Class KillstreakUINew.JobSelectionEntryDetails
// 0x0038 (0x0060 - 0x0028)
class UJobSelectionEntryDetails : public UObject
{
public:
	struct FJobSelectionEntry                          JobEntry;                                                 // 0x0028(0x0028) (BlueprintVisible, BlueprintReadOnly)
	class UPUMG_StoreItem*                             StoreItem;                                                // 0x0050(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      AllowUnownedJobs;                                         // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.JobSelectionEntryDetails");
		return ptr;
	}


	bool IsSelf();
	bool IsOwned();
	struct FText GetJobName();
	class UKSJobItem* GetJobItem();
};


// Class KillstreakUINew.KSPlayerJobSelectWidgetBase
// 0x0040 (0x0518 - 0x04D8)
class UKSPlayerJobSelectWidgetBase : public UKSWidget
{
public:
	class UKSJobSelectionManager*                      JobSelectionManager;                                      // 0x04D8(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKSJobSelectionComponent*                    JobSelectionComponent;                                    // 0x04E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UJobSelectionEntryDetails*>           JobDetailEntries;                                         // 0x04E8(0x0010) (BlueprintVisible, ZeroConstructor)
	EPlayerSelectionState                              CurrentPlayerSelectionState;                              // 0x04F8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class UJobSelectionEntryDetails*>           EnemyJobDetailsEntries;                                   // 0x0500(0x0010) (BlueprintVisible, ZeroConstructor)
	TWeakObjectPtr<class UKSJobSelectionComponent>     BoundEnemyJobSelectionComponent;                          // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerJobSelectWidgetBase");
		return ptr;
	}


	bool UIX_RequestJobSelect(class UJobSelectionEntryDetails** JobEntry, EJobSelectionState* RequestedState);
	void OnResetSelection();
	void OnPlayerSelectionStateChanged(EPlayerSelectionState* NewState);
	void OnJobEntryChanged(class UJobSelectionEntryDetails** JobEntry, bool* EnemyTeam);
	void OnJobEntriesReady(TArray<class UJobSelectionEntryDetails*>* JobEntries, bool* EnemyTeam);
	void HandleJobSelectionManagerReady(class UKSJobSelectionManager** JobSelectionManager);
	void HandleJobSelectionInitialized();
	void HandleJobEntryStateChangedForEnemies(struct FJobSelectionEntry* JobEntry);
	void HandleJobEntryStateChanged(struct FJobSelectionEntry* JobEntry);
	void HandleJobEntryAddedForEnemies(struct FJobSelectionEntry* JobEntry);
	void HandleJobEntryAdded(struct FJobSelectionEntry* JobEntry);
	void HandleJobEntryAcknowledge(int* ItemId, bool* bSuccess, EJobSelectionState* RequestState);
	class UKSJobSelectionComponent* GetJobSelectionComponent();
	class UKSJobItem* GetJobItemById(int* JobItemId);
	void BindListenersForTeam(class AKSTeamState** Team);
};


// Class KillstreakUINew.KSPlayerQueryDataFactory
// 0x0118 (0x0150 - 0x0038)
class UKSPlayerQueryDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x100];                                     // 0x0038(0x0100) MISSED OFFSET
	struct FTimerHandle                                CheckTimerHandle;                                         // 0x0138(0x0008)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0140(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerQueryDataFactory");
		return ptr;
	}


	bool QueryPlayersByNameWithProfiles(struct FText* PlayerName, struct FScriptDelegate* OnReponse, struct FKSPlayerQueryHandle* OutHandle);
	bool QueryPlayersByName(struct FText* PlayerName, struct FScriptDelegate* OnReponse, struct FKSPlayerQueryHandle* OutHandle);
	void OnTimeoutCheck();
	struct FText GetQueriedName(struct FKSPlayerQueryHandle* InHandle);
	struct FText STATIC_GetPlayerQueryErrorMessage(EKSPlayerQueryError* Error);
	void CancelQuery(struct FKSPlayerQueryHandle* InHandle);
};


// Class KillstreakUINew.KSPlayerShopWidgetBase
// 0x0018 (0x04F0 - 0x04D8)
class UKSPlayerShopWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET
	class AKSPlayerShop*                               PlayerShop;                                               // 0x04E0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x04E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerShopWidgetBase");
		return ptr;
	}


	void TriggerDisplayUpdate(bool* ForceUpdate);
	void ShopItemChanged(struct FShopItem* ChangedItem);
	void SetShopState(bool* IsOpen);
	void SetShopContent();
	void SetPromptShow(bool* ShouldShowPrompt);
	void SetCashValue(int* CashValue);
	void PurchaseAcknowledge(EShopItemType* ShopItemType);
	void HandleTeamsFlipped();
	void HandleShopOpened();
	void HandleShopItemChanged(struct FShopItem* ChangedItem);
	void HandleShopClosed();
	void HandleShopAvailabilityChanged(bool* bAvailable);
	void HandlePurchaseAcknowledged(EShopItemType* ShopItemType, bool* bSuccess);
	void HandleCashChanged(int* Cash, int* Delta);
	void CheckForValidPlayerState();
};


// Class KillstreakUINew.KSPlayerWhoDataFactory
// 0x0000 (0x0060 - 0x0060)
class UKSPlayerWhoDataFactory : public UPUMG_PlayerWhoDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerWhoDataFactory");
		return ptr;
	}


	void ClearSearchResults();
};


// Class KillstreakUINew.KSPointObjectiveMarkerWidget
// 0x0088 (0x0338 - 0x02B0)
class UKSPointObjectiveMarkerWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x02B0(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPointObjectiveMarkerWidget");
		return ptr;
	}


	void ViewSetCaptureProgress(float* ProgressPercent);
	void ViewApplyTimerValue(float* TimerSeconds, float* TotalTimerSeconds);
	bool ShouldHideObjectiveIcon();
	void SetView(struct FKSPointObjectiveMarkerViewState* ViewState);
	void SetTeamColorsForState(TMap<EPointObjectiveMarkerTeamState, struct FLinearColor>* StateColors);
	bool SetTeamColorForState(EPointObjectiveMarkerTeamState* ObjectiveState, struct FLinearColor* StateColor);
	void OnControlTeamScoreUpdated(class AKSTeamState** TeamState);
	bool IsInTimerState();
	bool IsInProgressState();
	bool IsInMatchTimerState();
	bool IsInLockedState();
	bool IsInCountdownState();
	bool IsInContestedState();
	bool IsInCapturedState();
	void HandlePhaseChanged(struct FName* NewPhaseName, struct FName* PreviousPhaseName);
	void HandleControlTeamScoreUpdated(class AKSTeamState** TeamState, class AKSControlPoint** ControlPoint);
	void HandleBombStateChanged(struct FKSNeutralBombState* BombState);
	bool GetTeamColorForState(struct FLinearColor* TeamColor);
	struct FKSPointObjectiveMarkerViewState GetCurrentViewState();
	class AKSObjectiveBase* GetAssociatedObjective();
	bool DoesAttackingTeamExist(bool* IsLocalPlayerOnAttackingTeam);
	void ControlPointStateUpdated(class AKSControlPoint** Objective);
};


// Class KillstreakUINew.KSPortalOffersWidget
// 0x0000 (0x04D8 - 0x04D8)
class UKSPortalOffersWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPortalOffersWidget");
		return ptr;
	}


	TArray<class UPUMG_StoreItem*> GetPortalOfferItems();
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSPurchaseConfirmationWidget
// 0x0000 (0x04D8 - 0x04D8)
class UKSPurchaseConfirmationWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPurchaseConfirmationWidget");
		return ptr;
	}


	class UKSStoreItemHelper* GetStoreItemHelper();
	bool GetBundleContents(class UPUMG_StoreItem** StoreItem, TArray<class UPUMG_StoreItem*>* BundleItems);
};


// Class KillstreakUINew.KSPurchaseModal
// 0x0000 (0x04D8 - 0x04D8)
class UKSPurchaseModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPurchaseModal");
		return ptr;
	}


	void SetupBindings();
	void HandleShowPurchaseModal(class UPUMG_StoreItem** Item, class UPUMG_StoreItemPrice** Price);
	class UPUMG_StoreItemHelper* GetStoreItemHelper();
};


// Class KillstreakUINew.KSQueueDataFactory
// 0x0090 (0x0270 - 0x01E0)
class UKSQueueDataFactory : public UPUMG_QueueDataFactory
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x01E0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnSetQueueId;                                             // 0x01F0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x01E0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnQueueErrorRelevantStateChanged;                         // 0x0200(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x0200(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                ChunksInstallingQueueId;                                  // 0x0210(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                DefaultSelectedQueueId;                                   // 0x0214(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnSetQueueInputState;                                     // 0x0218(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0218(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray<int64_t>                                    PreviousCustomMatchMemberIds;                             // 0x0228(0x0010) (ZeroConstructor)
	int                                                SelectedQueueId;                                          // 0x0238(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LastJoinedQueuePrimaryId;                                 // 0x023C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeoutForSwitchFromShelteredToMainQueue;                 // 0x0240(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bWaitingOnLeaveForShelteredSwitch;                        // 0x0244(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bWaitingOnJoinForShelteredSwitch;                         // 0x0245(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                MaxRetriesForFindingPartyMemberLevels;                    // 0x0248(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              TimeBetweenRetriesForFindingPartyMemberLevels;            // 0x024C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                NumRetriesForFindingPartyMemberLevels;                    // 0x0254(0x0004) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  MapInfoDataTable;                                         // 0x0258(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  QueueDetailDataTable;                                     // 0x0260(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0268(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueueDataFactory");
		return ptr;
	}


	bool SetSelectedQueueId(int* QueueId);
	void SetPreviousCustomMatchMemberIds(TArray<int64_t>* PreviousMembers);
	void SetPendingMapForCustomQueue(int* mapId);
	void RetryQueuingForSheltered(int* QueueId);
	void OnPartyMemberUpdate(struct FPUMG_PartyMemberData* Member);
	void OnPartyMemberEvent(int64_t* PlayerId);
	void OnPartyEvent();
	void OnInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* InputState);
	bool JoinSelectedQueue();
	bool IsTutorialQueue(int* QueueId);
	void HandleShelteredMMTimeout(int* QueueId);
	void HandleShelteredMMSwitchFinish(bool* bSendNotify, bool* bClearTimer);
	void HandleShelteredMMQueueSwitch(int* QueueId);
	int GetSelectedShelteredQueueId();
	int GetSelectedQueueId();
	bool GetQueueInfoById(int* QueueId, struct FClientQueueInfo* InClientQueueInfo);
	int GetPendingCustomMatchMapId();
	int GetPenaltyTime();
	bool GetMapRotationsByQueueId(int* QueueId, TArray<int>* MapIds);
	bool GetMapInfoById(int* mapId, struct FUIMapInfo* MapInfo);
	TArray<struct FClientQueueInfo> GetCustomQueues();
	bool GetCurrentCustomMatchInfo(struct FClientQueueInfo* InClientQueueInfo);
	bool STATIC_FormatQueueJoinErrorMessage(struct FClientQueueInfo* Queue, EKSQueueJoinError* Error, struct FText* OutErrorMessage);
	int DetermineQueueIdForShelteredMM(int* QueueId, struct FClientQueueInfo* QueueInfo);
	EKSQueueJoinError CheckQueueJoinableById(int* QueueId);
	EKSQueueJoinError CheckQueueJoinable(struct FClientQueueInfo* Queue);
};


// Class KillstreakUINew.KSQueueWidgetBase
// 0x0000 (0x04D8 - 0x04D8)
class UKSQueueWidgetBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueueWidgetBase");
		return ptr;
	}


	void UpdateQueuePermissions();
	bool UIX_AttemptRejoinMatch();
	bool UIX_AttemptLeaveMatch();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetCurrentlySelectedQueue(int* QueueId);
	void ReceiveMatchStatusUpdate(EPUMG_MatchStatus* CurrentMatchStatus);
	void OnSelectedQueueUpdate(struct FClientQueueInfo* CurrentSelectedQueue);
	void OnQueueStateUpdate(EPUMG_MatchStatus* CurrentMatchStatus);
	void OnQueuePermissionUpdate(bool* CanQueue);
	void OnControlQueuePermissionUpdate(bool* CanControl);
	bool IsValidQueue(int* QueueId);
	void HandleSelectedQueueIdSet();
	void HandlePartyMemberRemoved(int64_t* PartyMemberId);
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember);
	void HandleMatchStatusUpdate(EPUMG_MatchStatus* MatchStatus);
	void HandleConfirmLeaveQueue();
	TArray<struct FQueueSection> GetQueueSections(TArray<struct FClientQueueInfo>* ClientCachedQueueInfo);
	TArray<struct FClientQueueInfo> GetQueues();
	void GetQueuePermissions(bool* CanControl, bool* CanQueue);
	bool GetQueueInfoById(int* QueueId, struct FClientQueueInfo* QueueInfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	struct FClientQueueInfo GetCurrentlySelectedQueue();
};


// Class KillstreakUINew.KSQueueTimerWidgetBase
// 0x0010 (0x04E8 - 0x04D8)
class UKSQueueTimerWidgetBase : public UKSQueueWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueueTimerWidgetBase");
		return ptr;
	}


	void OnUpdateQueueTimerState(EQueueTimerState* State);
	void OnUpdateQueueTime(float* TimeSecs);
	float GetQueueTime_TotalSecs();
	int GetQueueTime_PartSecs();
	int GetQueueTime_PartMins();
	int GetQueueTime_PartHours();
	EQueueTimerState GetCurrentTimerState();
};


// Class KillstreakUINew.KSQuickPlay
// 0x00E0 (0x05B8 - 0x04D8)
class UKSQuickPlay : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnSelectedQueueChanged;                                   // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      CanCurrentlyJoinQueue;                                    // 0x04E8(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      CanControlQueue;                                          // 0x04E9(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DefaultSelectedQueueId;                                   // 0x04EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ChunksInstallingQueueId;                                  // 0x04F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x04F4(0x0014) MISSED OFFSET
	unsigned char                                      ReadyForQueueing;                                         // 0x0508(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FClientQueueInfo                            CurrentSelectedQueue;                                     // 0x0510(0x00A8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQuickPlay");
		return ptr;
	}


	void UpdateQueuePermissions();
	bool UIX_AttemptJoinSelectedQueue();
	bool UIX_AttemptCancelQueue();
	TArray<struct FClientQueueInfo> SortQueues(TArray<struct FClientQueueInfo>* ClientCachedQueueInfo);
	void SetupReadyForQueueing();
	void SetupBindings();
	bool SetDefaultSelectedQueue(struct FClientQueueInfo* NewSelectedQueue);
	bool SetCurrentlySelectedQueue(int* QueueId);
	void ReceiveMatchStatusUpdate(EPUMG_MatchStatus* CurrentMatchStatus);
	void OnQueuePermissionChanged(bool* CanQueue);
	void OnControlQueuePermissionChanged(bool* CanControl);
	bool IsValidQueue(int* QueueId);
	void HandlePartyMemberDataUpdated(struct FPUMG_PartyMemberData* PartyMember);
	TArray<struct FQueueSection> GetQueueSections(TArray<struct FClientQueueInfo>* ClientCachedQueueInfo);
	TArray<struct FClientQueueInfo> GetQueues();
	bool GetQueueInfoById(int* QueueId, struct FClientQueueInfo* QueueInfo);
	class UKSQueueDataFactory* GetQueueDataFactory();
	class UPUMG_PartyDataFactory* GetPartyDataFactory();
	int GetDefaultSelectedQueueId();
	struct FClientQueueInfo GetCurrentlySelectedQueue();
	bool CheckForDirtyQueues(TArray<struct FClientQueueInfo>* NewClientCachedQueueInfo);
	bool CheckForCustomQueues(TArray<struct FClientQueueInfo>* CustomMatchQueueInfo);
};


// Class KillstreakUINew.KSQuickPlayWidget
// 0x0018 (0x04F0 - 0x04D8)
class UKSQuickPlayWidget : public UKSQueueWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQuickPlayWidget");
		return ptr;
	}


	void UpdateState();
	void SetIsPendingQueueUpdate(bool* IsPending);
	void OnUpdateQuickPlayState(EQuickPlayQueueState* QueueState);
	void OnUpdateQuickPlayCanPlay(bool* CanPlay);
	void OnUpdateQueueTimeElapsed(float* TimeElapsed);
	void OnUpdatePenaltyTimeLeft(int* TimeLeft);
	bool IsPendingQueueUpdate();
	EQuickPlayQueueState GetSelectedQueueState();
	bool GetGameModeDisplayName(struct FText* GameModeDisplayName);
	EQuickPlayQueueState GetCurrentQuickPlayState();
};


// Class KillstreakUINew.KSRadialSelectionWidgetBase
// 0x00B0 (0x0588 - 0x04D8)
class UKSRadialSelectionWidgetBase : public UKSWidget
{
public:
	TArray<struct FGameplayTag>                        EmoteSlots;                                               // 0x04D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        QuipSlots;                                                // 0x04E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        CommunicationSlots;                                       // 0x04F8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTag>                        SpraySlots;                                               // 0x0508(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               AdditionalInputsToDisableOnOpen;                          // 0x0518(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<EMercCosmeticSlot>                          RadialMenuCosmeticSlots;                                  // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      bCycleBetweenMenusEnabled;                                // 0x0538(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3F];                                      // 0x0539(0x003F) MISSED OFFSET
	class UDataTable*                                  ContextualPingTypesDT;                                    // 0x0578(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  ContextualPingMessagesDT;                                 // 0x0580(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRadialSelectionWidgetBase");
		return ptr;
	}


	void UpdateLastSelectedIndex(int* NewIndex);
	void UpdateLastHoveredIndex(int* NewHoveredIndex);
	void TraceSelectionCursor(float* Radius, float* Angle);
	void ShowSelector();
	void SetupForRadialWheelMode(ERadialWheelMode* NewRadialWheelMode);
	void RadialOptionUnhover();
	void RadialOptionSelected(int* Index);
	void RadialOptionHovered(int* Index);
	void OpenSpecifiedRadialMenu(EMercCosmeticSlot* CosmeticSlot);
	void OnRadialMenuUseLastSelection(EMercCosmeticSlot* ButtonCosmeticSlot);
	void OnRadialMenuReleased(EMercCosmeticSlot* ButtonCosmeticSlot, bool* bIsContextualPingHold);
	void OnRadialMenuPressed(EMercCosmeticSlot* ButtonCosmeticSlot, bool* bIsContextualPingHold);
	void OnRadialMenuForceClosed();
	void OnCycleMenusRight();
	void OnCycleMenusLeft();
	void OnCycledMenus(bool* bCycledRight);
	bool IsSelectorVisible();
	bool IsSelectorActive();
	bool IsCycleBetweenMenusEnabled();
	void InitializeTracking();
	void HideSelector();
	void HandleInputStateChanged(TEnumAsByte<EPGAME_INPUT_STATE>* NewInputState);
	float GetWheelSize();
	bool GetPingIconByType(EPingType* PingType);
	bool GetPingIconByMessage(EPingMessage* PingMessage);
	bool GetPingColorByType(EPingType* PingType, struct FLinearColor* PingColor);
	int GetOptionsCount();
	int GetLastSelectedIndexForCosmeticSlot(EMercCosmeticSlot* CosmeticSlot);
	int GetLastHoveredIndex();
	EMercCosmeticSlot GetInitialRadialMenu();
	TArray<struct FGameplayTag> GetGameplayTagsForCosmeticSlot(EMercCosmeticSlot* CosmeticSlot);
	float GetDeadZone();
	EMercCosmeticSlot GetContiguousCosmeticSlotMenu(bool* bRightSide);
	EMercCosmeticSlot GetActiveCosmeticSlotMenu();
	bool FindRowByType(EPingType* PingType, struct FContextualPingTypesRow* ContextualPingTypesRow);
	bool FindRowByMessage(EPingMessage* PingMessage, struct FContextualPingMessagesRow* ContextualPingMessagesRow);
	void DummyFunction();
	void ChangeToNewRadialMenu();
	void ButtonClicked();
	void BackPressed();
	bool ActivateRadialMenuItem(int* Index, class AKSPlayerController** PlayerController);
};


// Class KillstreakUINew.KSRedeemCodeScreenBase
// 0x0018 (0x04F0 - 0x04D8)
class UKSRedeemCodeScreenBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x04D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRedeemCodeScreenBase");
		return ptr;
	}


	void RedeemCode(struct FString* Code);
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult(bool* Success, struct FText* Error);
	bool IsPendingServerReply();
};


// Class KillstreakUINew.KSRegionSelectModalViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSRegionSelectModalViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRegionSelectModalViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSRegionSelectModal
// 0x0000 (0x04D8 - 0x04D8)
class UKSRegionSelectModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRegionSelectModal");
		return ptr;
	}

};


// Class KillstreakUINew.KSReticleWidgetBase
// 0x0020 (0x0510 - 0x04F0)
class UKSReticleWidgetBase : public UKSViewedActiveWeaponWidget
{
public:
	float                                              ShrinkAnimationTime;                                      // 0x04F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMaxScale;                                  // 0x04F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotIconMinScale;                                  // 0x04F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockedShotMinScaleSqDist;                                // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bGrenadeCooking;                                          // 0x0500(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bInADS;                                                   // 0x0501(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      bCachedBlockIconVisible;                                  // 0x0502(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedWeaponAccuracy;                                     // 0x0504(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	float                                              CachedReticleOffset;                                      // 0x0508(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSReticleWidgetBase");
		return ptr;
	}


	void UpdateReticleOffset(float* OffsetFromCenterScreen);
	void UpdateBlockedShotIcon(bool* IconVisible, struct FVector2D* Translation, struct FVector2D* IconScale);
	void CalculateReticleOffset(float* DeltaTime);
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.KSRogueDetailsWidget
// 0x0000 (0x04D8 - 0x04D8)
class UKSRogueDetailsWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRogueDetailsWidget");
		return ptr;
	}


	class UPUMG_StoreItem* GetStoreItemForJob(class UKSJobItem** JobItem);
	class UKSStoreItemHelper* GetItemHelper();
};


// Class KillstreakUINew.KSScreenMarkerWidgetBase
// 0x0010 (0x02C0 - 0x02B0)
class UKSScreenMarkerWidgetBase : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      bHideWhenOffscreen;                                       // 0x02B0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   OffscreenMargins;                                         // 0x02B4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScreenMarkerWidgetBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSScrollBox
// 0x0000 (0x0880 - 0x0880)
class UKSScrollBox : public UScrollBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScrollBox");
		return ptr;
	}


	float GetViewFraction();
};


// Class KillstreakUINew.KSSettingsContainer
// 0x0100 (0x05D8 - 0x04D8)
class UKSSettingsContainer : public UKSWidget
{
public:
	TArray<class UKSSettingsWidget*>                   SettingsWidgets;                                          // 0x04D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	struct FKSSettingsContainerConfig                  ContainerConfig;                                          // 0x04E8(0x00F0) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsContainer");
		return ptr;
	}


	void OnShowSettingsWidget(class UKSSettingsWidget** SettingsWidget);
	void OnHideSettingsWidget(class UKSSettingsWidget** SettingsWidget);
	void OnContainerConfigSet();
	struct FText GetWidgetContainerTitle();
	struct FText GetWidgetContainerDescription();
	TArray<class UKSSettingsWidget*> GetSettingsWidgets();
	void AddSettingsWidget(class UKSSettingsWidget** SettingsWidget);
};


// Class KillstreakUINew.KSSettingsMenuConfigAsset
// 0x0010 (0x0040 - 0x0030)
class UKSSettingsMenuConfigAsset : public UDataAsset
{
public:
	TArray<struct FKSSettingsPageConfig>               SettingsPages;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsMenuConfigAsset");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsDataFactory
// 0x0290 (0x0368 - 0x00D8)
class UKSSettingsDataFactory : public UPUMG_SettingsDataFactory
{
public:
	struct FScriptMulticastDelegate                    OnSettingsReceivedFromPlayerAccount;                      // 0x00D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x50];                                      // 0x00E8(0x0050) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnKeyBindSettingsApplied;                                 // 0x0138(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00E8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnKeyBindSettingsSaved;                                   // 0x0148(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0148(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray<struct FKSSettingPropertyId>                BoolSettingPropertyIds;                                   // 0x0158(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData04[0x50];                                      // 0x0168(0x0050) MISSED OFFSET
	TArray<struct FKSSettingPropertyId>                IntSettingPropertyIds;                                    // 0x01B8(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData05[0x50];                                      // 0x01C8(0x0050) MISSED OFFSET
	TArray<struct FKSSettingPropertyId>                FloatSettingPropertyIds;                                  // 0x0218(0x0010) (ZeroConstructor, Config)
	unsigned char                                      UnknownData06[0xB0];                                      // 0x0228(0x00B0) MISSED OFFSET
	struct FKSSettingsMenuConfig                       KSSettingsMenuConfig;                                     // 0x02D8(0x0010)
	unsigned char                                      UnknownData07[0x28];                                      // 0x02E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty KillstreakUINew.KSSettingsDataFactory.KSSettingsMenuConfigAssetSoftObjectPtr
	class UKSSettingsMenuConfigAsset*                  KSSettingsMenuConfigAsset;                                // 0x0310(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x10];                                      // 0x0318(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnDisplayLanguageApplied;                                 // 0x0328(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData09[0xF];                                       // 0x0318(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnDisplayLanguageSaved;                                   // 0x0338(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData10[0xF];                                       // 0x0338(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnScreenResolutionApplied;                                // 0x0348(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData11[0xF];                                       // 0x0348(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnScreenResolutionSaved;                                  // 0x0358(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0xF];                                       // 0x0358(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsDataFactory");
		return ptr;
	}


	void SaveSettings();
	void SaveSettingAsInt(struct FString* Name);
	void SaveSettingAsFloat(struct FString* Name);
	void SaveSettingAsBool(struct FString* Name);
	void SaveScreenResolution();
	void SaveLanguage();
	void SaveKeyBindings();
	void RevertScreenResolution();
	void RevertPlayerPreferences();
	void RevertLanguageToDefault();
	void RevertKeyBindings();
	bool IsUserLoggedIn();
	bool GetSettingAsInt(struct FString* Name, int* OutInt);
	bool GetSettingAsFloat(struct FString* Name, float* OutFloat);
	bool GetSettingAsBool(struct FString* Name, bool* OutBool);
	struct FIntPoint GetScreenResolution();
	class UKSPlayerInput* GetKSPlayerInput();
	void GetDefaultKSInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKSInputActionKey>* OutKeys);
	void GetDefaultInputAxisKeys(struct FName* Name, EKSInputType* InputType, float* Scale, TArray<struct FKey>* OutKeys);
	void GetDefaultInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKey>* OutKeys);
	void GetCustomKSInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKSInputActionKey>* OutKeys);
	void GetCustomInputAxisKeys(struct FName* Name, EKSInputType* InputType, float* Scale, TArray<struct FKey>* OutKeys);
	void GetCustomInputActionKeys(struct FName* Name, EKSInputType* InputType, TArray<struct FKey>* OutKeys);
	struct FString GetCurrentLanguage();
	TArray<struct FString> GetAvailableLanguages();
	void BindSettingCallbacks(struct FString* Name, struct FSettingDelegateStruct* SettingDelegateStruct);
	void ApplySettingAsInt(struct FString* Name, int* Value);
	void ApplySettingAsFloat(struct FString* Name, float* Value);
	void ApplySettingAsBool(struct FString* Name, bool* Value);
	void ApplyScreenResolution(struct FIntPoint* ScreenResolution);
	void ApplyLanguage(struct FString* LanguageCulture);
};


// Class KillstreakUINew.KSSettingsGroup
// 0x0118 (0x05F0 - 0x04D8)
class UKSSettingsGroup : public UKSWidget
{
public:
	TArray<class UKSSettingsContainer*>                SettingsContainers;                                       // 0x04D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UClass*                                      SettingsContainerClass;                                   // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsGroupConfig                      GroupConfig;                                              // 0x04F0(0x0100) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsGroup");
		return ptr;
	}


	void OnShowContainer(class UKSSettingsContainer** SettingsContainer);
	void OnHideContainer(class UKSSettingsContainer** SettingsContainer);
	void OnGroupConfigSet();
	TArray<class UKSSettingsContainer*> GetSettingsContainers();
	void AddSubSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer);
	void AddMainSettingsContainerWidget(class UKSSettingsContainer** SettingsContainer);
};


// Class KillstreakUINew.KSSettingsInfoBase
// 0x00B0 (0x00D8 - 0x0028)
class UKSSettingsInfoBase : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnSettingValueChanged;                                    // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      bIsAutoApplied;                                           // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsAutoSaved;                                             // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x66];                                      // 0x003A(0x0066) MISSED OFFSET
	TArray<struct FText>                               TextOptions;                                              // 0x00A0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnTextOptionsChanged;                                     // 0x00B0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x00B0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              MinValue;                                                 // 0x00C0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxValue;                                                 // 0x00C4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StepValue;                                                // 0x00C8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bRoundValue;                                              // 0x00CC(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoundToNearest;                                           // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      bIsPercent;                                               // 0x00D4(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfoBase");
		return ptr;
	}


	void UpdateTextOptions(TArray<struct FText>* NewOptions);
	bool SetDesiredValueKeyBind(struct FKSKeyBind* InKeyBind);
	bool SetDesiredValueInt(int* inInt);
	bool SetDesiredValueFloat(float* InFloat);
	bool SetDesiredValueBool(bool* InBool);
	bool SaveKeyBindValue(struct FKSKeyBind* InKeyBind);
	bool SaveIntValue(int* inInt);
	bool SaveFloatValue(float* InFloat);
	bool SaveBoolValue(bool* InBool);
	void Save();
	float RoundToNearestValueFloat(float* ValueToRound);
	void RevertSettingToDefault();
	void Revert();
	void OnValueKeyBindSaved(struct FKSKeyBind* SavedKeyBind);
	void OnValueKeyBindApplied(struct FKSKeyBind* AppliedKeyBind);
	void OnValueIntSaved(int* SavedInt);
	void OnValueIntApplied(int* AppliedInt);
	void OnValueFloatSaved(float* SavedFloat);
	void OnValueFloatApplied(float* AppliedFloat);
	void OnValueBoolSaved(bool* SavedBool);
	void OnValueBoolApplied(bool* AppliedBool);
	bool IsValidValueKeyBind(struct FKSKeyBind* InKey);
	bool IsValidValueInt(int* inInt);
	bool IsValidValueFloat(float* InFloat);
	bool IsValidValueBool(bool* InBool);
	bool IsDirty();
	void InitializeValue();
	struct FKSKeyBind GetValueKeyBind();
	int GetValueInt();
	float GetValueFloat();
	bool GetValueBool();
	TArray<struct FText> GetTextOptions();
	struct FText GetTextOption(int* Index);
	float GetStep();
	EKSSettingType GetSettingType();
	float GetRoundToNearest();
	bool GetRound();
	int GetNumTextOptions();
	float GetMin();
	float GetMax();
	class AKSHUDCommon* GetKSHUD();
	bool GetIsPercent();
	struct FKSKeyBind GetDirtyValueKeyBind();
	int GetDirtyValueInt();
	float GetDirtyValueFloat();
	bool GetDirtyValueBool();
	struct FKSKeyBind FixupInvalidKeyBind(struct FKSKeyBind* InKey);
	int FixupInvalidInt(int* inInt);
	float FixupInvalidFloat(float* InFloat);
	bool FixupInvalidBool(bool* InBool);
	bool CanRevert();
	bool ApplyKeyBindValue(struct FKSKeyBind* InKeyBind);
	bool ApplyIntValue(int* inInt);
	bool ApplyFloatValue(float* InFloat);
	bool ApplyBoolValue(bool* InBool);
	void Apply();
};


// Class KillstreakUINew.KSSettingsInfo_Binding
// 0x0020 (0x00F8 - 0x00D8)
class UKSSettingsInfo_Binding : public UKSSettingsInfoBase
{
public:
	struct FKSKeyBindInfo                              PrimaryKeyBindInfo;                                       // 0x00D8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FKSKeyBindInfo                              GamepadKeyBindInfo;                                       // 0x00E8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Binding");
		return ptr;
	}


	void OnSettingsReceivedFromPlayerAccount();
	void OnKeyBindingsSaved(struct FName* Name);
	void OnKeyBindingsApplied(struct FName* Name);
};


// Class KillstreakUINew.KSSettingsInfo_Generic
// 0x0018 (0x00F0 - 0x00D8)
class UKSSettingsInfo_Generic : public UKSSettingsInfoBase
{
public:
	EKSSettingType                                     KSSettingType;                                            // 0x00D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x00E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Generic");
		return ptr;
	}


	void OnSettingSaved();
	void OnSettingApplied();
	class UKSSettingsDataFactory* GetKSSettingsDataFactory();
};


// Class KillstreakUINew.KSSettingsInfo_MuteAudio
// 0x0000 (0x00D8 - 0x00D8)
class UKSSettingsInfo_MuteAudio : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_MuteAudio");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsInfo_Region
// 0x0000 (0x00D8 - 0x00D8)
class UKSSettingsInfo_Region : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Region");
		return ptr;
	}


	void OnPreferredSiteUpdated();
};


// Class KillstreakUINew.KSSettingsInfo_Resolution
// 0x0010 (0x00E8 - 0x00D8)
class UKSSettingsInfo_Resolution : public UKSSettingsInfoBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Resolution");
		return ptr;
	}


	void OnScreenResolutionSaved(struct FIntPoint* SavedScreenResolution);
	void OnScreenResolutionApplied(struct FIntPoint* AppliedScreenResolution);
};


// Class KillstreakUINew.KSSettingsMenu
// 0x0030 (0x0508 - 0x04D8)
class UKSSettingsMenu : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x04D8(0x0008) MISSED OFFSET
	TArray<class UKSSettingsPage*>                     SettingsPages;                                            // 0x04E0(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UClass*                                      SettingsPageClass;                                        // 0x04F0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsMenuConfig                       MenuConfig;                                               // 0x04F8(0x0010) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsMenu");
		return ptr;
	}


	void RebuildNavigation();
	void OnShowPage(class UKSSettingsPage** SettingsPage);
	void OnSaveSettings();
	void OnRevertSettings();
	void OnMenuConfigSet();
	void OnHidePage(class UKSSettingsPage** SettingsPage);
	void OnConfirmExit(bool* ShouldSaveSettings);
	TArray<class UKSSettingsPage*> GetSettingsPages();
	void CheckSavePendingChanges();
	void AddSettingsPageWidget(class UKSSettingsPage** SettingsPage);
};


// Class KillstreakUINew.KSSettingsPage
// 0x0090 (0x0568 - 0x04D8)
class UKSSettingsPage : public UKSWidget
{
public:
	TArray<class UKSSettingsSection*>                  SettingsSections;                                         // 0x04D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UClass*                                      SettingsSectionClass;                                     // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsPageConfig                       PageConfig;                                               // 0x04F0(0x0078) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsPage");
		return ptr;
	}


	void OnShowSection(class UKSSettingsSection** SettingsSection);
	void OnPageConfigSet();
	void OnHideSection(class UKSSettingsSection** SettingsSection);
	TArray<class UKSSettingsSection*> GetSettingsSections();
	class UScrollBox* GetScrollBox();
	void AddSettingsSectionWidget(class UKSSettingsSection** SettingsSection);
};


// Class KillstreakUINew.KSSettingsSection
// 0x0090 (0x0568 - 0x04D8)
class UKSSettingsSection : public UKSWidget
{
public:
	TArray<class UKSSettingsGroup*>                    SettingsGroups;                                           // 0x04D8(0x0010) (ExportObject, ZeroConstructor, Transient)
	class UClass*                                      SettingsGroupClass;                                       // 0x04E8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FKSSettingsSectionConfig                    SectionConfig;                                            // 0x04F0(0x0078) (BlueprintVisible, BlueprintReadOnly)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsSection");
		return ptr;
	}


	void OnShowGroup(class UKSSettingsGroup** SettingsGroup);
	void OnSectionConfigSet();
	void OnHideGroup(class UKSSettingsGroup** SettingsGroup);
	TArray<class UKSSettingsGroup*> GetSettingsGroups();
	void AddSettingsGroupWidget(class UKSSettingsGroup** SettingsGroup);
};


// Class KillstreakUINew.KSSettingsWidget
// 0x0048 (0x0520 - 0x04D8)
class UKSSettingsWidget : public UKSWidget
{
public:
	struct FKSSettingsWidgetConfig                     WidgetConfig;                                             // 0x04D8(0x0010) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       WidgetContainerTitle;                                     // 0x04E8(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       WidgetContainerDescription;                               // 0x0500(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UKSSettingsInfoBase*                         SettingsInfo;                                             // 0x0518(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsWidget");
		return ptr;
	}


	void SaveSetting();
	void RevertSetting();
	void OnWidgetSettingsInfoSet();
	void OnWidgetContainerTitleSet();
	void OnWidgetContainerDescriptionSet();
	void OnWidgetConfigSet();
	void OnSettingsInfoValueChanged(bool* bChangedExternally);
	void OnInputAttached(bool* bGamepadAttached, bool* bMouseAttached);
	bool IsSaved();
	bool IsApplied();
	bool CanGamepadNavigate();
	void ApplySetting();
};


// Class KillstreakUINew.KSShopItemButtonBase
// 0x0028 (0x0500 - 0x04D8)
class UKSShopItemButtonBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnShopSelection;                                          // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnShopViewItemDetails;                                    // 0x04E8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x04E8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	EShopItemType                                      ActiveShopSlot;                                           // 0x04F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSShopItemButtonBase");
		return ptr;
	}


	class UButton* GetHitTarget();
	void DisplayShopItem(struct FShopItem* ShopItem, bool* IsAffordable, bool* IsToggleSlot);
	void ButtonUnhovered();
	void ButtonReleased();
	void ButtonPressed();
	void ButtonHovered();
	void ButtonClicked();
};


// Class KillstreakUINew.KSSocialPanelBase
// 0x0050 (0x0528 - 0x04D8)
class UKSSocialPanelBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnDataReady;                                              // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnPlayerCardClicked;                                      // 0x04E8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x04E8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UTreeView*                                   TreeView;                                                 // 0x04F8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UKSSocialOverlay*                            DataSource;                                               // 0x0500(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0508(0x0010) MISSED OFFSET
	TArray<class UKSDataSocialCategory*>               CategoriesList;                                           // 0x0518(0x0010) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialPanelBase");
		return ptr;
	}


	void UpdateListData();
	void SetupTreeView(class UTreeView** List);
	void SetDataSource(class UKSSocialOverlay** Source);
	void OnDataChange(TArray<EKSSocialOverlaySection>* Sections);
	class UTreeView* GetTreeView();
	void GetSubListFromData(class UObject** Source, TArray<class UObject*>* Out_List);
	class UKSSocialOverlay* GetDataSource();
};


// Class KillstreakUINew.KSSocialFriendsPanel
// 0x0018 (0x0540 - 0x0528)
class UKSSocialFriendsPanel : public UKSSocialPanelBase
{
public:
	TArray<class UKSDataSocialCategory*>               CategoryData;                                             // 0x0528(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UKSSocialOverlay*                            Parent;                                                   // 0x0538(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialFriendsPanel");
		return ptr;
	}

};


// Class KillstreakUINew.KSSocialOverlay
// 0x00A0 (0x0578 - 0x04D8)
class UKSSocialOverlay : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnDataChanged;                                            // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	TArray<class UKSDataSocialCategory*>               CategoriesList;                                           // 0x04E8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x70];                                      // 0x04F8(0x0070) MISSED OFFSET
	TArray<class UKSDataSocialPlayer*>                 UnusedEntries;                                            // 0x0568(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialOverlay");
		return ptr;
	}


	void RepopulateAll();
	void PlayTransition(class UWidgetAnimation** Animation, bool* TransitionOut);
	void OnRecentlyPlayedChange(class UKSFriendDataFactory** Source);
	void HandleUpdatePlayers();
	TArray<class UKSDataSocialCategory*> GetData();
	class UKSDataSocialCategory* GetCategory(EKSSocialOverlaySection* Category);
	TArray<class UKSDataSocialCategory*> GetCategories(TArray<EKSSocialOverlaySection>* Categories);
};


// Class KillstreakUINew.KSSocialSearchPanel
// 0x0048 (0x0570 - 0x0528)
class UKSSocialSearchPanel : public UKSSocialPanelBase
{
public:
	struct FScriptMulticastDelegate                    OnOpen;                                                   // 0x0528(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0528(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnClose;                                                  // 0x0538(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0538(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData02[0x28];                                      // 0x0548(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialSearchPanel");
		return ptr;
	}


	void OnSearchTimeout();
	void OnSearchStart(struct FText* SearchTerm);
	void OnSearchComplete(struct FText* SearchTerm, struct FText* Error, TArray<class UKSDataSocialPlayer*>* Results);
	bool IsSearching();
	struct FText GetActiveSearchTerm();
	void DoSearch(struct FText* SearchTerm);
};


// Class KillstreakUINew.KSSocialWidgetBase
// 0x0008 (0x04E0 - 0x04D8)
class UKSSocialWidgetBase : public UKSWidget
{
public:
	class UKSPartyDataFactory*                         CachedPartyDataFactory;                                   // 0x04D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialWidgetBase");
		return ptr;
	}


	void SortFriendData(TArray<class UPUMG_PlayerInfo*>* Friends);
	void SearchPlayerName(struct FString* PlayerName);
	void OnFriendRequestsUpdated();
	void HandleSearchByNameResultsUpdated();
	void HandlePartyDataUpdated();
	void HandleFriendInviteReceived(struct FPUMG_FriendData* PlayerData);
	void HandleFriendDataUpdated();
	TArray<class UPUMG_PlayerInfo*> GetSortedFriends();
	TArray<class UPUMG_PlayerInfo*> GetSearchResults();
	class UKSPlayerWhoDataFactory* GetPlayerWhoDataFactory();
	class UKSPartyDataFactory* GetPartyDataFactory();
	class UKSFriendDataFactory* GetFriendDataFactory();
	void ClearSearchResults();
};


// Class KillstreakUINew.KSSortableGridPanel
// 0x0018 (0x0168 - 0x0150)
class UKSSortableGridPanel : public UGridPanel
{
public:
	TEnumAsByte<EOrientation>                          Orientation;                                              // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                               // 0x0154(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSortableGridPanel");
		return ptr;
	}


	bool SortChildrenComparator__DelegateSignature(class UWidget** LHS, class UWidget** RHS);
	void SortChildren();
	class UGridSlot* AddChildAutoLayout(class UWidget** Content);
};


// Class KillstreakUINew.KSSortableVerticalBox
// 0x0010 (0x0140 - 0x0130)
class UKSSortableVerticalBox : public UVerticalBox
{
public:
	struct FScriptDelegate                             OnSortCompareChildrenEvent;                               // 0x0130(0x0010) (Edit, ZeroConstructor, InstancedReference)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSortableVerticalBox");
		return ptr;
	}


	bool SortChildrenComparator__DelegateSignature(class UWidget** LHS, class UWidget** RHS);
	void SortChildren();
};


// Class KillstreakUINew.KSStoreSectionItem
// 0x0038 (0x0060 - 0x0028)
class UKSStoreSectionItem : public UObject
{
public:
	TArray<class UPUMG_StoreItem*>                     StoreItems;                                               // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	TArray<int>                                        NewLootIds;                                               // 0x0038(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                column;                                                   // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Row;                                                      // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoreItemWidgetType>                  WidgetType;                                               // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UPUMG_StoreItem*                             CurrentlyViewedItem;                                      // 0x0058(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSStoreSectionItem");
		return ptr;
	}


	bool IsItemNew(class UPUMG_StoreItem** StoreItem);
	bool HasNewItems();
};


// Class KillstreakUINew.KSStoreSection
// 0x0018 (0x0040 - 0x0028)
class UKSStoreSection : public UObject
{
public:
	TArray<class UKSStoreSectionItem*>                 SectionItems;                                             // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor)
	int                                                SecondsRemaining;                                         // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EStoreSectionTypes>                    SectionType;                                              // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSStoreSection");
		return ptr;
	}


	bool HasNewItems();
	struct FText GetSectionHeader();
};


// Class KillstreakUINew.KSStoreWidget
// 0x0000 (0x04D8 - 0x04D8)
class UKSStoreWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSStoreWidget");
		return ptr;
	}


	void OnVendorsReceived(int* GroupId, TArray<int>* VendorIds);
	TArray<class UKSStoreSection*> GetStoreLayout();
	class UKSStoreItemHelper* GetStoreItemHelper();
};


// Class KillstreakUINew.KSTargetMarkerWidget
// 0x0048 (0x0308 - 0x02C0)
class UKSTargetMarkerWidget : public UKSScreenMarkerWidgetBase
{
public:
	struct FScriptMulticastDelegate                    OnTargetChanged;                                          // 0x02C0(0x0001) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData00[0xF];                                       // 0x02C0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnModUsed;                                                // 0x02D0(0x0001) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0xF];                                       // 0x02D0(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class AActor*                                      CurrentTarget;                                            // 0x02E0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData)
	class UKSModInst_Activated*                        TargetModInst;                                            // 0x02E8(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData)
	TScriptInterface<class UKSTargeter>                Targeter;                                                 // 0x02F0(0x0010) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0300(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTargetMarkerWidget");
		return ptr;
	}


	void UpdateCharge(class UKSModInst_Activated** ModInst);
	void TryApplyViewState(ETargetMarkerViewState* ViewState, bool* bForce);
	void ReceiveNewTarget(TScriptInterface<class UKSTargeter>* InTargeter, class AActor** NewTarget);
	void OnGamepadSelectedChanged(int* NewSelectionIndex);
	ETargetMarkerViewState GetCurrentViewState();
	void BindTargetModInst();
	void ApplyViewState(ETargetMarkerViewState* ViewState);
};


// Class KillstreakUINew.KSTextChatWidget
// 0x0030 (0x0508 - 0x04D8)
class UKSTextChatWidget : public UKSWidget
{
public:
	unsigned char                                      ActiveChatChannelsDirty;                                  // 0x04D8(0x0001) (ZeroConstructor, IsPlainOldData)
	TArray<struct FPUMG_ActiveChatChannelData>         ActiveChatChannels;                                       // 0x04E0(0x0010) (ZeroConstructor)
	int                                                CurrentChatChannelIndex;                                  // 0x04F0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCurrentChatChannelChanged;                              // 0x04F8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04F4(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTextChatWidget");
		return ptr;
	}


	void Whisper(struct FString* PlayerName, struct FString* Message);
	void Unblock(struct FString* PlayerName);
	void UIX_SubmitTextInput(struct FString* Message);
	void UIX_SendMessageToPlayer(struct FString* Message, int64_t* PlayerId);
	void UIX_SendMessageToChannel(struct FString* Message, EPUMG_ChatChannel* Channel);
	void UIX_MarkMessageAsRead(int* MessageIndex);
	void UIX_ExecuteChatCommandLine(struct FString* CommandLine);
	void ToggleDND();
	bool SetChatChannelToPlayer(int64_t* PlayerId);
	bool SetChatChannel(EPUMG_ChatChannel* Channel, int64_t* PersonalChannelPlayerId);
	void Reply(struct FString* Message);
	void PreviousChatChannel();
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player);
	void OpenTextChat(bool* BeginChatCommand);
	void NextChatChannel();
	bool IsActiveChatChannel(EPUMG_ChatChannel* Channel);
	void HandleChatMessageReceived(struct FPUMG_ChatData* ReceivedMessage);
	void HandleChatMessageRead(struct FPUMG_ChatData* ReadMessage);
	void HandleChatChannelLeft(EPUMG_ChatChannel* Channel);
	void HandleChatChannelJoined(EPUMG_ChatChannel* Channel);
	struct FPUMG_ActiveChatChannelData GetCurrentChatChannel();
	class UKSChatDataFactory* GetChatDataFactory();
	TArray<struct FPUMG_ActiveChatChannelData> GetActiveChatChannels();
	bool CanChatInChannel(EPUMG_ChatChannel* Channel);
	void Block(struct FString* PlayerName);
};


// Class KillstreakUINew.KSToastNotificationWidgetBase
// 0x0030 (0x0508 - 0x04D8)
class UKSToastNotificationWidgetBase : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    OnToastReceived;                                          // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	int                                                MaxToastNotification;                                     // 0x04E8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentToastCount;                                        // 0x04EC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsBusy;                                                   // 0x04F0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FToastData>                          ToastQueue;                                               // 0x04F8(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSToastNotificationWidgetBase");
		return ptr;
	}


	void TestDisplayChallengeNotification();
	void StoreToastQueue(struct FToastData* ToastNotification);
	void ShowToastNotification();
	void OnToastNotificationReceived(struct FToastData* ToastData);
	void OnChallengeCompleted(class UKSActivityInstance** Activity);
	void NotifyToastShown();
	void NotifyToastHidden();
	void HandlePartyMemberPromoted(int64_t* PlayerId);
	void HandlePartyMemberLeftGeneric();
	void HandlePartyMemberKick(int64_t* PlayerId);
	void HandlePartyMemberAdded(struct FPUMG_PartyMemberData* PartyMemberData);
	void HandlePartyLocalPlayerLeft();
	void HandlePartyInviteSent(struct FText* PlayerName);
	void HandlePartyInviteRejected();
	void HandlePartyInviteReceived(class UPUMG_PlayerInfo** PartyInviter);
	void HandlePartyInviteError(struct FText* PlayerName);
	void HandlePartyInviteAccepted();
	void HandlePartyDisbanded();
	void HandleFriendRejected(struct FText* PlayerName);
	void HandleFriendInviteReceived(struct FPUMG_FriendData* PlayerData);
	void HandleFriendAddSuccess(struct FString* PlayerName);
	void HandleFriendAdded(struct FText* PlayerName);
	class UKSPlayerChallengesManager* GetPlayerChallengesManager();
	class UKSPartyDataFactory* GetPartyDataFactory();
	bool GetNext(struct FToastData* NextToastNotification);
	class UKSFriendDataFactory* GetFriendDataFactory();
	void CreateMercMasteryLevelUpToasts(class UKSActivityInstance** MercMasteryActivityInstance, struct FActivityTier* TierObtained);
	void ClearNotificationQueue();
};


// Class KillstreakUINew.KSTopBarStatusIconInterface
// 0x0000 (0x0028 - 0x0028)
class UKSTopBarStatusIconInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTopBarStatusIconInterface");
		return ptr;
	}


	void UnbindEventFromTopBarStatusIconShowingChanged(struct FScriptDelegate* Callback);
	bool IsInTopBarStatusIconShowingState();
	class UTexture2D* GetTopBarStatusIconTexture();
	void BindEventToTopBarStatusIconShowingChanged(struct FScriptDelegate* Callback);
};


// Class KillstreakUINew.KSTreeView
// 0x0008 (0x03C8 - 0x03C0)
class UKSTreeView : public UTreeView
{
public:
	TWeakObjectPtr<class APUMG_HUD>                    MyHud;                                                    // 0x03C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTreeView");
		return ptr;
	}


	void UninitializeWidget();
	void NavigateSelectItem(class UObject** Item);
	bool IsItemExpanded(class UObject** Item);
	void InitializeWidget();
	int GetNumItemsInLayout();
	bool BP_GetEntryWidgetFromItem(class UObject** Item, class UUserWidget** OutWidget);
};


// Class KillstreakUINew.KSUIBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UKSUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSUIBlueprintFunctionLibrary");
		return ptr;
	}


	bool STATIC_UIX_ReportPlayer(struct FReportPlayerParams* Params);
	struct FReportPlayerParams STATIC_SetupReportPlayerFromScoreboardStats(int64_t* PlayerId, struct FScoreboardStats* State);
	struct FReportPlayerParams STATIC_SetupReportPlayerFromGameState(int64_t* PlayerId, class AKSGameState** State);
	void STATIC_SetHiddenCursorMode(class UObject** WorldContextObject, class APlayerController** PlayerController, bool* ShouldHide);
	void STATIC_ResetHiddenCursorMode(class UObject** WorldContextObject, class APlayerController** PlayerController);
	void STATIC_RegisterGridNavigation(class UPUMG_Widget** ParentWidget, int* FocusGroup, TArray<class UWidget*>* NavWidgets, int* GridWidth);
	struct FText STATIC_Key_GetShortDisplayName(struct FKey* Key);
	bool STATIC_IsInsideMargins(class UObject** WorldContextObject, struct FVector2D* Translation, struct FVector2D* Margins);
	bool STATIC_IsInCenteredScreenRect(float* PositionX, float* PositionY, float* MarginX, float* MarginY);
	class UKSStoreItemHelper* STATIC_GetStoreItemHelper(class UObject** WorldContextObject);
	bool STATIC_GetQueueDisplayName(struct FText* DisplayNameText);
	class UPUMG_PlayerInfo* STATIC_GetLocalPlayerInfo(class APUMG_HUD** HUD);
	bool STATIC_GetKSJobItemByLootId(class UObject** WorldContextObject, int* LootTableItemId, bool* RequireActive, class UKSJobItem** JobItem);
	bool STATIC_GetKSJobItemByItemId(class UObject** WorldContextObject, int* ItemId, bool* RequireActive, class UKSJobItem** JobItem);
	TArray<int> STATIC_GetDigitsFromInt(int* Value);
	bool STATIC_DistanceToClosestScreenEdge(class UObject** WorldContextObject, struct FVector2D* Location, float* OutDistX, float* OutDistY);
	class UKSSettingsWidget* STATIC_CreateSettingsWidget(class APUMG_HUD** HUD, struct FKSSettingsWidgetConfig* WidgetConfig);
	int STATIC_CompareStrings(struct FString* LeftString, struct FString* RightString);
	void STATIC_ClearKeyboardFocus();
};


// Class KillstreakUINew.KSUISoundLibrary
// 0x0000 (0x0028 - 0x0028)
class UKSUISoundLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSUISoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSGenericSoundLibrary
// 0x0018 (0x0040 - 0x0028)
class UKSGenericSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               BackToScreenSound;                                        // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ErrorSound;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScreenTransitionSound;                                    // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGenericSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSButtonSoundLibrary
// 0x0018 (0x0040 - 0x0028)
class UKSButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ButtonClicked;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ButtonHovered;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ButtonUnhovered;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSScrollButtonSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSScrollButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ScrollClicked;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScrollHovered;                                            // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScrollUnhovered;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ScrollingSound;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScrollButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSShopSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSShopSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               ShopOpen;                                                 // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ShopClose;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PurchaseSucceeded;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PurchaseFailed;                                           // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSShopSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSToastSoundLibrary
// 0x0020 (0x0048 - 0x0028)
class UKSToastSoundLibrary : public UKSUISoundLibrary
{
public:
	class UAkAudioEvent*                               FriendToast;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               PartyToast;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               ErrorToast;                                               // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               InfoToast;                                                // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSToastSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.CommonVendorHelper
// 0x0000 (0x0028 - 0x0028)
class UCommonVendorHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.CommonVendorHelper");
		return ptr;
	}


	int STATIC_GetVendorIDFromEnum(EKSVendorTypes* VendorType);
};


// Class KillstreakUINew.KSViewedActiveWeaponCompWidget
// 0x0010 (0x05B0 - 0x05A0)
class UKSViewedActiveWeaponCompWidget : public UKSActiveWeaponComponentWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x05A0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveWeaponCompWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveGadgetWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSViewedActiveGadgetWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveGadgetWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveMedPackWidget
// 0x0010 (0x04F0 - 0x04E0)
class UKSViewedActiveMedPackWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x04E0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveMedPackWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedItemLabel
// 0x0018 (0x0520 - 0x0508)
class UKSViewedItemLabel : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0508(0x0008) MISSED OFFSET
	unsigned char                                      UpdateViewLimitPosition;                                  // 0x0510(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ViewLimitPosition;                                        // 0x0514(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedItemLabel");
		return ptr;
	}


	void UpdateLabelPosition();
	void UnbindToViewportResizeEvent();
	void TriggerLabelPositionUpdate();
	void OnLabelShow();
	void OnLabelHide();
	class UImage* GetViewLimitImage();
	class AActor* GetTrackedActor();
	class UCanvasPanel* GetOutermostCanvasPanel();
	bool GetOnScreenPositionForLabel(class APlayerController** Player, class AActor** InActor, struct FBox2D* OutBounds);
	class UCanvasPanel* GetLabelCanvasPanel();
	void BindToViewportResizeEvent();
};


// Class KillstreakUINew.KSViewedPawnDamageDisplay
// 0x0040 (0x0548 - 0x0508)
class UKSViewedPawnDamageDisplay : public UKSViewedPawnWidget
{
public:
	float                                              StackingDelay;                                            // 0x0508(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      TetherToEventLocation;                                    // 0x050C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	int                                                MaxNumDamageWidgetsOnScreen;                              // 0x0510(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UCanvasPanel*                                DamageNumberContainer;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UDamageNumberDisplayWidget*>          CurrentDamageNumbersOnScreen;                             // 0x0520(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UDamageNumberDisplayWidget*>          DamageNumbersPool;                                        // 0x0530(0x0010) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0540(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnDamageDisplay");
		return ptr;
	}


	void PrimeDamageNumbersWidgetPool();
	void HandlePhaseChange(struct FName* NewPhaseName, struct FName* PreviousPhaseName);
	void HandleInstigateDamageNotify(struct FCombatEventInfo* DamageInfo);
	void HandleFlourishAnimationCompleted(class UDamageNumberDisplayWidget** DamageNumberWidget);
	class UDamageNumberDisplayWidget* GetDamageNumberWidgetInstance();
	void ClearDamageNumbersOnScreen();
};


// Class KillstreakUINew.DamageNumberDisplayWidget
// 0x0098 (0x02C8 - 0x0230)
class UDamageNumberDisplayWidget : public UUserWidget
{
public:
	struct FScriptMulticastDelegate                    OnFlourishAnimationComplete;                              // 0x0230(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0230(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class AActor*                                      DamageTarget;                                             // 0x0240(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InitialDamageLocation;                                    // 0x0248(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      TetherToEventLocation;                                    // 0x0254(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0258(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsLethal;                                                 // 0x025C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsHeadshot;                                               // 0x025D(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsShieldHit;                                              // 0x025E(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsReduced;                                                // 0x025F(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      IsResisted;                                               // 0x0260(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DelayBeforeFade;                                          // 0x0264(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayingFlourish;                                          // 0x0268(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VerticalWorldOffset;                                      // 0x026C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<class UClass*, struct FSpecialDamageColors>   SpecialDamageTypes;                                       // 0x0270(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      ChangePosition;                                           // 0x02C0(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.DamageNumberDisplayWidget");
		return ptr;
	}


	void SetDisplayInformation(class AActor** InTargetActor, bool* InTetherToEventLocation, class UClass** DamageType, float* InDamageAmount, bool* InIsLethal, bool* InIsHeadshot, float* InDelayWindow, bool* InShieldHit, bool* InDamageReduced, bool* InDamageResisted);
	void PlayFlourishAnimation();
	void OnDisplaySpecialDamageInfo(float* CurrentDamageAmount, struct FSpecialDamageColors* DamageColors, bool* bChangePosition);
	void OnDisplayInformationReset();
	bool IsDisplayStacking();
};


// Class KillstreakUINew.KSViewedPawnInventoryWidget
// 0x0038 (0x05A0 - 0x0568)
class UKSViewedPawnInventoryWidget : public UKSPawnInventoryWidget
{
public:
	struct FPlayerInventorySlot                        ActiveInventoryItem;                                      // 0x0568(0x0018) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x20];                                      // 0x0580(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnInventoryWidget");
		return ptr;
	}


	void OnUpdatedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot);
	void OnRemovedPawnInventorySlot(struct FPlayerInventorySlot* InventorySlot);
	void OnActivePawnInventorySlot(struct FPlayerInventorySlot* InventorySlot);
	int GetSlotIndex(struct FGameplayTag* EquipPoint);
};


// Class KillstreakUINew.KSViewedPawnModsWidget
// 0x0018 (0x0520 - 0x0508)
class UKSViewedPawnModsWidget : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0508(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnModsWidget");
		return ptr;
	}


	void OnViewedPawnModAdded(class UKSPlayerMod** Mod, class UKSPlayerModInstance** ModInstance);
	class UOverlay* GetOverlay();
};


// Class KillstreakUINew.KSViewRedirector_LocalSetting
// 0x0008 (0x0030 - 0x0028)
class UKSViewRedirector_LocalSetting : public UPUMG_ViewRedirecter
{
public:
	struct FName                                       LocalActionName;                                          // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewRedirector_LocalSetting");
		return ptr;
	}


	bool DoesLocalSettingApply(class APUMG_HUD** HUD);
};


// Class KillstreakUINew.KSVoiceActivityWidget
// 0x0070 (0x0548 - 0x04D8)
class UKSVoiceActivityWidget : public UKSWidget
{
public:
	struct FScriptMulticastDelegate                    VoiceAccountNamePairsUpdated;                             // 0x04D8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x04D8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    VoiceParticipantAdded;                                    // 0x04E8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x04E8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    VoiceParticipantRemoved;                                  // 0x04F8(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x04F8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    VoiceParticipantUpdated;                                  // 0x0508(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x0508(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    VoiceAudioStateChange;                                    // 0x0518(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x0518(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData05[0x20];                                      // 0x0528(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSVoiceActivityWidget");
		return ptr;
	}


	void OnVoiceParticipantUpdated(struct FString* AccountId, bool* bIsTalking, bool* bIsMuted);
	void OnVoiceParticipantRemoved(struct FString* AccountId);
	void OnVoiceParticipantAdded(struct FString* AccountId);
	struct FString GetVoiceIdByPlayerId(int64_t* PlayerId);
	class AKSPlayerState* GetPlayerStateByVoiceId(struct FString* VoiceId);
	int64_t GetPlayerIdByVoiceId(struct FString* VoiceId);
};


// Class KillstreakUINew.KSVoucherAcquisition
// 0x0000 (0x04D8 - 0x04D8)
class UKSVoucherAcquisition : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSVoucherAcquisition");
		return ptr;
	}


	void DisplayVoucherRedemptionFailed();
};


// Class KillstreakUINew.KSWeaponComponentWidget
// 0x0020 (0x04F8 - 0x04D8)
class UKSWeaponComponentWidget : public UKSWidget
{
public:
	TWeakObjectPtr<class UKSWeaponComponent>           WeaponComponent;                                          // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	uint16_t                                           EquipmentId;                                              // 0x04E0(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x16];                                      // 0x04E2(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponComponentWidget");
		return ptr;
	}


	void SetOwningWeaponComponent(class UKSWeaponComponent** InWeaponComponent);
	void PreClearWeaponComponent();
	void PostSetWeaponComponent();
	void OnEndActiveWeaponComponent();
	void OnBecomeActiveWeaponComponent();
	bool IsWeaponComponentActive();
	class UKSWeaponComponent* GetWeaponComponent();
};


// Class KillstreakUINew.KSWeaponComponentAmmoWidget
// 0x0020 (0x0518 - 0x04F8)
class UKSWeaponComponentAmmoWidget : public UKSWeaponComponentWidget
{
public:
	int                                                CachedAmmoInClip;                                         // 0x04F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedClipSize;                                           // 0x04FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CachedInReserve;                                          // 0x0500(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      CachedIsReloading;                                        // 0x0504(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x0505(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponComponentAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged(int* OldInClip, int* OldClipSize, int* OldReserve, int* NewInClip, int* NewClipSize, int* NewReserve);
	bool IsReloading();
	int GetClipSize();
	int GetAmmoInReserve();
	int GetAmmoInClip();
};


// Class KillstreakUINew.KSWhatsNewModalViewRedirector
// 0x0000 (0x0028 - 0x0028)
class UKSWhatsNewModalViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewModalViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSWhatsNewPanel
// 0x0048 (0x0070 - 0x0028)
class UKSWhatsNewPanel : public UObject
{
public:
	struct FText                                       Header;                                                   // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FText                                       Description;                                              // 0x0040(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class UTexture2DDynamic*                           Image;                                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewPanel");
		return ptr;
	}

};


// Class KillstreakUINew.KSWhatsNewModal
// 0x0000 (0x04D8 - 0x04D8)
class UKSWhatsNewModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewModal");
		return ptr;
	}


	void OnJsonChanged();
	TArray<class UKSWhatsNewPanel*> GetPanelData();
	class UKSJsonDataFactory* GetJsonDataFactory();
};


// Class KillstreakUINew.TickAnimationManager
// 0x0050 (0x0078 - 0x0028)
class UTickAnimationManager : public UObject
{
public:
	TMap<struct FName, struct FTickAnimationParams>    AnimsByName;                                              // 0x0028(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.TickAnimationManager");
		return ptr;
	}


	void StopAnimation(struct FName* AnimName);
	void SkipToEndAnimation(struct FName* AnimName);
	void ResumeAnimation(struct FName* AnimName);
	void RemoveAnimation(struct FName* AnimName);
	void PlayAnimation(struct FName* AnimName);
	void PauseAnimation(struct FName* AnimName);
	bool GetAnimationInfo(struct FName* AnimName, struct FTickAnimationParams* OutAnimParams);
	void ApplyTick(float* DeltaTime);
	void AddAnimation(struct FName* AnimName, float* Duration, struct FScriptDelegate* UpdateEvent, struct FScriptDelegate* FinishedEvent);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
