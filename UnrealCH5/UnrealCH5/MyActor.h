
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

// AMyActor Ŭ������ ���� ������ �����Ǹ�, ������ġ���� �����ϰ� 10�� �̵��� ��, �� �̵� ��ǥ�� ���




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

	FVector2D CurrentPosition; // FVector2DŸ�� ������, ������ ���� ��ġ�� 2D��ǥ (X, Y) �� ǥ�� �ʱⰪ�� (o.of o.of) �� �����¸�, move �Լ����� �̵��� �� ���� ����
	
	int32 Step(); // �� ���ܿ��� �̵��� �Ÿ��� ��ȯ�ϴ� �Լ� (0 �Ǵ� 1��ȯ), FMath::RandRange(0, 1)�� ����Ͽ� 0 �Ǵ� 1�� ��ȯ

	void Move(); // ���� ��ġ�� ���, 10�� �̵��ϸ� ��ǥ�� �����ϰ� ����ϴ� �Լ�, �̵��� ��ġ ��� 

};
