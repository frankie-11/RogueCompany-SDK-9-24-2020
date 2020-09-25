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

// ScriptStruct BuildPatchServices.SHAHashData
// 0x0014
struct FSHAHashData
{
	unsigned char                                      Hash[0x14];                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.ChunkPartData
// 0x0018
struct FChunkPartData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Offset;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Size;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.FileManifestData
// 0x0068
struct FFileManifestData
{
	struct FString                                     Filename;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FSHAHashData                                FileHash;                                                 // 0x0010(0x0014)
	TArray<struct FChunkPartData>                      FileChunkParts;                                           // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FString>                             InstallTags;                                              // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      bIsUnixExecutable;                                        // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     SymlinkTarget;                                            // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      bIsReadOnly;                                              // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bIsCompressed;                                            // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// 0x0040
struct FChunkInfoData
{
	struct FGuid                                       Guid;                                                     // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           Hash;                                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FSHAHashData                                ShaHash;                                                  // 0x0018(0x0014)
	int64_t                                            FileSize;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      GroupNumber;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct BuildPatchServices.CustomFieldData
// 0x0020
struct FCustomFieldData
{
	struct FString                                     Key;                                                      // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif