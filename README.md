# iOS Native Impact Feedback plugin for Unreal Engine 

iOS Native Taptic Engine Support is a plugin for Unreal Engine that adds support for iOS native Taptic Engine API, fully exposed to Blueprints.

Gives access to 5 types of haptic feedback:
1. Selection feedback. Standart haptic feedback that occurs when the user reorders cells in a native iOS table view.
2. Impact feedback. General haptic feedback with variable intensity (Light, Medium, Heavy).
3. Success Notification feedback. Haptic feedback that occurs as a result of a successfully completed event in iOS.
4. Warning Notification feedback. Haptic feedback that occurs as a result of a warning during completion of some event in iOS.
5. Error Notification feedback. Haptic feedback that occurs as a result of a failed event in iOS.

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
