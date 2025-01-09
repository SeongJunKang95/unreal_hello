
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

// AMyActor 클래스는 게임 내에서 스폰되며, 시작위치에서 랜덤하게 10번 이동한 후, 각 이동 좌표를 출력




UCLASS()
class HELLO_API AMyActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:

	FVector2D CurrentPosition; // FVector2D타입 변수로, 액터의 현재 위치를 2D좌표 (X, Y) 로 표현 초기값은 (o.of o.of) 로 설정돠며, move 함수에서 이동할 때 마다 갱신
	
	int32 Step(); // 한 스텝에서 이동할 거리를 반환하는 함수 (0 또는 1반환), FMath::RandRange(0, 1)를 사용하여 0 또는 1을 반환

	void Move(); // 시작 위치를 출력, 10번 이동하며 좌표를 갱신하고 출력하는 함수, 이동후 위치 출력 

};
