/*
	NOTES:

Switch Statements are much more efficient If/Else Statements. The switch expression is evaluated once.
The value of the expression is compared with the values of each case.
If there is a match, the associated block of code is executed.

In extreme cases, you may have 1000 conditions to check. Using If/Else If statements will make the program really slow.
In Switch Statements you may have as many cases as you want, and you have only 1 condition to check single-time.	

	EXAMPLE:

int selection = 4;

switch (selection)
{
	case 1:
		cout << "One" << endl;
		break;
	case 2:
		cout << "Two" << endl;
		break;
	case 3:
		cout << "Three" << endl;
		break;
	case 4:
		cout << "Four" << endl;
		break;
	default:
		cout << "Invalid choice!" << endl;
}

*/

#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

const float RunSpeed = 800.f; // it is better to store variables like these in containers instead of setting them to global
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed); // PlayerStatus and MovementSpeed are not public, so we need to specify input parameters in	round brackets
void SwitchOnInt(int i);

int main()
{
	int integer = 56437;
	float MovementSpeed;

	PlayerStatus status = PS_Crouching;

	UpdateMovementSpeed(status, MovementSpeed);
	SwitchOnInt(integer);

	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	switch (P_Status)
	{
	case PS_Running:
		speed = RunSpeed;
		break;
	case PS_Walking:
		speed = WalkSpeed;
		break;
	case PS_Crouching:
		speed = CrouchSpeed;
	}
  
  cout << "Movement Speed = " << speed << endl;
}
	/* HOW WOULD IT LOOK WITH IF/ELSE STATEMENTS:
	
	if (P_Status == PS_Running)
	{
		speed = RunSpeed;
	}
	else if (P_Status == PS_Walking)
	{
		speed = WalkSpeed;
	}
	else if (P_Status == PS_Crouching) // Using If/Else requires the program to check other statements, until reaching PS_Crouching
	{
		speed = CrouchSpeed;
	}
	*/

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number was zero. \n";
		break;
	case 1:
		cout << "Your number was one. \n";
		break;
	case 2:
		cout << "Your number was two. \n";
		break;
	default:
		cout << "Your number was not 0, 1 or 2. \n";
	}
}
