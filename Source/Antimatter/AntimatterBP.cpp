// Fill out your copyright notice in the Description page of Project Settings.


#include "AntimatterBP.h"
#include "GameFramework/Actor.h"

AActor* UAntimatterBP::GetNearestActorWithout(const FVector& Target, const TArray<AActor*>& Actors, const AActor* Without)
{
	AActor* NearestActor = nullptr;
	float NearestLength = TNumericLimits<float>::Max();
	
	for (AActor* Actor : Actors)
	{
		if (Actor != Without)
		{
			float Length = FVector::DistSquared(Target, Actor->GetActorLocation());
			
			if (Length < NearestLength)
			{
				NearestActor = Actor;
				NearestLength = Length;
			}
		}
	}
	
	return NearestActor;
}
