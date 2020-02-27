# iOS Native Impact Feedback plugin for Unreal Engine 

ImpactFeedback is a plugin for Unreal Engine, that adds support for iOS native taptic engine API. It's also fully exposed to Blueprints.


Usage:

### Selection Feedback

Standart haptic feedback that occurs when the user reorders cells in a native iOS table view.

C++

```c++
UImpactFeedbackFunctionLibrary::GenerateSelectionFeedback()
```
Blueprints VM 

![Selection](https://github.com/nesseratious/ImpactFeedbackUEBlueprintVMBridge/blob/master/Images/Selection.png)



### Impact Feedback

General haptic feedback with variable intensity. 

Light intensity:

C++

```c++
UImpactFeedbackFunctionLibrary::GenerateLightImpactFeedback()
```
Blueprints VM 

![Selection](https://github.com/nesseratious/ImpactFeedbackUEBlueprintVMBridge/blob/master/Images/LightImpact.png)


Medium intensity:

C++

```c++
UImpactFeedbackFunctionLibrary::GenerateMediumImpactFeedback()
```
Blueprints VM 

![Selection](https://github.com/nesseratious/ImpactFeedbackUEBlueprintVMBridge/blob/master/Images/MediumImpact.png)


Heavy intensity:

C++

```c++
UImpactFeedbackFunctionLibrary::GenerateHeavyImpactFeedback()
```
Blueprints VM 

![Selection](https://github.com/nesseratious/ImpactFeedbackUEBlueprintVMBridge/blob/master/Images/HeavyImpact.png)



### Notification Feedback

Haptic feedback that occurs as a result of some event. 

Success notification:

C++

```c++
UImpactFeedbackFunctionLibrary::GenerateSuccessNotificationFeedback()
```
Blueprints VM 

![Selection](https://github.com/nesseratious/ImpactFeedbackUEBlueprintVMBridge/blob/master/Images/SuccessNotification.png)


Warning notification:

C++

```c++
UImpactFeedbackFunctionLibrary::GenerateWarningNotificationFeedback()
```
Blueprints VM 

![Selection](https://github.com/nesseratious/ImpactFeedbackUEBlueprintVMBridge/blob/master/Images/WarningNotification.png)


Error notification:

C++

```c++
UImpactFeedbackFunctionLibrary::GenerateErrorNotificationFeedback()
```
Blueprints VM 

![Selection](https://github.com/nesseratious/ImpactFeedbackUEBlueprintVMBridge/blob/master/Images/ErrorNotification.png)
