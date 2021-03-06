// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/ARAbilityBase.h"
#include "ARWeaponAbilityBase.generated.h"

class AARWeaponAvatar;
/**
 * 
 */
UCLASS()
class ACTIONRPGGAME_API UARWeaponAbilityBase : public UARAbilityBase
{
	GENERATED_BODY()
	
public:
	virtual void OnAbilityInited() override;
	virtual void OnAvatarReady() override;
};
