/**
* ImpactFeedback
*
* Copyright 2020 Denis Esie
**/

#include "ImpactFeedbackFunctionLibrary.h"
#include "ImpactFeedbackDarwinBridge.h"

bool UImpactFeedbackFunctionLibrary::GenerateSelectionFeedback()
{
    return ImpactFeedbackDarwinBridge::GenerateFeedback(IFSelection);
}

bool UImpactFeedbackFunctionLibrary::GenerateImpactFeedback(const ImpactFeedbackStyle type)
{
    switch (type) {
        case ImpactFeedbackStyle::Light:
            return GenerateLightImpactFeedback();
        case ImpactFeedbackStyle::Medium:
            return GenerateMediumImpactFeedback();
        case ImpactFeedbackStyle::Heavy:
            return GenerateHeavyImpactFeedback();
        default:
            return false;
    }
}

bool UImpactFeedbackFunctionLibrary::GenerateLightImpactFeedback()
{
    return ImpactFeedbackDarwinBridge::GenerateFeedback(IFImpactLight);
}

bool UImpactFeedbackFunctionLibrary::GenerateMediumImpactFeedback()
{
    return ImpactFeedbackDarwinBridge::GenerateFeedback(IFImpactMedium);
}

bool UImpactFeedbackFunctionLibrary::GenerateHeavyImpactFeedback()
{
    return ImpactFeedbackDarwinBridge::GenerateFeedback(IFImpactHeavy);
}

bool UImpactFeedbackFunctionLibrary::GenerateNotificationFeedback(const NotificationFeedbackStyle type)
{
   switch (type) {
       case NotificationFeedbackStyle::Success:
           return GenerateSuccessNotificationFeedback();
       case NotificationFeedbackStyle::Warning:
           return GenerateWarningNotificationFeedback();
       case NotificationFeedbackStyle::Error:
           return GenerateErrorNotificationFeedback();
       default:
           return false;
   }
}

bool UImpactFeedbackFunctionLibrary::GenerateSuccessNotificationFeedback()
{
    return ImpactFeedbackDarwinBridge::GenerateFeedback(IFNotificationSuccess);
}

bool UImpactFeedbackFunctionLibrary::GenerateWarningNotificationFeedback()
{
    return ImpactFeedbackDarwinBridge::GenerateFeedback(IFNotificationWarning);
}

bool UImpactFeedbackFunctionLibrary::GenerateErrorNotificationFeedback()
{
    return ImpactFeedbackDarwinBridge::GenerateFeedback(IFNotificationError);
}

void UImpactFeedbackFunctionLibrary::IsTapticEngineAvailable(bool &resultValue)
{
    resultValue = ImpactFeedbackDarwinBridge::IsTapticEngineAvailable();
}
