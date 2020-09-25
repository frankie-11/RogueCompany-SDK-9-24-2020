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

// Class EngineSettings.ConsoleSettings
// 0x0048 (0x0070 - 0x0028)
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                   // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteMapPaths;                                     // 0x0040(0x0010) (Edit, ZeroConstructor, Config)
	float                                              BackgroundOpacityPercentage;                              // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bOrderTopToBottom;                                        // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bDisplayHelpInAutoComplete;                               // 0x0055(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      InputColor;                                               // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      HistoryColor;                                             // 0x005C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCommandColor;                                 // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteCVarColor;                                    // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FColor                                      AutoCompleteFadedColor;                                   // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}

};


// Class EngineSettings.GameMapsSettings
// 0x00C8 (0x00F0 - 0x0028)
class UGameMapsSettings : public UObject
{
public:
	struct FString                                     LocalMapOptions;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             TransitionMap;                                            // 0x0038(0x0018) (Edit, ZeroConstructor, Config)
	unsigned char                                      bUseSplitscreen;                                          // 0x0050(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<ETwoPlayerSplitScreenType>             TwoPlayerSplitscreenLayout;                               // 0x0051(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	TEnumAsByte<EThreePlayerSplitScreenType>           ThreePlayerSplitscreenLayout;                             // 0x0052(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	EFourPlayerSplitScreenType                         FourPlayerSplitscreenLayout;                              // 0x0053(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bOffsetPlayerGamepadIds;                                  // 0x0054(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FSoftClassPath                              GameInstanceClass;                                        // 0x0058(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftObjectPath                             GameDefaultMap;                                           // 0x0070(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftObjectPath                             ServerDefaultMap;                                         // 0x0088(0x0018) (Edit, ZeroConstructor, Config)
	struct FSoftClassPath                              GlobalDefaultGameMode;                                    // 0x00A0(0x0018) (Edit, ZeroConstructor, Config, NoClear)
	struct FSoftClassPath                              GlobalDefaultServerGameMode;                              // 0x00B8(0x0018) (Edit, ZeroConstructor, Config)
	TArray<struct FGameModeName>                       GameModeMapPrefixes;                                      // 0x00D0(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FGameModeName>                       GameModeClassAliases;                                     // 0x00E0(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}


	void SetSkipAssigningGamepadToPlayer1(bool* bSkipFirstPlayer);
	bool GetSkipAssigningGamepadToPlayer1();
	class UGameMapsSettings* STATIC_GetGameMapsSettings();
};


// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (0x0058 - 0x0028)
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                      // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxDynamicBandwidth;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                TotalNetBandwidth;                                        // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                BadPingThreshold;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                            // 0x0038(0x0001) (Edit, Config BITFIELD: 0101)
	float                                              StandbyRxCheatTime;                                       // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              StandbyTxCheatTime;                                       // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForRxStandby;                               // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentMissingForTxStandby;                               // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              PercentForBadPing;                                        // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	float                                              JoinInProgressStandbyWaitTime;                            // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}

};


// Class EngineSettings.GameSessionSettings
// 0x0010 (0x0038 - 0x0028)
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                            // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	int                                                MaxPlayers;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	unsigned char                                      bRequiresPushToTalk : 1;                                  // 0x0030(0x0001) (Edit, Config, GlobalConfig BITFIELD: 0101)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralEngineSettings
// 0x0000 (0x0028 - 0x0028)
class UGeneralEngineSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}

};


// Class EngineSettings.GeneralProjectSettings
// 0x00F0 (0x0118 - 0x0028)
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                              // 0x0028(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CompanyDistinguishedName;                                 // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     CopyrightNotice;                                          // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Description;                                              // 0x0058(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     Homepage;                                                 // 0x0068(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     LicensingTerms;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     PrivacyPolicy;                                            // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	struct FGuid                                       ProjectID;                                                // 0x0098(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     ProjectName;                                              // 0x00A8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     ProjectVersion;                                           // 0x00B8(0x0010) (Edit, ZeroConstructor, Config)
	struct FString                                     SupportContact;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor, Config)
	struct FText                                       ProjectDisplayedTitle;                                    // 0x00D8(0x0018) (Edit, Config)
	struct FText                                       ProjectDebugTitleInfo;                                    // 0x00F0(0x0018) (Edit, Config)
	unsigned char                                      bShouldWindowPreserveAspectRatio;                         // 0x0108(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bUseBorderlessWindow;                                     // 0x0109(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bStartInVR;                                               // 0x010A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bStartInAR;                                               // 0x010B(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bSupportAR;                                               // 0x010C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bAllowWindowResize;                                       // 0x010D(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAllowClose;                                              // 0x010E(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAllowMaximize;                                           // 0x010F(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      bAllowMinimize;                                           // 0x0110(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}

};


// Class EngineSettings.HudSettings
// 0x0018 (0x0040 - 0x0028)
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                             // 0x0028(0x0001) (Edit, Config BITFIELD: 0101)
	TArray<struct FName>                               DebugDisplay;                                             // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
