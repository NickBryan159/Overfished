// Fill out your copyright notice in the Description page of Project Settings.


#include "GetRandTypeByPercentLibrary.h"

int32  UGetRandTypeByPercentLibrary::GetRandTypeByPercent(float BFPercent, float SilverFPercent, float TFPercent, float ShadowFPercent) {
	float rng = ((double)rand() / (RAND_MAX));
	if(rng < BFPercent) {
		return 0;
	} 
	else if(rng < BFPercent + SilverFPercent) {
		return 1;
	} 
	else if(rng < BFPercent + SilverFPercent + TFPercent) {
		return 2;
	} 
	else if(rng < BFPercent + SilverFPercent + TFPercent + ShadowFPercent) {
		return 3;
	} 
	else {
		return 4; 
	}
}
