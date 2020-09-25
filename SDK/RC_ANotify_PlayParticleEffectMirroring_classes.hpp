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

// BlueprintGeneratedClass ANotify_PlayParticleEffectMirroring.ANotify_PlayParticleEffectMirroring_C
// 0x003C (0x0074 - 0x0038)
class UANotify_PlayParticleEffectMirroring_C : public UAnimNotify
{
public:
	class UParticleSystem*                             Particle_System;                                          // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location_Offset;                                          // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation_Offset;                                          // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket_Attach;                                            // 0x0064(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Socket_Attach_Mirrored;                                   // 0x006C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotify_PlayParticleEffectMirroring.ANotify_PlayParticleEffectMirroring_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
