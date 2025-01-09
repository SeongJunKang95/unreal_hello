// Fill out your copyright notice in the Description page of Project Settings.

#include <iostream>
#include "MyActor.h"
#include "Math/UnrealMathUtility.h" // 랜덤 함수 사용( FMath::RandRange)
#include "Engine/Engine.h" // UE_LOG 사용 -> 언리얼 엔진에서 로그를 출력하기 위한 매크로, (LogTep : 로그의 카테고리, Warning : 로그 수준, TEXT : 출력 문자열(좌표를 출력) )

// Sets default values
AMyActor::AMyActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CurrentPosition = FVector2D(0.0f, 0.0f); // CurrentPosition 변수 초기화 (시작 위치는 (0,0) )

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	Move(); // 이동함수 호출 : 10번 이동 및 좌표 출력

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
int32 AMyActor::Step()
{
	return FMath::RandRange(0, 1); // 0 또는 1을 랜덤 반환
}
void AMyActor::Move() // 10번 랜덤 이동 함수
{
	UE_LOG(LogTemp, Warning, TEXT("Starting Position: (%f, %f)"), CurrentPosition.X, CurrentPosition.Y); //시작위치

	for (int32 i = 0; i < 10; ++i)
	{
		int32 StepX = Step(); // X 방향 이동 값
		int32 StepY = Step(); // Y 방향 이동 값
		
		// CurrentPosition 갱신 : 현재 위치에 Step 값 추가
		CurrentPosition.X += StepX;
		CurrentPosition.Y += StepY;

		UE_LOG(LogTemp, Warning, TEXT("Step %d: New Position: (%f, %f)"), i + 1, CurrentPosition.X, CurrentPosition.Y); //현재위치
	}
}

