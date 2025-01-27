﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"

#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "MotionTrackedDeviceFunctionLibrary.h"

#include "Core/VPPlayerController.h"
#include "VPDirectorPawn.generated.h"





/* 
 *	폰의 이동 기준 축을 지정해주는 열거형 클래스입니다.
 */
UENUM(BlueprintType)
enum class EMoveType : uint8
{
	// 폰의 현재 컨트롤 로테이션을 축으로 이동합니다.
	MT_LOCALAXIS		UMETA(DisplayName = "LocalAxis"),

	// 폰의 특정 시점 컨트롤 로테이션을 축으로 이동합니다.
	MT_FIXEDAXIS		UMETA(DisplayName = "FixedAxis"),

	// 월드 기준 축으로 이동합니다.
	MT_ABSOLUTEAXIS		UMETA(DisplayName = "WorldAxis"),

	// 특정 오브젝트를 중심으로, 월드 축을 기준으로 공전합니다.
	MT_ORBITAXIS		UMETA(DisplayName = "OrbitAxis")
};



/*
 *	DirectorPawn은 프로토타입 월드에서 프로토타입을 담당하는 플레이어가
 *	기본적으로 빙의하는 폰입니다. VR 기기와 컨트롤러를 사용하는 유저의
 *	모습을 구현합니다.
 */
UCLASS()
class UEPROTOTYPE_API AVPDirectorPawn : public APawn
{
	GENERATED_BODY()
	
public:
	// Sets default values for this pawn's properties
	AVPDirectorPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



	// 입력한 무브 타입 방식으로 이동을 수행합니다.
	UFUNCTION(BlueprintCallable, Category = "Custom")
	void MoveAround(EMoveType InMoveType, float InX, float InY, float InZ, AActor const * InOrbitTarget = nullptr);

private:
	
	// 절대 좌표 기준으로 폰의 이동을 수행합니다.
	UFUNCTION()
	void MoveAbsoluteAxis(float InX, float InY, float InZ);

	// 특정 순간 폰의 오브젝트 축을 고정하여 이동을 수행합니다.
	UFUNCTION()
	void MoveFixedAxis(float InX, float InY, float InZ);

	// 폰의 오브젝트 축 기반 이동을 수행합니다.
	UFUNCTION()
	void MoveLocalAxis(float InX, float InY, float InZ);

	// 대상을 중심으로, 월드 축을 기반으로 공전 이동을 수행합니다.
	UFUNCTION()
	void MoveOrbitAxis(float InX, float InY, float InZ, AActor const * OrbitTarget);


	

private:
	// 플레이어 콜리전
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "Director", meta= ( AllowPrivateAccess = "true"))
	class UCapsuleComponent * RootCollision;

	// 플레이어 VR 루트 트랜스폼
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Director", meta = (AllowPrivateAccess = "true"))
	class USceneComponent* VRRootTransform;

	// 플레이어 VR 카메라
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Director", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* VRCamera;

	// 플레이어 모션 컨트롤러
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Director", meta = (AllowPrivateAccess = "true"))
	class UMotionControllerComponent* MotionController;

	// 플레이어 모션 컨트롤러 위젯
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Director", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* MCWidget;
	
	// 플레이어 이동 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Director", meta = (AllowPrivateAccess = "true"))
	class UFloatingPawnMovement* FloatingPawnMovement;

	// 플레이어의 현재 이동 타입
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (Bitmask, AllowPrivateAccess = "true"))
	EMoveType CurrentMoveType;
	
	UPROPERTY()
	FRotator FixedAxis;
};
