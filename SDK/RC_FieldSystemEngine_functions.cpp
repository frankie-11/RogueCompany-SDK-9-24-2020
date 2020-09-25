// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
// (Final, Native, Public, BlueprintCallable)

void UFieldSystemComponent::ResetFieldSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	UFieldSystemComponent_ResetFieldSystem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool* Enabled, struct FVector* Position, struct FVector* Direction, float* Radius, float* Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	UFieldSystemComponent_ApplyUniformVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Direction = Direction;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// int*                           Iterations                     (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemComponent::ApplyStrainField(bool* Enabled, struct FVector* Position, float* Radius, float* Magnitude, int* Iterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	UFieldSystemComponent_ApplyStrainField_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemComponent::ApplyStayDynamicField(bool* Enabled, struct FVector* Position, float* Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	UFieldSystemComponent_ApplyStayDynamicField_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool* Enabled, struct FVector* Position, float* Radius, float* Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	UFieldSystemComponent_ApplyRadialVectorFalloffForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Radius = Radius;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemComponent::ApplyRadialForce(bool* Enabled, struct FVector* Position, float* Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	UFieldSystemComponent_ApplyRadialForce_Params params;
	params.Enabled = Enabled;
	params.Position = Position;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFieldPhysicsType>* Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemMetaData**   MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldNodeBase**         Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFieldSystemComponent::ApplyPhysicsField(bool* Enabled, TEnumAsByte<EFieldPhysicsType>* Target, class UFieldSystemMetaData** MetaData, class UFieldNodeBase** Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	UFieldSystemComponent_ApplyPhysicsField_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)

