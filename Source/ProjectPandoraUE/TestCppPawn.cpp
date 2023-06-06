// Fill out your copyright notice in the Description page of Project Settings.


#include "TestCppPawn.h"

// Sets default values
ATestCppPawn::ATestCppPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestCppPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestCppPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestCppPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

