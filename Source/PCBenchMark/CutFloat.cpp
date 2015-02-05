// Fill out your copyright notice in the Description page of Project Settings.

#include "PCBenchMark.h"
#include "CutFloat.h"

UCutFloat::UCutFloat(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
}

float UCutFloat::CutFloat(float value, uint8 decimals)
{

	value = value*(FMath::Pow(10, (float)decimals));
	value = (int)value;
	value = value / (FMath::Pow(10, (float)decimals));

	return value;
}