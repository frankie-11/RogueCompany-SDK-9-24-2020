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

// BlueprintGeneratedClass DirectReviveDroneModInst.DirectReviveDroneModInst_C
// 0x0058 (0x04D8 - 0x0480)
class UDirectReviveDroneModInst_C : public UKSModInst_ReviveDrone
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnTargetDeath;                                            // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0488(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnTargetRevive;                                           // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0498(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnDroneDestroy;                                           // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData02[0xF];                                       // 0x04A8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnReviveBegin;                                            // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData03[0xF];                                       // 0x04B8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptMulticastDelegate                    OnReviveComplete;                                         // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	unsigned char                                      UnknownData04[0xF];                                       // 0x04C8(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DirectReviveDroneModInst.DirectReviveDroneModInst_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void OnActivation();
	void OnReviveDroneEvent(EKSReviveDroneEvent* KSReviveDroneEvent);
	void ExecuteUbergraph_DirectReviveDroneModInst(int* EntryPoint);
	void OnReviveComplete__DelegateSignature();
	void OnReviveBegin__DelegateSignature();
	void OnDroneDestroy__DelegateSignature();
	void OnTargetRevive__DelegateSignature();
	void OnTargetDeath__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
