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

// Class StaticMeshDescription.StaticMeshDescription
// 0x0000 (0x0390 - 0x0390)
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StaticMeshDescription.StaticMeshDescription");
		return ptr;
	}


	void SetVertexInstanceUV(struct FVertexInstanceID* VertexInstanceID, struct FVector2D* UV, int* UVIndex);
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID* PolygonGroupID, struct FName* SlotName);
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID* VertexInstanceID, int* UVIndex);
	void CreateCube(struct FVector* Center, struct FVector* HalfExtents, struct FPolygonGroupID* PolygonGroup, struct FPolygonID* PolygonID_PlusX, struct FPolygonID* PolygonID_MinusX, struct FPolygonID* PolygonID_PlusY, struct FPolygonID* PolygonID_MinusY, struct FPolygonID* PolygonID_PlusZ, struct FPolygonID* PolygonID_MinusZ);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
