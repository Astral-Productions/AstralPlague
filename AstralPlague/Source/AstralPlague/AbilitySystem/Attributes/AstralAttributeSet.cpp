// Fill out your copyright notice in the Description page of Project Settings.


#include "AstralAttributeSet.h"

#include "AstralPlague/AbilitySystem/AstralAbilitySystemComponent.h"


UAstralAttributeSet::UAstralAttributeSet()
{
	
}

UAstralAbilitySystemComponent* UAstralAttributeSet::GetAstralAbilitySystemComponent() const
{
	return Cast<UAstralAbilitySystemComponent>(GetOwningAbilitySystemComponent());
}
