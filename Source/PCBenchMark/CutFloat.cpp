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

 FString UCutFloat::GetFloatAsStringWithPrecision(float TheFloat, const uint8 Precision)
{
	const TCHAR* TheDot = TEXT(".");

	FString FloatString = FString::SanitizeFloat(TheFloat);

	//No . ?
	if (!FloatString.Contains(TheDot))
	{
		return FloatString;
	}

	//Split
	FString LeftS;
	FString RightS;

	FloatString.Split(TheDot, &LeftS, &RightS);

	//Add dot back to LeftS
	LeftS += TheDot;

	//Get the Single Number after the precision amount
	// so in .1273, get the 7
	FString RightSFirstTruncated = "";
	if (RightS.Len() - 1 >= Precision)
	{
		RightSFirstTruncated = RightS.Mid(Precision, 1);
	}

	//Truncate the RightS
	// 	.1273 becomes .12 with precision 2
	RightS = RightS.Left(Precision);

	//Round Up if There was any truncated portion
	if (RightSFirstTruncated != "")
	{
		if (FCString::Atod(*RightSFirstTruncated) >= 5)
		{
			//.1273 becomes .13
			RightS = FString::FromInt(FCString::Atod(*RightS) + 1);
		}
	}

	return LeftS + RightS;
}