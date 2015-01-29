// Fill out your copyright notice in the Description page of Project Settings.

#include "PCBenchMark.h"
#include "Metrics.h"
#include "Stats.h"
#include "Stats2.h"
#include "StatsData.h"
#include "StatsFile.h"
#include "tcpestats.h"
#include "StatsMisc.h"
#include "EngineStats.h"
AMetrics::AMetrics(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	//FStat_STAT_UpdateCameraTime::
	//void* value = ((void*)&StatPtr_STAT_PhysicsTime);

	//GEngine->AddOnScreenDebugMessage(0, 1000.0f, FColor::Red, TEXT("%d"), value);
	//UE_LOG(LogClass, Log, TEXT("%d"),value);
	//GET_STATID(STAT_PhysicsTime);
}


float AMetrics::getPhysicsTime()
{
	//float value = *((float*)&StatPtr_STAT_PhysicsTime);
	//return *(float*)&StatPtr_STAT_PhysicsTime;
	return 0.0f;
}

