// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Player_CPP.generated.h"

UENUM()
enum AnimType {
	None,
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
	float Getspeed() { return speed; }
	UFUNCTION(BlueprintPure, Category = "Player")
	float Getboost() { return boost; }
	UFUNCTION(BlueprintPure, Category = "Player")
	float Getd_time() { return d_time; }

	UFUNCTION(BlueprintPure, Category = "Player")
	bool Getact_frag() { return act_frag; }
	UFUNCTION(BlueprintPure, Category = "Player")
	bool Getgame_over_frag() { return game_over_frag; }

	UFUNCTION(BlueprintPure, Category = "Player")
	AnimType Getplay_anim() { return play_anim; }

	//セッター
	UFUNCTION(BlueprintCallable, Category = "Player")
	void Setspeed(float in) {  speed = in; }
	UFUNCTION(BlueprintCallable, Category = "Player")
	void Setboost(float in) {  boost = in; }
	UFUNCTION(BlueprintCallable, Category = "Player")
	void Setd_time(float in) {  d_time = in; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void Setact_frag(bool in) {  act_frag = in; }
	UFUNCTION(BlueprintCallable, Category = "Player")
	void Setgame_over_frag(bool in) { game_over_frag = in; }

	UFUNCTION(BlueprintCallable, Category = "Player")
	void Setplay_anim(AnimType in) { play_anim = in; }

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

	int64 score;

	FIntVector lane_pos;


	
	


};
