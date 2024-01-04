/*
	NOTES

Structs - (Sctructures, The Data Structure), custom data type / an entity that contains its own information, such as variables and functions. 

They use OOP. Structures are a way to group several related variables into one place.

	EXAMPLE

struct Character	
{
	string Name;
	float Health;
	int Level;
	float Damage;
	void Attack;
	{
		cout << Name << " does" << Damage << " damage!" << endl;
	}
}

Character Joe; // Character Object
Joe.Name = "Joe";
Joe.Health = 100.f;
Joe.Level = 1;
Joe.Damage = 2.5f;

Joe.Attack();

Character Lisa = {"Lisa", 100.f, 3, 15.f};

Lisa.Attack();

*/

#include <iostream>
#include <string>
using namespace std;

struct LocationVector
{
	float X;
	float Y;
	float Z;
};

struct Player
{
	int Level;
	float Health;
	float Damage;
	float Stamina;
	
	LocationVector Location = { 0.f, 0.f, 0.f }; // default location

	// it is usually a good habit to access the variables by using functions, and not directly from a struct

	void TakeDamage(float dmg)
	{
		Health -= dmg;
	}

	int GetLevel()
	{
		if (Level > 10)
		{
			cout << "Your level is greater than 10! \n";
		}	
		return Level;
	}

	void DisplayLocation()
	{
		cout << "Location.X = " << Location.X << endl;
		cout << "Location.Y = " << Location.Y << endl;
		cout << "Location.Z = " << Location.Z << endl;
	}
	 
}; 

int main()
{
	Player p_1;
	p_1.Level = 11;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	cout << "p_1 Level = " << p_1.GetLevel() << endl;

	p_1.TakeDamage(40.f);

	cout << "p_1 takes " << 40.f << " damage!" << endl;
	cout << "p_1 Health = " << p_1.Health << endl;

	p_1.DisplayLocation();	

	Player p_2 = { 1, 50.f, 40.f, 35.54f, {35.5, 73.65f, 100.003f} }; 
	// ^ we can initialize p_2 this way - initializer list inside of the other initializer list contains location values

	p_2.DisplayLocation();

	system("pause");
}
