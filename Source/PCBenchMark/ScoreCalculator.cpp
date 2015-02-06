// Fill out your copyright notice in the Description page of Project Settings.

#include "PCBenchMark.h"
#include "ScoreCalculator.h"


AScoreCalculator::AScoreCalculator(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}


int32 AScoreCalculator::calculateDemoScore()
{
	int32 ret = 0;
	if (!DemoTestResults)
		return -1;
	ret = DemoTestResults->AvgFPS;
	ret /= DemoTestResults->MinFPS / DemoTestResults->AvgFPS;

	ret *= FMath::Sqrt(DemoTestResults->MaxFPS / DemoTestResults->AvgFPS);

	return ret;
}

int32 AScoreCalculator::calculatePhysicsScore()
{
	int32 ret = 0;
	if (!PhysicsTestResults)
		return -1;

	ret = PhysicsTestResults->AvgFPS + float(PhysicsTestResults->BoxCount);
	ret /= PhysicsTestResults->MinFPS / PhysicsTestResults->AvgFPS;

	ret *= FMath::Sqrt(PhysicsTestResults->MaxFPS / PhysicsTestResults->AvgFPS);

	return ret;
}