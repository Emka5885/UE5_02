// Fill out your copyright notice in the Description page of Project Settings.


#include "RollaBallPlayer.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"


// Sets default values
ARollaBallPlayer::ARollaBallPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Create Components - Before this step the won't exist on our Actor, they've only been defined.
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");

	// Set the Root Component to be our Mesh.
	RootComponent = Mesh;
	// Attach the SpringArm to Mesh, Spring will now follow the Mesh transform.   //T�umaczenie - (attach) "przytwierdza�"
	SpringArm->SetupAttachment(Mesh);
	// Attach the Camera to the SpringArm, Camera will now follow the SpringArm transform.
	Camera->SetupAttachment(SpringArm);

	// Set physics to True
	Mesh->SetSimulatePhysics(true);

	Mesh->OnComponentHit.AddDynamic(this, &ARollaBallPlayer::OnHit);
}

// Called when the game starts or when spawned
void ARollaBallPlayer::BeginPlay()
{
	Super::BeginPlay();
	// Account for mass in MoveForce
	MoveForce *= Mesh->GetMass();
	JumpImpulse *= Mesh->GetMass();
}

// Called to bind functionality to input
void ARollaBallPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Custom Input Axis Bindings.
	InputComponent->BindAxis("MoveForward", this, &ARollaBallPlayer::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ARollaBallPlayer::MoveRight);
	// Custom Action Binding.
	InputComponent->BindAction("Jump", IE_Pressed, this, &ARollaBallPlayer::Jump);
}

void ARollaBallPlayer::MoveRight(float Value)
{
	// Get The Right vector of the camera as it doesn't rotate and move the player in this direction based on the input and MoveForce.
	const FVector Right = Camera->GetRightVector() * MoveForce * Value;
	Mesh->AddForce(Right);
}

void ARollaBallPlayer::MoveForward(float Value)
{
	const FVector Forward = Camera->GetForwardVector() * MoveForce * Value;
	Mesh->AddForce(Forward);
}

void ARollaBallPlayer::Jump()
{
	// Cap the number of jumps we can make.   //T�umaczenie - (cap) "ogranicz"
	if (JumpCount >= MaxJumpCount) { return; }
	//// Apply an impulse to the Mesh in the Z Axis.
	Mesh->AddImpulse(FVector(0, 0, JumpImpulse));
	// Track how many times we've jumped.   //T�umaczenie - (track) "�led�"
	JumpCount++;
}

void ARollaBallPlayer::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{

	// Get Direction we hit the surface on the Z axis.   //T�umaczenie - (surface) "powierzchnia"
	const float HitDirection = Hit.Normal.Z;
	// If it's more than 0 then we've hit something below us. 1 is flat, anything between is a slope.   //T�umaczenie - (below) "pod", (slope) "nachylenie"
	if (HitDirection > 0)
	{
		JumpCount = 0;
	}
}

