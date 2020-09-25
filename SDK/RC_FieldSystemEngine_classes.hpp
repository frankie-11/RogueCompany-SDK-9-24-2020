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

// Class FieldSystemEngine.FieldSystemActor
// 0x0008 (0x0220 - 0x0218)
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                       FieldSystemComponent;                                     // 0x0218(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystem
// 0x0010 (0x0038 - 0x0028)
class UFieldSystem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemComponent
// 0x0040 (0x0450 - 0x0410)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0410(0x0010) MISSED OFFSET
	unsigned char                                      UnknownData01[0x10];                                      // 0x0410(0x0010) UNKNOWN PROPERTY: ArrayProperty FieldSystemEngine.FieldSystemComponent.SupportedSolvers
	unsigned char                                      UnknownData02[0x20];                                      // 0x0430(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}


	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce(bool* Enabled, struct FVector* Position, struct FVector* Direction, float* Radius, float* Magnitude);
	void ApplyStrainField(bool* Enabled, struct FVector* Position, float* Radius, float* Magnitude, int* Iterations);
	void ApplyStayDynamicField(bool* Enabled, struct FVector* Position, float* Radius);
	void ApplyRadialVectorFalloffForce(bool* Enabled, struct FVector* Position, float* Radius, float* Magnitude);
	void ApplyRadialForce(bool* Enabled, struct FVector* Position, float* Magnitude);
	void ApplyPhysicsField(bool* Enabled, TEnumAsByte<EFieldPhysicsType>* Target, class UFieldSystemMetaData** MetaData, class UFieldNodeBase** Field);
	void ApplyLinearForce(bool* Enabled, struct FVector* Direction, float* Magnitude);
	void AddFieldCommand(bool* Enabled, TEnumAsByte<EFieldPhysicsType>* Target, class UFieldSystemMetaData** MetaData, class UFieldNodeBase** Field);
};


// Class FieldSystemEngine.FieldSystemMetaData
// 0x0000 (0x00B0 - 0x00B0)
class UFieldSystemMetaData : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int                                                Iterations;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		return ptr;
	}


	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int* Iterations);
};


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x0008 (0x00B8 - 0x00B0)
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	TEnumAsByte<EFieldResolutionType>                  ResolutionType;                                           // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		return ptr;
	}


	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType>* ResolutionType);
};


// Class FieldSystemEngine.FieldNodeBase
// 0x0000 (0x00B0 - 0x00B0)
class UFieldNodeBase : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeInt
// 0x0000 (0x00B0 - 0x00B0)
class UFieldNodeInt : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeFloat
// 0x0000 (0x00B0 - 0x00B0)
class UFieldNodeFloat : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeVector
// 0x0000 (0x00B0 - 0x00B0)
class UFieldNodeVector : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		return ptr;
	}

};


// Class FieldSystemEngine.UniformInteger
// 0x0008 (0x00B8 - 0x00B0)
class UUniformInteger : public UFieldNodeInt
{
public:
	int                                                Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		return ptr;
	}


	class UUniformInteger* SetUniformInteger(int* Magnitude);
};


// Class FieldSystemEngine.RadialIntMask
// 0x0020 (0x00D0 - 0x00B0)
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                              Radius;                                                   // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InteriorValue;                                            // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ExteriorValue;                                            // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESetMaskConditionType>                 SetMaskCondition;                                         // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		return ptr;
	}


	class URadialIntMask* SetRadialIntMask(float* Radius, struct FVector* Position, int* InteriorValue, int* ExteriorValue, TEnumAsByte<ESetMaskConditionType>* SetMaskConditionIn);
};


// Class FieldSystemEngine.UniformScalar
// 0x0008 (0x00B8 - 0x00B0)
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		return ptr;
	}


	class UUniformScalar* SetUniformScalar(float* Magnitude);
};


