/**
* ImpactFeedback
*
* Copyright 2020 Denis Esie
**/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ImpactFeedbackFunctionLibrary.generated.h"

UENUM(BlueprintType, Category="IOS Taptic Engine")
enum class ImpactFeedbackStyle : uint8
{
    Light   UMETA(DisplayName="Light"),
    Medium  UMETA(DisplayName="Medium"),
    Heavy   UMETA(DisplayName="Heavy")
};

UENUM(BlueprintType, Category="IOS Taptic Engine")
enum class NotificationFeedbackStyle : uint8
{
    Success UMETA(DisplayName="Success"),
    Warning UMETA(DisplayName="Warning"),
    Error   UMETA(DisplayName="Error")
};


UCLASS()
class IMPACTFEEDBACKBRIDGE_API UImpactFeedbackFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateSelectionFeedback();
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateImpactFeedback(const ImpactFeedbackStyle type);
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateLightImpactFeedback();
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateMediumImpactFeedback();
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateHeavyImpactFeedback();
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateNotificationFeedback(const NotificationFeedbackStyle type);
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateSuccessNotificationFeedback();
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateWarningNotificationFeedback();
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static bool GenerateErrorNotificationFeedback();
    
    UFUNCTION(BlueprintCallable, Category="IOS Taptic Engine")
    static void IsTapticEngineAvailable(bool &resultValue);
	
};
