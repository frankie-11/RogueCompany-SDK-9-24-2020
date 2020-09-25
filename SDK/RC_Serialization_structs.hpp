#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// 0x0030
struct FStructSerializerNumericTestStruct
{
	int8_t                                             Int8;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	int16_t                                            Int16;                                                    // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int                                                Int32;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int64_t                                            Int64;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UInt8;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           UInt16;                                                   // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           UInt32;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UInt64;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Float;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	double                                             Double;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// 0x0003
struct FStructSerializerBooleanTestStruct
{
	unsigned char                                      BoolFalse;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BoolTrue;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Bitfield0 : 1;                                            // 0x0002(0x0001) ( BITFIELD: 0101)
	unsigned char                                      Bitfield1 : 1;                                            // 0x0002(0x0001) ( BITFIELD: 0202)
	unsigned char                                      Bitfield2Set : 1;                                         // 0x0002(0x0001) ( BITFIELD: 0404)
	unsigned char                                      Bitfield3 : 1;                                            // 0x0002(0x0001) ( BITFIELD: 0808)
	unsigned char                                      Bitfield4Set : 1;                                         // 0x0002(0x0001) ( BITFIELD: 1010)
	unsigned char                                      Bitfield5Set : 1;                                         // 0x0002(0x0001) ( BITFIELD: 2020)
	unsigned char                                      Bitfield6 : 1;                                            // 0x0002(0x0001) ( BITFIELD: 4040)
	unsigned char                                      Bitfield7Set : 1;                                         // 0x0002(0x0001) ( BITFIELD: 8080)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// 0x00A0
struct FStructSerializerObjectTestStruct
{
	class UClass*                                      Class;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SubClass;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty Serialization.StructSerializerObjectTestStruct.SoftClass
	class UObject*                                     Object;                                                   // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UMetaData>                    WeakObject;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Serialization.StructSerializerObjectTestStruct.SoftObject
	struct FSoftClassPath                              ClassPath;                                                // 0x0070(0x0018) (ZeroConstructor)
	struct FSoftObjectPath                             ObjectPath;                                               // 0x0088(0x0018) (ZeroConstructor)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// 0x0090
struct FStructSerializerBuiltinTestStruct
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // 0x0018(0x0010) (ZeroConstructor)
	struct FText                                       Text;                                                     // 0x0028(0x0018)
	struct FVector                                     Vector;                                                   // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector4                                    Vector4;                                                  // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotator;                                                  // 0x0060(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FQuat                                       Quat;                                                     // 0x0070(0x0010) (IsPlainOldData)
	struct FColor                                      Color;                                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0084(0x000C) MISSED OFFSET
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// 0x0050
struct FStructSerializerArrayTestStruct
{
	TArray<int>                                        Int32Array;                                               // 0x0000(0x0010) (ZeroConstructor)
	int                                                StaticSingleElement;                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                StaticInt32Array[0x3];                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              StaticFloatArray[0x3];                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             VectorArray;                                              // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FStructSerializerBuiltinTestStruct>  StructArray;                                              // 0x0040(0x0010) (ZeroConstructor)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// 0x0140
struct FStructSerializerMapTestStruct
{
	TMap<int, struct FString>                          IntToStr;                                                 // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FString>               StrToStr;                                                 // 0x0050(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVector>               StrToVec;                                                 // 0x00A0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;                                              // 0x00F0(0x0050) (ZeroConstructor)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
// 0x0140
struct FStructSerializerSetTestStruct
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty Serialization.StructSerializerSetTestStruct.StrSet
	unsigned char                                      UnknownData01[0x50];                                      // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty Serialization.StructSerializerSetTestStruct.IntSet
	unsigned char                                      UnknownData02[0x50];                                      // 0x00A0(0x0050) UNKNOWN PROPERTY: SetProperty Serialization.StructSerializerSetTestStruct.NameSet
	unsigned char                                      UnknownData03[0x50];                                      // 0x00F0(0x0050) UNKNOWN PROPERTY: SetProperty Serialization.StructSerializerSetTestStruct.StructSet
};

// ScriptStruct Serialization.StructSerializerTestStruct
// 0x0440
struct FStructSerializerTestStruct
{
	struct FStructSerializerNumericTestStruct          Numerics;                                                 // 0x0000(0x0030)
	struct FStructSerializerBooleanTestStruct          Booleans;                                                 // 0x0030(0x0003)
	struct FStructSerializerObjectTestStruct           Objects;                                                  // 0x0038(0x00A0)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	struct FStructSerializerBuiltinTestStruct          Builtins;                                                 // 0x00E0(0x0090)
	struct FStructSerializerArrayTestStruct            Arrays;                                                   // 0x0170(0x0050)
	struct FStructSerializerMapTestStruct              Maps;                                                     // 0x01C0(0x0140)
	struct FStructSerializerSetTestStruct              Sets;                                                     // 0x0300(0x0140)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
