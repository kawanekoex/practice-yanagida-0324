// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_CPP.h"

// Sets default values
APlayer_CPP::APlayer_CPP()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayer_CPP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayer_CPP::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	d_time = DeltaTime;

	if (!game_over_frag) {
		JumpMotionCheck();
		SlidingMotionCheck();
		Boost();
		Move();


	}


}

// Called to bind functionality to input
void APlayer_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);




}

void APlayer_CPP::Reset() {
	speed = 0.f;
	boost = 0.f;
	time = 0.f;
	press_twice_right_button = 0.f;
	press_twice_left_button = 0.f;
	score = 0.f;
}

void APlayer_CPP::Move() {
	FVector pos = GetActorLocation();
	if (play_anim != AnimType::RollR && play_anim != AnimType::RollL) {
		if (speed < 100.f) {
			speed += 50.f * d_time;
		}
		pos.X += speed * d_time * 10.f;
		if (speed)

			SetActorLocation(pos);
	}
	else {
		if (play_anim == AnimType::RollR) {

		}
		else if (play_anim == AnimType::RollL) {

		}
	}
}

void APlayer_CPP::Jump() {
	if (!act_frag) {
		act_frag = true;
		if (standby_anim == AnimType::JumpSpin) {
			play_anim = AnimType::JumpSpin;
			invisible_frag = true;

			boost += 30.f;
		}
		else {
			play_anim = AnimType::JumpNormal;
		}
	}
}

void APlayer_CPP::Sliding() {
	if (!act_frag) {
		if (standby_anim == AnimType::Sliding) {
			act_frag = true;
			play_anim = AnimType::Sliding;
			invisible_frag = true;

			boost += 30.f;
			speed = 150.f;
		}
	}
}

void APlayer_CPP::WallDashRight() {

}

void APlayer_CPP::WallDashLeft() {

}

void APlayer_CPP::RollingRight() {
	if (lane_pos + 1 <= 3) {
		lane_pos++;
		play_anim = AnimType::RollR;
	}
}

void APlayer_CPP::RollingLeft() {
	if (lane_pos - 1 >= -3) {
		lane_pos--;
		play_anim = AnimType::RollL;
	}
}

void APlayer_CPP::Boost() {
	if (boost_frag) {
		if (boost > 0.f) {
			boost -= 20.f * d_time;
			speed += 10.f * d_time;

		}
		else {
			boost = 0.f;
		}
	}
}

void APlayer_CPP::BoostOn() {
	boost_frag = true;
}

void APlayer_CPP::BoostOff() {
	boost_frag = false;
}

void APlayer_CPP::JumpMotionCheck() {
	if (M_Con_R.pos.Z < 0.f) {
		M_Con_R.jump_point = 1;
	}
	else if (M_Con_R.pos.Z >= 0.f && M_Con_R.jump_point == 1) {
		M_Con_R.jump_point = 2;
		M_Con_R.jump_wai_time = 0.3f;
	}
	else if (M_Con_R.pos.Z >= 10.f && M_Con_R.jump_point == 2 && M_Con_R.jump_wai_time > 0.f) {
		M_Con_R.jump_point = 3;
		Jump();
	}

	if (M_Con_L.pos.Z < 0.f) {
		M_Con_L.jump_point = 1;
	}
	else if (M_Con_L.pos.Z >= 0.f && M_Con_L.jump_point == 1) {
		M_Con_L.jump_point = 2;
		M_Con_L.jump_wai_time = 0.3f;
	}
	else if (M_Con_L.pos.Z >= 10.f && M_Con_L.jump_point == 2) {
		M_Con_L.jump_point = 3;
		Jump();
	}


	if (M_Con_R.jump_wai_time > 0.f) {
		M_Con_R.jump_wai_time -= d_time;
	}
	if (M_Con_L.jump_wai_time > 0.f) {
		M_Con_L.jump_wai_time -= d_time;
	}
}

void APlayer_CPP::SlidingMotionCheck() {
	if (M_Con_R.pos.Z > -5.f) {
		M_Con_R.sliding_point = 1;
	}
	else if (M_Con_R.pos.Z <= -5.f && M_Con_R.sliding_point == 1) {
		M_Con_R.sliding_point = 2;
		M_Con_R.sliding_wai_time = 0.3f;
	}
	else if (M_Con_R.pos.Z <= -10.f && M_Con_R.sliding_point == 2 && M_Con_R.sliding_wai_time > 0.f) {
		M_Con_R.sliding_point = 3;
		Sliding();
	}

	if (M_Con_L.pos.Z > -5.f) {
		M_Con_L.sliding_point = 1;
	}
	else if (M_Con_L.pos.Z <= -5.f && M_Con_L.sliding_point == 1) {
		M_Con_L.sliding_point = 2;
		M_Con_L.sliding_wai_time = 0.3f;
	}
	else if (M_Con_L.pos.Z <= 5.f && M_Con_L.sliding_point == 2) {
		M_Con_L.sliding_point = 3;
		Sliding();
	}


	if (M_Con_R.sliding_wai_time > 0.f) {
		M_Con_R.sliding_wai_time -= d_time;
	}
	if (M_Con_L.sliding_wai_time > 0.f) {
		M_Con_L.sliding_wai_time -= d_time;
	}
}

void APlayer_CPP::RollingMotionCheck() {

}

void APlayer_CPP::BoostMotionCheck() {

}