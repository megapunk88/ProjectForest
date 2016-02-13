// Fill out your copyright notice in the Description page of Project Settings.

#include "DarkWoodForest.h"
#include "LifeCollector.h"


// Sets default values
ALifeCollector::ALifeCollector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALifeCollector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALifeCollector::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

