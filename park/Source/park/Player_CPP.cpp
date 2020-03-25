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
	if (speed < 100.f) {
		speed += 50.f * d_time;
	}
	pos.X += speed * d_time;
	if (speed)

	SetActorLocation(pos);
}

void APlayer_CPP::Jump() {

}

void APlayer_CPP::Sliding() {

}

void APlayer_CPP::WallDashRight() {

}

void APlayer_CPP::WallDashLeft() {

}

void APlayer_CPP::RollingRight() {

}

void APlayer_CPP::RollingLeft() {

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