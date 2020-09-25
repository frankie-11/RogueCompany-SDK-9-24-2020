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

// Class HiRezAnimationCommon.HiRezAnimationStatics
// 0x0000 (0x0028 - 0x0028)
class UHiRezAnimationStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HiRezAnimationCommon.HiRezAnimationStatics");
		return ptr;
	}


	float STATIC_FindPositionFromDistanceCurve(struct FName* DistanceCurveName, float* Distance, class UAnimSequenceBase** InAnimSequence);
};


// Class HiRezAnimationCommon.HRA_AnimNotify_PlayCameraAnim
// 0x0020 (0x0058 - 0x0038)
class UHRA_AnimNotify_PlayCameraAnim : public UAnimNotify
{
public:
	class UClass*                                      CameraShake;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Scale;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  Space;                                                    // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CustomPlaySpace;                                          // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HiRezAnimationCommon.HRA_AnimNotify_PlayCameraAnim");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
