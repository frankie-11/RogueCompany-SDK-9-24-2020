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

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFrameTranslator
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFrameTranslator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFrameTranslator");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkVirtualSubject
// 0x00B0 (0x00D8 - 0x0028)
class ULiveLinkVirtualSubject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UClass*                                      Role;                                                     // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FLiveLinkSubjectName>                Subjects;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class ULiveLinkFrameTranslator*>            FrameTranslators;                                         // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData01[0x80];                                      // 0x0058(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkVirtualSubject");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkFramePreProcessor
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkFramePreProcessor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkFramePreProcessor");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkSourceFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceFactory");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRole : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkBasicRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkBasicRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkAnimationRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkAnimationRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkTransformRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkTransformRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCameraRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCameraRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkController
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkController : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkController");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSourceSettings
// 0x0050 (0x0078 - 0x0028)
class ULiveLinkSourceSettings : public UObject
{
public:
	ELiveLinkSourceMode                                Mode;                                                     // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLiveLinkSourceBufferManagementSettings     BufferSettings;                                           // 0x002C(0x0030) (Edit)
	struct FString                                     ConnectionString;                                         // 0x0060(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      Factory;                                                  // 0x0070(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSourceSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// 0x0050 (0x00C8 - 0x0078)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings            CurveConversionSettings;                                  // 0x0078(0x0050) (Edit, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkCurveRemapSettings");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkLightRole
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkLightRole");
		return ptr;
	}

};


// Class LiveLinkInterface.LiveLinkSubjectSettings
// 0x0030 (0x0058 - 0x0028)
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>          PreProcessors;                                            // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor)
	class ULiveLinkFrameInterpolationProcessor*        InterpolationProcessor;                                   // 0x0038(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class ULiveLinkFrameTranslator*>            Translators;                                              // 0x0040(0x0010) (Edit, ExportObject, ZeroConstructor)
	class UClass*                                      Role;                                                     // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkInterface.LiveLinkSubjectSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
