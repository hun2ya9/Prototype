﻿// Fill out your copyright notice in the Description page of Project Settings.

#include "Inventory/ItemInventory.h"


// Sets default values
AItemInventory::AItemInventory()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AItemInventory::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AItemInventory::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AItemInventory::GenerateInventory()
{
	Slots.AddDefaulted(MaxSlotSize);
}

bool AItemInventory::GetItemInfoAtIndex(int32 Index, FItemInfo& OutItemInfo)
{
	if (!IsSlotEmpty(Index))
	{
		OutItemInfo = Slots[Index]->GetItemInfo();
		return true;
	}
	return false;
}


bool AItemInventory::AddItem(AItem* NewItem)
{
	if (IsAllSlotFull())
		return false;

	++UsedSlotCount;
	Slots[SearchEmptySlotIndex()] = NewItem;
	return true;
}

bool AItemInventory::IsSlotEmpty(int32 Index)
{
	if (Slots.IsValidIndex(Index) && Slots[Index] != nullptr)
		return false;
	return true;
}

bool AItemInventory::IsAllSlotFull()
{
	return (MaxSlotSize == UsedSlotCount);
}

int32 AItemInventory::SearchEmptySlotIndex()
{
	for (int32 idx = 0; idx < MaxSlotSize; ++idx)
	{
		if (IsSlotEmpty(idx))
			return idx;
	}
	return 0;
}