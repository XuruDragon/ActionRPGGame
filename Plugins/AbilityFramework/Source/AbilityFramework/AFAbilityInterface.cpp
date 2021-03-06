// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "AbilityFramework.h"
#include "AFAbilityInterface.h"
#include "AFAbilityComponent.h"
#include "AFEffectsComponent.h"
#include "AFAttributeComponent.h"
UAFAbilityInterface::UAFAbilityInterface(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

//class UGAAttributesBase* IAFAbilityInterface::GetAttributes()
//{
//	return nullptr;// GetAbilityComp()->DefaultAttributes;
//}

FGAEffectHandle IAFAbilityInterface::ApplyEffectToTarget(FGAEffect* EffectIn
	, FGAEffectProperty& InProperty
	, FGAEffectContext& InContext
	, const FAFFunctionModifier& Modifier)
{
	return GetEffectsComponent()->ApplyEffectToTarget(EffectIn, InProperty, InContext, Modifier);
}