/********************************************************************************
** Author God Of Pen
** Ver.:  V1.0.0
*********************************************************************************/


#include "CoreMinimal.h"
#include "CreatureTransitionCondition.h"
#include "CreatureAnimTransition.generated.h"
class UCreatureAnimState;
class UCreatureAnimStateMachine;
#pragma once




UCLASS(Blueprinttype)
class CREATUREPLUGIN_API UCreatureAnimTransition :public UObject{
	GENERATED_BODY()
public:
	//用于获取转换条件列表
	UPROPERTY()
	UCreatureAnimStateMachine* AnimStateMachine;

	//转换条件列表
	UPROPERTY()
	TArray<FCreatureTransitionCondition> TransitionConditions;

	UPROPERTY()
	UCreatureAnimState* TargetState;

	bool Translate(class UCreatureAnimStateMachineInstance *forInstance);
	//Special Translate, Using when animation end
	void AnimationEndTranslate(class UCreatureAnimStateMachineInstance *forInstance);
};
