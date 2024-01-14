  /*
	NOTES:


	Constructors initialize member variables with default values, or calling any other type of code / functions that need to be called upon a creation of an object.
	Destructor function is called upon deleting / destruction of an object.

	It is important, because sometimes certain actions need to be performed, to maybe clean up whatever was done during the lifetime of that object.
	The main reason for this is due to dynamic memory allocation.

	Sometimes you need to create objects dynamically, for example random number of skeletons being spawned in the game - that is allocated on the Heap.
	If you delete something from the Heap, its Destructor gets called - and code that you put in the body of Destructor will be run.

	EXAMPLE:

	class Weapon // for example, random weapon that gets dynamically spawned in the game world
	{
	public:
		Weapon() 
		{
			cout << "A new weapon is forged!";
		}

		~Weapon() // DESTRUCTOR
		{
			cout << "The weapon was destroyed!";
		}
	}

	weapon* Wep = new Weapon; // create a weapon dynamically on the Heap

	delete Wep;

Steps to dynamic memory:

1. Dynamically Allocate memory for the class (new class created)

2. Constructor dynamically allocates memory for variables
	(pointer variables are on the Stack, but addresses on them are the dynamic addresses with piece of data on the Heap)

3. Delete class
	(the class itself is free, but each member variable that was dynamically allocated is not)

4. Destructor deletes member variables


*/



#include <iostream>
using namespace std;

class Character
{
public:
	Character();
	~Character();

	//pointer variables on the Stack for Character
	int* CharacterAge;
	float* CharacterHealth;
};

int main()
{
	Character* Char = new Character;
	delete Char;

	system("pause");
}

Character::Character()
{
	cout << "A new Character was created.\n";

	// dynamically allocate memory on the Heap as soon as Character gets created
	CharacterAge = new int(1);
	CharacterHealth = new float(100.f);
}

Character::~Character()
{
	cout << "Character destroyed.\n";

	delete CharacterAge;
	delete CharacterHealth;
}
