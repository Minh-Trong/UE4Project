// Fill out your copyright notice in the Description page of Project Settings.


#include "Prop2.h"

// Sets default values
AProp2::AProp2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
}

// Called when the game starts or when spawned
void AProp2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AProp2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

