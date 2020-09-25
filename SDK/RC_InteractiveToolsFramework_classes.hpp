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

// Class InteractiveToolsFramework.InputBehavior
// 0x0008 (0x0030 - 0x0028)
class UInputBehavior : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0008 (0x0038 - 0x0030)
class UAnyButtonInputBehavior : public UInputBehavior
{
public:
	int                                                ButtonNumber;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveGizmoBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmo
// 0x0010 (0x0038 - 0x0028)
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x00B8 (0x00F0 - 0x0038)
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> AngleSource;                                              // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationOrigin;                                           // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationAxis;                                             // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneX;                                           // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     RotationPlaneY;                                           // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartAngle;                                    // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurAngle;                                      // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00DC(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x00A0 (0x00D8 - 0x0038)
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoFloatParameterSource> ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxis;                                          // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionStartParameter;                                // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InteractionCurParameter;                                  // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00C4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x003C(0x000C) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	struct FVector                                     Origin;                                                   // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x0018 (0x0040 - 0x0028)
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class USceneComponent*                             Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                AxisIndex;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bLocalAxes;                                               // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x00B8 (0x00F0 - 0x0038)
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UInteractiveToolBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveTool
// 0x0028 (0x0050 - 0x0028)
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInputBehaviorSet*                           InputBehaviors;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<class UObject*>                             ToolPropertyObjects;                                      // 0x0038(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragTool
// 0x0008 (0x0058 - 0x0050)
class UClickDragTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0x0000 (0x0218 - 0x0218)
class AInternalToolFrameworkActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoActor
// 0x0000 (0x0218 - 0x0218)
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x0020 (0x0430 - 0x0410)
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0410(0x0008) MISSED OFFSET
	float                                              HoverSizeMultiplier;                                      // 0x0418(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PixelHitDistanceThreshold;                                // 0x041C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0420(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}


	void UpdateWorldLocalState(bool* bWorldIn);
	void UpdateHoverState(bool* bHoveringIn);
};


// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x0020 (0x0450 - 0x0430)
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	float                                              Gap;                                                      // 0x0434(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Length;                                                   // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0440(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x0020 (0x0450 - 0x0430)
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	float                                              Radius;                                                   // 0x0434(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0438(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bViewAligned;                                             // 0x0440(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bOnlyAllowFrontFacingHits;                                // 0x0441(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x0442(0x000E) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoTransformSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}


	void SetTransform(struct FTransform* NewTransform);
	struct FTransform GetTransform();
};


// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoAxisSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}


	bool HasTangentVectors();
	void GetTangentVectors(struct FVector* TangentXOut, struct FVector* TangentYOut);
	struct FVector GetOrigin();
	struct FVector GetDirection();
};


// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoClickTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}


	void UpdateHoverState(bool* bHovering);
};


// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000 (0x0028 - 0x0028)
class UGizmoStateTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}


	void EndUpdate();
	void BeginUpdate();
};


// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoFloatParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}


	void SetParameter(float* NewValue);
	float GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000 (0x0028 - 0x0028)
class UGizmoVec2ParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}


	void SetParameter(struct FVector2D* NewValue);
	struct FVector2D GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x0030 (0x0460 - 0x0430)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	struct FVector                                     DirectionY;                                               // 0x0434(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetX;                                                  // 0x0440(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OffsetY;                                                  // 0x0444(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthX;                                                  // 0x0448(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LengthY;                                                  // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // 0x0450(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0454(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x0058 (0x0080 - 0x0028)
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UPrimitiveComponent*                         Component;                                                // 0x0030(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0038(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSet
// 0x0010 (0x0038 - 0x0028)
class UInputBehaviorSet : public UObject
{
public:
	TArray<struct FBehaviorInfo>                       Behaviors;                                                // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000 (0x0028 - 0x0028)
class UInputBehaviorSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputRouter
// 0x0088 (0x00B0 - 0x0028)
class UInputRouter : public UObject
{
public:
	unsigned char                                      bAutoInvalidateOnHover;                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bAutoInvalidateOnCapture;                                 // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xE];                                       // 0x002A(0x000E) MISSED OFFSET
	class UInputBehaviorSet*                           ActiveInputBehaviors;                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x0090 (0x00B8 - 0x0028)
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	TArray<struct FActiveGizmo>                        ActiveGizmos;                                             // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0040(0x0018) MISSED OFFSET
	TMap<struct FString, class UInteractiveGizmoBuilder*> GizmoBuilders;                                            // 0x0058(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00A8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x0020 (0x0048 - 0x0028)
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UObject*                                     CachedProperties;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000 (0x0028 - 0x0028)
class UToolContextTransactionProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolManager
// 0x00C0 (0x00E8 - 0x0028)
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UInteractiveTool*                            ActiveLeftTool;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveTool*                            ActiveRightTool;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x48];                                      // 0x0040(0x0048) MISSED OFFSET
	TMap<struct FString, class UInteractiveToolBuilder*> ToolBuilders;                                             // 0x0088(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000 (0x0028 - 0x0028)
class UToolFrameworkComponent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x0018 (0x0040 - 0x0028)
class UInteractiveToolsContext : public UObject
{
public:
	class UInputRouter*                                InputRouter;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveToolManager*                     ToolManager;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInteractiveGizmoManager*                    GizmoManager;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}

};


// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x00E0 (0x0110 - 0x0030)
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xE0];                                      // 0x0030(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0000 (0x0028 - 0x0028)
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleSelectionTool
// 0x0008 (0x0058 - 0x0050)
class USingleSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0010 (0x0068 - 0x0058)
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0058(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointToolMouseBehavior
// 0x0028 (0x0060 - 0x0038)
class UMeshSurfacePointToolMouseBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0038(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolMouseBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0068 (0x0098 - 0x0030)
class UMouseHoverBehavior : public UInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x00B8 (0x00F0 - 0x0038)
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiSelectionTool
// 0x0010 (0x0060 - 0x0050)
class UMultiSelectionTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0050(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseFloatParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	float                                              Value;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x004C(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseVec2ParameterSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x0018 (0x0060 - 0x0048)
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	struct FVector2D                                   Value;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0050(0x0010)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x0078 (0x00C0 - 0x0048)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Parameter;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x006C(0x0008)
	struct FVector                                     CurTranslationAxis;                                       // 0x0074(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationOrigin;                                     // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // 0x0090(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x0098 (0x00E0 - 0x0048)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Parameter;                                                // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGizmoVec2ParameterChange                   LastChange;                                               // 0x0070(0x0010)
	struct FVector                                     CurTranslationOrigin;                                     // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationNormal;                                     // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisX;                                      // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurTranslationAxisY;                                      // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // 0x00B0(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x0078 (0x00C0 - 0x0048)
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoTransformSource>      TransformSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGizmoFloatParameterChange                  LastChange;                                               // 0x006C(0x0008)
	struct FVector                                     CurRotationAxis;                                          // 0x0074(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     CurRotationOrigin;                                        // 0x0080(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  InitialTransform;                                         // 0x0090(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000 (0x0028 - 0x0028)
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x00C0 (0x00F8 - 0x0038)
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET
	TScriptInterface<class UGizmoAxisSource>           AxisSource;                                               // 0x0048(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoVec2ParameterSource>  ParameterSource;                                          // 0x0058(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoClickTarget>          HitTarget;                                                // 0x0068(0x0010) (ZeroConstructor, IsPlainOldData)
	TScriptInterface<class UGizmoStateTarget>          StateTarget;                                              // 0x0078(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bInInteraction;                                           // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionOrigin;                                        // 0x008C(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionNormal;                                        // 0x0098(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisX;                                         // 0x00A4(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionAxisY;                                         // 0x00B0(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionStartPoint;                                    // 0x00BC(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     InteractionCurPoint;                                      // 0x00C8(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionStartParameter;                                // 0x00D4(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   InteractionCurParameter;                                  // 0x00DC(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x14];                                      // 0x00E4(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SelectionSet
// 0x0018 (0x0040 - 0x0028)
class USelectionSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSelectionSet
// 0x0040 (0x0080 - 0x0040)
class UMeshSelectionSet : public USelectionSet
{
public:
	TArray<int>                                        Vertices;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<int>                                        Edges;                                                    // 0x0050(0x0010) (ZeroConstructor)
	TArray<int>                                        Faces;                                                    // 0x0060(0x0010) (ZeroConstructor)
	TArray<int>                                        Groups;                                                   // 0x0070(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x0058 (0x0090 - 0x0038)
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0038(0x0048) MISSED OFFSET
	unsigned char                                      HitTestOnRelease;                                         // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF];                                       // 0x0081(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000 (0x0028 - 0x0028)
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickTool
// 0x0008 (0x0058 - 0x0050)
class USingleClickTool : public UInteractiveTool
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0008 (0x0030 - 0x0028)
class UGizmoNilStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0088 (0x00B0 - 0x0028)
class UGizmoLambdaStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x0028(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0030 (0x0058 - 0x0028)
class UGizmoObjectModifyStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x00A8 (0x00D0 - 0x0028)
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET
	TScriptInterface<class UToolContextTransactionProvider> TransactionManager;                                       // 0x0050(0x0010) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0060(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoActor
// 0x0048 (0x0260 - 0x0218)
class ATransformGizmoActor : public AGizmoActor
{
public:
	class UPrimitiveComponent*                         TranslateX;                                               // 0x0218(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateY;                                               // 0x0220(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateZ;                                               // 0x0228(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateYZ;                                              // 0x0230(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXZ;                                              // 0x0238(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         TranslateXY;                                              // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateX;                                                  // 0x0248(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateY;                                                  // 0x0250(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPrimitiveComponent*                         RotateZ;                                                  // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0098 (0x00C0 - 0x0028)
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0028(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmo
// 0x00E8 (0x0120 - 0x0038)
class UTransformGizmo : public UInteractiveGizmo
{
public:
	class UTransformProxy*                             ActiveTarget;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0040(0x0090) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 ActiveComponents;                                         // 0x00D0(0x0010) (ExportObject, ZeroConstructor)
	TArray<class UInteractiveGizmo*>                   ActiveGizmos;                                             // 0x00E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	class UGizmoComponentAxisSource*                   AxisXSource;                                              // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisYSource;                                              // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoComponentAxisSource*                   AxisZSource;                                              // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	class UGizmoTransformChangeStateTarget*            StateTarget;                                              // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformProxy
// 0x0098 (0x00C0 - 0x0028)
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	unsigned char                                      bRotatePerObject;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bSetPivotMode;                                            // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1E];                                      // 0x0042(0x001E) MISSED OFFSET
	struct FTransform                                  SharedTransform;                                          // 0x0060(0x0030) (IsPlainOldData)
	struct FTransform                                  InitialSharedTransform;                                   // 0x0090(0x0030) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0020 (0x0048 - 0x0028)
class UGizmoBaseTransformSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0028(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x0010 (0x0058 - 0x0048)
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	class USceneComponent*                             Component;                                                // 0x0048(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      bModifyComponentOnTransform;                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x0008 (0x0050 - 0x0048)
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	class UTransformProxy*                             Proxy;                                                    // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
