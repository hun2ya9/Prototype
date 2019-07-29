﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "ActorPlaceInfoMarker.h"
#include "UEPrototype.h"
#include "UObjectIterator.h"



UActorPlaceInfoMarker* UActorPlaceInfoMarker::GetGlobalActorPlaceInfoMarker()
{
	for (const auto& it : TObjectRange<UActorPlaceInfoMarker>())
	{
		return it;
	}



	/* 반복자에서 찾지 못하면 시스템에 큰 결함이 있는 것입니다 */
	VP_LOG(Error, TEXT("%s가 유효하지 않습니다."), *UActorPlaceInfoMarker::StaticClass()->GetName());
	return nullptr;
}





void UActorPlaceInfoMarker::MarkActor(AActor* Target, FActorPlaceContent Content)
{
	/* 액터의 유효성을 검사합니다 */
	if (IsValid(Target) == false)
	{
		VP_LOG(Warning, TEXT("Actor가 유효하지 않습니다"));
		return;
	}

	FActorPlaceInfo ActorPlaceInfo;
	ActorPlaceInfo.Target = Target;
	ActorPlaceInfo.TargetContent = Content;

	/* 브로드캐스트합니다*/
	ActorPlaceInfoMarkEventDispatcher.Broadcast(ActorPlaceInfo);
}
