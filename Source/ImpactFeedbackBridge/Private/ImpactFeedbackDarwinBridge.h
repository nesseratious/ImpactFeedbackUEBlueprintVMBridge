/**
* ImpactFeedback
*
* Copyright 2020 Denis Esie
**/

#pragma once

#include "CoreMinimal.h"

#if PLATFORM_IOS
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#endif

typedef enum {
    IFSelection,
    IFImpactLight,
    IFImpactMedium,
    IFImpactHeavy,
    IFNotificationSuccess,
    IFNotificationWarning,
    IFNotificationError
} FeedbackType;

class ImpactFeedbackDarwinBridge
{
    
public:
    
    static bool GenerateFeedback(const FeedbackType type);
    static bool IsTapticEngineAvailable();
    
};

#if PLATFORM_IOS
@interface ImpactFeedbackHelper : NSObject

+ (void)generateFeedback:(FeedbackType)type;

@end
#endif
