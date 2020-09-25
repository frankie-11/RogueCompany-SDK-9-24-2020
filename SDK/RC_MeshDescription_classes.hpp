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

// Class MeshDescription.MeshDescription
// 0x0000 (0x0028 - 0x0028)
class UMeshDescription : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshDescription.MeshDescription");
		return ptr;
	}

};


// Class MeshDescription.MeshDescriptionBase
// 0x0368 (0x0390 - 0x0028)
class UMeshDescriptionBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x368];                                     // 0x0028(0x0368) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshDescription.MeshDescriptionBase");
		return ptr;
	}


	void SetVertexPosition(struct FVertexID* VertexID, struct FVector* Position);
	void SetPolygonVertexInstance(struct FPolygonID* PolygonID, int* PerimeterIndex, struct FVertexInstanceID* VertexInstanceID);
	void SetPolygonPolygonGroup(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID);
	void ReversePolygonFacing(struct FPolygonID* PolygonID);
	void ReserveNewVertices(int* NumberOfNewVertices);
	void ReserveNewVertexInstances(int* NumberOfNewVertexInstances);
	void ReserveNewTriangles(int* NumberOfNewTriangles);
	void ReserveNewPolygons(int* NumberOfNewPolygons);
	void ReserveNewPolygonGroups(int* NumberOfNewPolygonGroups);
	void ReserveNewEdges(int* NumberOfNewEdges);
	bool IsVertexValid(struct FVertexID* VertexID);
	bool IsVertexOrphaned(struct FVertexID* VertexID);
	bool IsVertexInstanceValid(struct FVertexInstanceID* VertexInstanceID);
	bool IsTriangleValid(struct FTriangleID* TriangleID);
	bool IsTrianglePartOfNgon(struct FTriangleID* TriangleID);
	bool IsPolygonValid(struct FPolygonID* PolygonID);
	bool IsPolygonGroupValid(struct FPolygonGroupID* PolygonGroupID);
	bool IsEmpty();
	bool IsEdgeValid(struct FEdgeID* EdgeID);
	bool IsEdgeInternalToPolygon(struct FEdgeID* EdgeID, struct FPolygonID* PolygonID);
	bool IsEdgeInternal(struct FEdgeID* EdgeID);
	void GetVertexVertexInstances(struct FVertexID* VertexID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FVector GetVertexPosition(struct FVertexID* VertexID);
	struct FEdgeID GetVertexPairEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	struct FVertexID GetVertexInstanceVertex(struct FVertexInstanceID* VertexInstanceID);
	struct FEdgeID GetVertexInstancePairEdge(struct FVertexInstanceID* VertexInstanceID0, struct FVertexInstanceID* VertexInstanceID1);
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(struct FTriangleID* TriangleID, struct FVertexID* VertexID);
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(struct FPolygonID* PolygonID, struct FVertexID* VertexID);
	void GetVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedTriangles(struct FVertexID* VertexID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(struct FVertexID* VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void GetVertexConnectedEdges(struct FVertexID* VertexID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetVertexAdjacentVertices(struct FVertexID* VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
	void GetTriangleVertices(struct FTriangleID* TriangleID, TArray<struct FVertexID>* OutVertexIDs);
	void GetTriangleVertexInstances(struct FTriangleID* TriangleID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	struct FVertexInstanceID GetTriangleVertexInstance(struct FTriangleID* TriangleID, int* Index);
	struct FPolygonGroupID GetTrianglePolygonGroup(struct FTriangleID* TriangleID);
	struct FPolygonID GetTrianglePolygon(struct FTriangleID* TriangleID);
	void GetTriangleEdges(struct FTriangleID* TriangleID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetTriangleAdjacentTriangles(struct FTriangleID* TriangleID, TArray<struct FTriangleID>* OutTriangleIDs);
	void GetPolygonVertices(struct FPolygonID* PolygonID, TArray<struct FVertexID>* OutVertexIDs);
	void GetPolygonVertexInstances(struct FPolygonID* PolygonID, TArray<struct FVertexInstanceID>* OutVertexInstanceIDs);
	void GetPolygonTriangles(struct FPolygonID* PolygonID, TArray<struct FTriangleID>* OutTriangleIDs);
	struct FPolygonGroupID GetPolygonPolygonGroup(struct FPolygonID* PolygonID);
	void GetPolygonPerimeterEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetPolygonInternalEdges(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OutEdgeIDs);
	void GetPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID, TArray<struct FPolygonID>* OutPolygonIDs);
	void GetPolygonAdjacentPolygons(struct FPolygonID* PolygonID, TArray<struct FPolygonID>* OutPolygonIDs);
	int GetNumVertexVertexInstances(struct FVertexID* VertexID);
	int GetNumVertexInstanceConnectedTriangles(struct FVertexInstanceID* VertexInstanceID);
	int GetNumVertexInstanceConnectedPolygons(struct FVertexInstanceID* VertexInstanceID);
	int GetNumVertexConnectedTriangles(struct FVertexID* VertexID);
	int GetNumVertexConnectedPolygons(struct FVertexID* VertexID);
	int GetNumVertexConnectedEdges(struct FVertexID* VertexID);
	int GetNumPolygonVertices(struct FPolygonID* PolygonID);
	int GetNumPolygonTriangles(struct FPolygonID* PolygonID);
	int GetNumPolygonInternalEdges(struct FPolygonID* PolygonID);
	int GetNumPolygonGroupPolygons(struct FPolygonGroupID* PolygonGroupID);
	int GetNumEdgeConnectedTriangles(struct FEdgeID* EdgeID);
	int GetNumEdgeConnectedPolygons(struct FEdgeID* EdgeID);
	void GetEdgeVertices(struct FEdgeID* EdgeID, TArray<struct FVertexID>* OutVertexIDs);
	struct FVertexID GetEdgeVertex(struct FEdgeID* EdgeID, int* VertexNumber);
	void GetEdgeConnectedTriangles(struct FEdgeID* EdgeID, TArray<struct FTriangleID>* OutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(struct FEdgeID* EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(struct FVertexInstanceID* VertexInstanceID, TArray<struct FVertexID>* OrphanedVertices);
	void DeleteVertex(struct FVertexID* VertexID);
	void DeleteTriangle(struct FTriangleID* TriangleID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(struct FPolygonGroupID* PolygonGroupID);
	void DeletePolygon(struct FPolygonID* PolygonID, TArray<struct FEdgeID>* OrphanedEdges, TArray<struct FVertexInstanceID>* OrphanedVertexInstances, TArray<struct FPolygonGroupID>* OrphanedPolygonGroups);
	void DeleteEdge(struct FEdgeID* EdgeID, TArray<struct FVertexID>* OrphanedVertices);
	void CreateVertexWithID(struct FVertexID* VertexID);
	void CreateVertexInstanceWithID(struct FVertexInstanceID* VertexInstanceID, struct FVertexID* VertexID);
	struct FVertexInstanceID CreateVertexInstance(struct FVertexID* VertexID);
	struct FVertexID CreateVertex();
	void CreateTriangleWithID(struct FTriangleID* TriangleID, struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	struct FTriangleID CreateTriangle(struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreatePolygonWithID(struct FPolygonID* PolygonID, struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreatePolygonGroupWithID(struct FPolygonGroupID* PolygonGroupID);
	struct FPolygonGroupID CreatePolygonGroup();
	struct FPolygonID CreatePolygon(struct FPolygonGroupID* PolygonGroupID, TArray<struct FVertexInstanceID>* VertexInstanceIDs, TArray<struct FEdgeID>* NewEdgeIDs);
	void CreateEdgeWithID(struct FEdgeID* EdgeID, struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	struct FEdgeID CreateEdge(struct FVertexID* VertexID0, struct FVertexID* VertexID1);
	void ComputePolygonTriangulation(struct FPolygonID* PolygonID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
