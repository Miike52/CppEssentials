/*
	NOTES

Enumerations (enums), in simplification are named constants used to define a various program states.
Using enums is easier, a lot more smoother and descriptive than using int.

	EXAMPLES:

enum PlayerStatus
{
	PS_Crouched, // const1 = 0, // we can specify these in the same line, too
	PS_Standing, // const2 = 1, // etc. - each constant is an integer!
	PS_Running,
	PS_Sprinting
}

enum ItemStatus
{
	IS_PickedUp = 1, // defining 1 causes each other item to be equal to 1 more than previous one
	IS_Dropped, // automatically initialized to 2
	IS_Equipped // automatically initialized to 3
}

enum GameState{GS_Paused, GS_Play}; // May be used in this way, too. However, not always recommended.

enum Currency
{ 
	Copper = 1,
	Silver = 100,
	Gold = 1000
}

	EXAMPLE WITH SWITCH:

PlayerStatus status = PS_Crouched;

Switch(status)
{
	case PS_Crouched:
		cout << "Crouched." << endl;
		break;
	case PS_Standing:
		cout << "Standing." << endl;
		break;
	case PS_Running:
		cout << "Running." << endl;
		break;
	case PS_Sprinting:
		cout << "Sprinting." << endl;
		break;
	default: // just in case.
		cout << "Invalid choice!" << endl;	
}

*/

#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Crouched, // 0,
	PS_Standing, // 1 etc.
	PS_Walking, 
	PS_Running
};

enum MovementStatus
{
	MS_Crouched,
	MS_Standing,
	MS_Walking,
	MS_Running
};

int main()
{
	PlayerStatus status;
	status = PS_Crouched; // or: status = PlayerStatus::PS_Crouched;

	if (status == PS_Crouched)
	{
		cout << "The Player is crouching! \n";
	}

	system("pause");
}
