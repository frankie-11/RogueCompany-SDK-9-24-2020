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

// DynamicClass FootstepNotify.FootstepNotify_C
// 0x0010 (0x0048 - 0x0038)
class UFootstepNotify_C : public UAnimNotify
{
public:
	EStepType                                          StepType;                                                 // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       BoneName;                                                 // 0x003C(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass FootstepNotify.FootstepNotify_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** bpp__MeshComp__pf, class UAnimSequenceBase** bpp__Animation__pf);
	void GetSFXMaterial(class UAnimInstance** bpp__AnimInstance__pf, struct FName* bpp__BonexName__pfT, struct FName* bpp__MaterialxReturn__pfT, class AActor** bpp__ActorxReturn__pfT);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
