/**
* ImpactFeedback
*
* Copyright 2020 Denis Esie
**/

#include "ImpactFeedbackDarwinBridge.h"

bool ImpactFeedbackDarwinBridge::GenerateFeedback(const FeedbackType type)
{
    #if PLATFORM_IOS
    [ImpactFeedbackHelper generateFeedback:type];
    #endif
    return IsTapticEngineAvailable();
}

bool ImpactFeedbackDarwinBridge::IsTapticEngineAvailable()
{
    #if PLATFORM_IOS
        if ([[UIDevice currentDevice] systemVersion].floatValue < 10.0) {
            return false;
        } else {
            return true;
        }
    #else
    return false;
    #endif
}

#if PLATFORM_IOS
@implementation ImpactFeedbackHelper

+(void)generateFeedback:(FeedbackType)type{
    switch (type) {
        case IFSelection:
            [self generateSelectionFeedback];
            break;
        case IFImpactLight:
            [self generateImpactFeedback:UIImpactFeedbackStyleLight];
            break;
        case IFImpactMedium:
            [self generateImpactFeedback:UIImpactFeedbackStyleMedium];
            break;
        case IFImpactHeavy:
            [self generateImpactFeedback:UIImpactFeedbackStyleHeavy];
            break;
        case IFNotificationSuccess:
            [self generateNotificationFeedback:UINotificationFeedbackTypeSuccess];
            break;
        case IFNotificationWarning:
            [self generateNotificationFeedback:UINotificationFeedbackTypeWarning];
            break;
        case IFNotificationError:
            [self generateNotificationFeedback:UINotificationFeedbackTypeError];
            break;
        default:
            break;
    }
}

+(void)generateSelectionFeedback {
    UISelectionFeedbackGenerator *generator = [[UISelectionFeedbackGenerator alloc] init];
    [generator prepare];
    [generator selectionChanged];
}

+(void)generateImpactFeedback:(UIImpactFeedbackStyle)style {
    UIImpactFeedbackGenerator *generator = [[UIImpactFeedbackGenerator alloc] initWithStyle:style];
    [generator prepare];
    [generator impactOccurred];
}

+(void)generateNotificationFeedback:(UINotificationFeedbackType)notificationType {
    UINotificationFeedbackGenerator *generator = [[UINotificationFeedbackGenerator alloc] init];
    [generator prepare];
    [generator notificationOccurred:notificationType];
}

@end
#endif
