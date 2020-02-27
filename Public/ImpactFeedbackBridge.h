/**
* ImpactFeedback
*
* Copyright 2020 Denis Esie
**/

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FImpactFeedbackBridgeModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
    
};
