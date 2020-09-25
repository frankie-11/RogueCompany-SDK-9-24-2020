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

// BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C
// 0x0030 (0x0638 - 0x0608)
class ABP_BrightLobbyHUD_C : public ABP_BrightLobbyHUDMinimal_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0608(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBrightLobbyWidget_C*                        LobbyWidget;                                              // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      Loadout_Slot_Edit;                                        // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Loadout_Slot_Change;                                      // 0x0620(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0619(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FName                                       MatchLoadingRouteName;                                    // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C");
		return ptr;
	}


	void SetupQueueEvents();
	void CallRemoveTopViewRoute(bool* ForceTransition, bool* ViewChanged);
	void CallAddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, bool* ViewChanged);
	void SafeFrameSettingApplied();
	void BindSettingCallbacks();
	void InternalAddViewRoute(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, class UObject** Data, bool* ViewChanged);
	void OnAcquisition(class UKSAcquisition** Acquisition);
	class UKSContextBarWidget* GetContextBarWidget();
	void SwapViewRoute(struct FName* RouteName, struct FName* SwapTargetRoute, bool* ForceTransition);
	void Remove_Top_View_Route(bool* ForceTransition, bool* ViewChanged);
	void Add_View_Route(struct FName* RouteName, bool* ClearRouteStack, bool* ForceTransition, bool* ViewChanged);
	void HandeEOMResults(bool* ForceTransition);
	void GetCurrentTransitionRoute(struct FName* Current_Route);
	class UKSLobbyWidget* GetLobbyWidget();
	void Focus_Home_Screen();
	void Get_Current_View_Route(struct FName* Current_Route);
	void Focus_Sticky_Loadout_Panel();
	void EvaluateFocus();
	void Get_Current_Loadout_Slot(unsigned char* Current_Loadout_Slot);
	void Cache_Current_Loadout_Slot(unsigned char* Loadout_Slot_Edit);
	void InitialLobbyAnimStatesBinding();
	void TempBootstrapFunctionality();
	void FallbackLogoutCleanup();
	TArray<class UPanelWidget*> GetFocusableWidgetContainers();
	void Handle_Login_State_Change(EPUMG_LoginState* Login_State);
	class UPUMG_PopupManager* GetPopupManager();
	void ReceiveBeginPlay();
	void HandleEndPlayingPreMatch();
	void HandleBeginPlayingPreMatch();
	void HandleEndPlayingPostMatch();
	void HandleLoginCameraSet();
	void HandleMainLobbyCameraSet();
	void Handle_Party_Invite_Received(class UPUMG_PlayerInfo** Inviter);
	void HandleSettingsKeybind();
	void SetUIFocus();
	void HandleOpenTextChat(bool* BeginChatCommand);
	void OpenTextChatToPlayer(class UPUMG_PlayerInfo** Player);
	void ApplySafeFrameScale(float* SafeFrameScale);
	void OnCustomQueueJoin();
	void HandleRewardsReceived(struct FPlayerRewardsSummary* PlayerRewardsSummary, struct FScoreboardStats* ScoreboardStats);
	void ExecuteUbergraph_BP_BrightLobbyHUD(int* EntryPoint);
	void Loadout_Slot_Change__DelegateSignature(unsigned char* Loadout_Slot_Edit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