void UFieldSystemComponent::ApplyLinearForce(bool* Enabled, struct FVector* Direction, float* Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	UFieldSystemComponent_ApplyLinearForce_Params params;
	params.Enabled = Enabled;
	params.Direction = Direction;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool*                          Enabled                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFieldPhysicsType>* Target                         (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemMetaData**   MetaData                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldNodeBase**         Field                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UFieldSystemComponent::AddFieldCommand(bool* Enabled, TEnumAsByte<EFieldPhysicsType>* Target, class UFieldSystemMetaData** MetaData, class UFieldNodeBase** Field)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	UFieldSystemComponent_AddFieldCommand_Params params;
	params.Enabled = Enabled;
	params.Target = Target;
	params.MetaData = MetaData;
	params.Field = Field;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Iterations                     (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemMetaDataIteration* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemMetaDataIteration* UFieldSystemMetaDataIteration::SetMetaDataIteration(int* Iterations)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	UFieldSystemMetaDataIteration_SetMetaDataIteration_Params params;
	params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TEnumAsByte<EFieldResolutionType>* ResolutionType                 (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldSystemMetaDataProcessingResolution* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UFieldSystemMetaDataProcessingResolution* UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType>* ResolutionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	UFieldSystemMetaDataProcessingResolution_SetMetaDataaProcessingResolutionType_Params params;
	params.ResolutionType = ResolutionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformInteger.SetUniformInteger
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int*                           Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUniformInteger*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUniformInteger* UUniformInteger::SetUniformInteger(int* Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	UUniformInteger_SetUniformInteger_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// int*                           InteriorValue                  (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ExteriorValue                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESetMaskConditionType>* SetMaskConditionIn             (Parm, ZeroConstructor, IsPlainOldData)
// class URadialIntMask*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URadialIntMask* URadialIntMask::SetRadialIntMask(float* Radius, struct FVector* Position, int* InteriorValue, int* ExteriorValue, TEnumAsByte<ESetMaskConditionType>* SetMaskConditionIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	URadialIntMask_SetRadialIntMask_Params params;
	params.Radius = Radius;
	params.Position = Position;
	params.InteriorValue = InteriorValue;
	params.ExteriorValue = ExteriorValue;
	params.SetMaskConditionIn = SetMaskConditionIn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformScalar.SetUniformScalar
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUniformScalar*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUniformScalar* UUniformScalar::SetUniformScalar(float* Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	UUniformScalar_SetUniformScalar_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Default                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFieldFalloffType>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// class URadialFalloff*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URadialFalloff* URadialFalloff::SetRadialFalloff(float* Magnitude, float* MinRange, float* MaxRange, float* Default, float* Radius, struct FVector* Position, TEnumAsByte<EFieldFalloffType>* Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	URadialFalloff_SetRadialFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Radius = Radius;
	params.Position = Position;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Default                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Normal                         (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EFieldFalloffType>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// class UPlaneFalloff*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float* Magnitude, float* MinRange, float* MaxRange, float* Default, float* Distance, struct FVector* Position, struct FVector* Normal, TEnumAsByte<EFieldFalloffType>* Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	UPlaneFalloff_SetPlaneFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Distance = Distance;
	params.Position = Position;
	params.Normal = Normal;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Default                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (Parm, IsPlainOldData)
// TEnumAsByte<EFieldFalloffType>* Falloff                        (Parm, ZeroConstructor, IsPlainOldData)
// class UBoxFalloff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UBoxFalloff* UBoxFalloff::SetBoxFalloff(float* Magnitude, float* MinRange, float* MaxRange, float* Default, struct FTransform* Transform, TEnumAsByte<EFieldFalloffType>* Falloff)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	UBoxFalloff_SetBoxFalloff_Params params;
	params.Magnitude = Magnitude;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Default = Default;
	params.Transform = Transform;
	params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.NoiseField.SetNoiseField
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         MinRange                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         MaxRange                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform*             Transform                      (Parm, IsPlainOldData)
// class UNoiseField*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UNoiseField* UNoiseField::SetNoiseField(float* MinRange, float* MaxRange, struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	UNoiseField_SetNoiseField_Params params;
	params.MinRange = MinRange;
	params.MaxRange = MaxRange;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.UniformVector.SetUniformVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Direction                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUniformVector*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUniformVector* UUniformVector::SetUniformVector(float* Magnitude, struct FVector* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	UUniformVector_SetUniformVector_Params params;
	params.Magnitude = Magnitude;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RadialVector.SetRadialVector
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                Position                       (Parm, ZeroConstructor, IsPlainOldData)
// class URadialVector*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URadialVector* URadialVector::SetRadialVector(float* Magnitude, struct FVector* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	URadialVector_SetRadialVector_Params params;
	params.Magnitude = Magnitude;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.RandomVector.SetRandomVector
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class URandomVector*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class URandomVector* URandomVector::SetRandomVector(float* Magnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	URandomVector_SetRandomVector_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.OperatorField.SetOperatorField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float*                         Magnitude                      (Parm, ZeroConstructor, IsPlainOldData)
// class UFieldNodeBase**         RightField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldNodeBase**         LeftField                      (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EFieldOperationType>* Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UOperatorField*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOperatorField* UOperatorField::SetOperatorField(float* Magnitude, class UFieldNodeBase** RightField, class UFieldNodeBase** LeftField, TEnumAsByte<EFieldOperationType>* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	UOperatorField_SetOperatorField_Params params;
	params.Magnitude = Magnitude;
	params.RightField = RightField;
	params.LeftField = LeftField;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeFloat**        FloatField                     (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UToIntegerField*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UToIntegerField* UToIntegerField::SetToIntegerField(class UFieldNodeFloat** FloatField)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	UToIntegerField_SetToIntegerField_Params params;
	params.FloatField = FloatField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.ToFloatField.SetToFloatField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeInt**          IntegerField                   (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UToFloatField*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UToFloatField* UToFloatField::SetToFloatField(class UFieldNodeInt** IntegerField)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	UToFloatField_SetToFloatField_Params params;
	params.IntegerField = IntegerField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.CullingField.SetCullingField
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFieldNodeBase**         Culling                        (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UFieldNodeBase**         Field                          (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// TEnumAsByte<EFieldCullingOperationType>* Operation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UCullingField*           ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCullingField* UCullingField::SetCullingField(class UFieldNodeBase** Culling, class UFieldNodeBase** Field, TEnumAsByte<EFieldCullingOperationType>* Operation)
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	UCullingField_SetCullingField_Params params;
	params.Culling = Culling;
	params.Field = Field;
	params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UReturnResultsTerminal*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UReturnResultsTerminal* UReturnResultsTerminal::SetReturnResultsTerminal()
{
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal");

	UReturnResultsTerminal_SetReturnResultsTerminal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
