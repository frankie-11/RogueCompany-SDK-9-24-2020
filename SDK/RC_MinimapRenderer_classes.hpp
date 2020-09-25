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

// BlueprintGeneratedClass MinimapRenderer.MinimapRenderer_C
// 0x0060 (0x0278 - 0x0218)
class AMinimapRenderer_C : public AKSMinimapRendererBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                            TestCam;                                                  // 0x0220(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                  // 0x0228(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTexture2D*                                  WorkingTexture;                                           // 0x0238(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	float                                              MapWidth;                                                 // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0244(0x0028) UNKNOWN PROPERTY: SoftObjectProperty MinimapRenderer.MinimapRenderer_C.TextureAssetPtr
	float                                              HeightDifferenceThreshold;                                // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TextureSize;                                              // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MinimapRenderer.MinimapRenderer_C");
		return ptr;
	}


	float GetMinimapWidth();
	void UserConstructionScript();
	void OnLoaded_1F80951A45CA8E54458A18AA362E670C(class UObject** Loaded);
	void _3_CaptureMinimap();
	void _1_LoadMinimapTexture();
	void _5_ResetVRAM();
	void _4_SaveToTexture();
	void _2_PrepareRenderTarget();
	void ExecuteUbergraph_MinimapRenderer(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
