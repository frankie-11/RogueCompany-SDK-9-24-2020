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

// Class LiveLinkComponents.LiveLinkControllerBase
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkControllerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkControllerBase");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkCameraController
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkCameraController : public ULiveLinkControllerBase
{
public:
	struct FComponentReference                         ComponentToControl;                                       // 0x0028(0x0028) (Edit)
	struct FLiveLinkTransformControllerData            TransformData;                                            // 0x0050(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkCameraController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkComponentController
// 0x0038 (0x00E8 - 0x00B0)
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation              SubjectRepresentation;                                    // 0x00B0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULiveLinkControllerBase*                     Controller;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData)
	unsigned char                                      bUpdateInEditor;                                          // 0x00C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLiveLinkUpdated;                                        // 0x00D0(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00C9(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkComponentController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkLightController
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:
	struct FComponentReference                         ComponentToControl;                                       // 0x0028(0x0028) (Edit)
	struct FLiveLinkTransformControllerData            TransformData;                                            // 0x0050(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkLightController");
		return ptr;
	}

};


// Class LiveLinkComponents.LiveLinkTransformController
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FComponentReference                         ComponentToControl;                                       // 0x0028(0x0028) (Edit)
	struct FLiveLinkTransformControllerData            TransformData;                                            // 0x0050(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkComponents.LiveLinkTransformController");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
