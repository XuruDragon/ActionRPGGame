// Fill out your copyright notice in the Description page of Project Settings.

#include "AbilityFramework.h"
#include "../GAGameEffect.h"
#include "AFEffectsComponent.h"
#include "AFPeriodApplicationInfiniteAdd.h"


bool UAFPeriodApplicationInfiniteAdd::ApplyEffect(const FGAEffectHandle& InHandle, struct FGAEffect* EffectIn,
	FGAEffectProperty& InProperty, struct FGAEffectContainer* InContainer,
	const FGAEffectContext& InContext,
	const FAFFunctionModifier& Modifier)
{
	FTimerManager& PeriodTimer = InHandle.GetContext().TargetComp->GetWorld()->GetTimerManager();

	FTimerDelegate PeriodDuration = FTimerDelegate::CreateUObject(InHandle.GetContext().GetTargetEffectsComponent(), &UAFEffectsComponent::ExecuteEffect, InHandle, InProperty, Modifier, InContext);
	PeriodTimer.SetTimer(InHandle.GetEffectPtr()->PeriodTimerHandle, PeriodDuration,
		InProperty.GetPeriod(), true);
	InContainer->AddEffect(InProperty, InHandle, true);
	//EffectIn->Context.TargetComp->ExecuteEffect(InHandle, InProperty);
	return true;
}

