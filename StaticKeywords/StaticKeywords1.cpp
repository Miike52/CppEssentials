/*
	NOTES:

Static variables, unlike local ones, lives on past the main function's end - they live in another space in memory.


1. Static variables in functions:

void update_count()
{
	static int count = 0;
	count ++;
}

2. Static class objects:

class Dog { };

int main()
{
	if (true)
	{
		static Dog dog;
	}
}

3. Static Data member in class:

class Creatue
public:
	static int creature_count;
	Creature()
	{
		creature_count++;
	}

int Creature::creature_count = 0; // cannot re-define, but operations can be made on it, like ++ operator

4. Static member functions:

	class Announcer 
	{
		static void Announce()
		{
			cout << "Welcome!\n";
		}
	}

Announcer::Announce(); // if it is a Static function, you can call a function even there is no object in that class


*/

#include <iostream>
using namespace std;

void AddToCount()
{
	static int count = 0;
	count++;
	cout << "Value of the count: " << count << endl;
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		AddToCount();
	}

	system("pause");
}
