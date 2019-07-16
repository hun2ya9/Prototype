// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Gizmo/GizmoMeshComponent.h"
#include "Gizmo/GizmoAxis.h"
#include "Gizmo/GizmoPlane.h"
#include "Gizmo/GizmoOrigin.h"

#include "GizmoAxes.generated.h"

UCLASS(BlueprintType)
class UEPROTOTYPE_API AGizmoAxes : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	AGizmoAxes();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Axis", meta = (AllowPrivateAccess = "true"))
	UGizmoAxis* Axis_X;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Axis", meta = (AllowPrivateAccess = "true"))
	UGizmoAxis* Axis_Y;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Axis", meta = (AllowPrivateAccess = "true"))
	UGizmoAxis* Axis_Z;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Plane", meta = (AllowPrivateAccess = "true"))
	UGizmoPlane* Plane_XY;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Plane", meta = (AllowPrivateAccess = "true"))
	UGizmoPlane* Plane_XZ;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Plane", meta = (AllowPrivateAccess = "true"))
	UGizmoPlane* Plane_YZ;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Origin", meta = (AllowPrivateAccess = "true"))
	UGizmoOrigin* Origin;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Origin", meta = (AllowPrivateAccess = "true"))
	EGizmoCoordType CoordType;
	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Origin", meta = (AllowPrivateAccess = "true"))
	EGizmoTransType TransType;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes", meta = (AllowPrivateAccess = "true"))
	bool bIsGizmoActivated;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes", meta = (AllowPrivateAccess = "true"))
	float GizmoViewOffsetFromCamera;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes", meta = (AllowPrivateAccess = "true"))
	AActor* SelectedActor;

	UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "Gizmo|Axes|Axis", meta = (AllowPrivateAccess = "true"))
	TMap<EGizmoTransType, UStaticMesh*> TransTypeMeshs;

public:
	// 오브젝트를 선택시 호출됨 -> PC가 GizmoManager를 통해 호출가능
	UFUNCTION(BlueprintCallable, Category = "Gizmo")
	void OnObjectClicked(AActor* TargetObject);

	// 기즈모 활성화/비활성화
	UFUNCTION(BlueprintCallable, Category = "Gizmo")
	void ActivateGizmo(bool bActive);

	// 변형 모드를 변경, 모드에 따라 매쉬 변경
	UFUNCTION(BlueprintCallable, Category = "Gizmo")
	void SetupGizmoTransType(EGizmoTransType InTransType);

	// 좌표 모드를 변경, 모드에 따라 기즈모 회전
	UFUNCTION(BlueprintCallable, Category = "Gizmo")
	void SetupGizmoCoordType(EGizmoCoordType InCoordType);

	UFUNCTION(BlueprintCallable, Category = "Gizmo|Type")
	EGizmoCoordType GetGizmoCoordType();

	UFUNCTION(BlueprintCallable, Category = "Gizmo|Type")
	EGizmoTransType GetGizmoTransType();
};