// Class FieldSystemEngine.RadialFalloff
// 0x0028 (0x00D8 - 0x00B0)
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		return ptr;
	}


	class URadialFalloff* SetRadialFalloff(float* Magnitude, float* MinRange, float* MaxRange, float* Default, float* Radius, struct FVector* Position, TEnumAsByte<EFieldFalloffType>* Falloff);
};


// Class FieldSystemEngine.PlaneFalloff
// 0x0030 (0x00E0 - 0x00B0)
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Distance;                                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		return ptr;
	}


	class UPlaneFalloff* SetPlaneFalloff(float* Magnitude, float* MinRange, float* MaxRange, float* Default, float* Distance, struct FVector* Position, struct FVector* Normal, TEnumAsByte<EFieldFalloffType>* Falloff);
};


// Class FieldSystemEngine.BoxFalloff
// 0x0050 (0x0100 - 0x00B0)
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Default;                                                  // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  Transform;                                                // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EFieldFalloffType>                     Falloff;                                                  // 0x00F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x00F1(0x000F) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		return ptr;
	}


	class UBoxFalloff* SetBoxFalloff(float* Magnitude, float* MinRange, float* MaxRange, float* Default, struct FTransform* Transform, TEnumAsByte<EFieldFalloffType>* Falloff);
};


// Class FieldSystemEngine.NoiseField
// 0x0040 (0x00F0 - 0x00B0)
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                              MinRange;                                                 // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRange;                                                 // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00B8(0x0008) MISSED OFFSET
	struct FTransform                                  Transform;                                                // 0x00C0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		return ptr;
	}


	class UNoiseField* SetNoiseField(float* MinRange, float* MaxRange, struct FTransform* Transform);
};


// Class FieldSystemEngine.UniformVector
// 0x0010 (0x00C0 - 0x00B0)
class UUniformVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		return ptr;
	}


	class UUniformVector* SetUniformVector(float* Magnitude, struct FVector* Direction);
};


// Class FieldSystemEngine.RadialVector
// 0x0010 (0x00C0 - 0x00B0)
class URadialVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x00B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		return ptr;
	}


	class URadialVector* SetRadialVector(float* Magnitude, struct FVector* Position);
};


// Class FieldSystemEngine.RandomVector
// 0x0008 (0x00B8 - 0x00B0)
class URandomVector : public UFieldNodeVector
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		return ptr;
	}


	class URandomVector* SetRandomVector(float* Magnitude);
};


// Class FieldSystemEngine.OperatorField
// 0x0020 (0x00D0 - 0x00B0)
class UOperatorField : public UFieldNodeBase
{
public:
	float                                              Magnitude;                                                // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UFieldNodeBase*                              RightField;                                               // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              LeftField;                                                // 0x00C0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldOperationType>                   Operation;                                                // 0x00C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		return ptr;
	}


	class UOperatorField* SetOperatorField(float* Magnitude, class UFieldNodeBase** RightField, class UFieldNodeBase** LeftField, TEnumAsByte<EFieldOperationType>* Operation);
};


// Class FieldSystemEngine.ToIntegerField
// 0x0008 (0x00B8 - 0x00B0)
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                             FloatField;                                               // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		return ptr;
	}


	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat** FloatField);
};


// Class FieldSystemEngine.ToFloatField
// 0x0008 (0x00B8 - 0x00B0)
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                               IntField;                                                 // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		return ptr;
	}


	class UToFloatField* SetToFloatField(class UFieldNodeInt** IntegerField);
};


// Class FieldSystemEngine.CullingField
// 0x0018 (0x00C8 - 0x00B0)
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                              Culling;                                                  // 0x00B0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFieldNodeBase*                              Field;                                                    // 0x00B8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TEnumAsByte<EFieldCullingOperationType>            Operation;                                                // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		return ptr;
	}


	class UCullingField* SetCullingField(class UFieldNodeBase** Culling, class UFieldNodeBase** Field, TEnumAsByte<EFieldCullingOperationType>* Operation);
};


// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000 (0x00B0 - 0x00B0)
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		return ptr;
	}


	class UReturnResultsTerminal* SetReturnResultsTerminal();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
