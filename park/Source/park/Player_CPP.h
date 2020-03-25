// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_CPP.generated.h"

UENUM()
enum AnimType {
	None,
	Spawn,
	JumpNormal,
	JumpSpin,
	WallDashR,
	WallDashL,
	Sliding
};


struct MotionControllerMgr {
	FVector pos;
	int32 jump_point;
	float jump_wai_time;
	int32 sliding_point;
	float sliding_wai_time;
};

struct VRHeadGearMgr {
	FVector pos;
	int32 jump_point;
	float jump_wai_time;
};

UCLASS()
class PARK_API APlayer_CPP : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayer_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Player")
	void Reset();

	//ゲッター
	UFUNCTION(BlueprintPure, Category = "Player")
	float GetSpeed() { return speed; }
	UFUNCTION(BlueprintPure, Category = "Player")
	float GetBoost() { return boost; }
	UFUNCTION(BlueprintPure, Category = "Player")
	float GetD_time() { return d_time; }

	UFUNCTION(BlueprintPure, Category = "Player")
	float GetWait_time() { return wait_time; }


	UFUNCTION(BlueprintPure, Category = "Player")
	bool GetAct_frag() { return act_frag; }
	UFUNCTION(BlueprintPure, Category = "Player")
	bool GetGame_over_frag() { return game_over_frag; }

	UFUNCTION(BlueprintPure, Category = "Player")
	AnimType GetPlay_anim() { return play_anim; }

	//セッター
	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetSpeed(float in) {  speed = in; }
	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetBoost(float in) {  boost = in; }
	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetD_time(float in) {  d_time = in; }
	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetWait_time(float in) { wait_time = in; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetAct_frag(bool in) {  act_frag = in; }
	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetGame_over_frag(bool in) { game_over_frag = in; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetPlay_anim(AnimType in) { play_anim = in; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void SetMotionControllerPos(FVector right, FVector lest, FVector head) { 
		M_Con_R.pos = right;
		M_Con_L.pos = lest;
		Head.pos = head;
	}

private:

	void Move();
	void Jump();
	void Sliding();
	void WallDashRight();
	void WallDashLeft();
	void RollingRight();
	void RollingLeft();
	void Boost();
	void BoostOn();
	void BoostOff();

	AnimType play_anim;

	bool act_frag;
	bool boost_frag;
	bool game_over_frag;


	float speed;
	float boost;
	float time;
	float press_twice_right_button;
	float press_twice_left_button;
	float d_time;
	float wait_time;

	int64 score;

	FIntVector lane_pos;

	MotionControllerMgr M_Con_R;
	MotionControllerMgr M_Con_L;
	VRHeadGearMgr Head;


};
