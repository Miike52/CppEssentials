/*
	NOTES

We use access restrictions to define how the members (attributes and methods) of a class can be accessed.
In layman's terms, it prevents the programmer from being able to change values to something that's inappriopriate for the program, shoudln't be changed etc.

We differentiate 3 levels of restriction: public, protected, private.
By default inside of a class in the body is private.

public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited (derived/child) classes

	EXAMPLE 1:

class Dog()
{
	void Bark()
	{
		cout << "Woof!";
	}
}

int main()
{
	Dog dog;
	dog.Bark(); // this will return an error! we don't have access unless we use public above the void Bark()
}

	EXAMPLE 2:

class MyClass {
  public:    // Public access specifier
	int x;   // Public attribute
  private:   // Private access specifier
	int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}

*/

#include <iostream>
#include <string>
using namespace std;

class Creature
{

public:
	Creature(); // constructor

	/* We can use getters and setters, so we can access private variables and change them without violating the fact, that they're private.
	There is a method called Encapsulation - it encapsulates the information and protects it from unauthorized use.
	*/

	void SetName(string name);
	string GetName();
	
	float GetHealth();

	void TakeDamage(float damage);


private:
	string Name;
	float Health;

protected:
	int NumberOfLimbs;

};

class Goblin : public Creature // if we would use private instead, all of those inherited members from Creature class would become private
{
public:
	Goblin();

	int GetNumberOfLimbs();
};

int main()
{
	Creature Igor;
	Igor.SetName("Igor");
	cout << "Name: " << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	cout << "Igor will now take 35 damage!" << endl;

	Igor.TakeDamage(35.0);

	cout << endl;

	Goblin Gobby;

	cout << "Name: " << Gobby.GetName() << endl;
	cout << "Number of Limbs: " << Gobby.GetNumberOfLimbs() << endl;	

	system("pause");
}

Creature::Creature()
{
	Health = 100.f;
	cout << "A creature has been created!\n";
}

// setter
void Creature::SetName(string name)
{
	Name = name;
}

// getter
string Creature::GetName()
{
	return Name;
}

float Creature::GetHealth()
{
	return Health;
}

void Creature::TakeDamage(float damage)
{
	float Total;
	Total = Health - damage;

	if (Total <= 0.f)
	{
		cout << GetName() << " has died!\n";
	}
	else
	{
		Health -= damage;
	}

	cout << "Health: " << GetHealth() << endl;
}

Goblin::Goblin()
{
	NumberOfLimbs = 5; /* we don't get any errors, because we're inside the Goblin class, and as a derived class it inherits from Creature.
	Therefore, it has access to public and protected member variables (no access to private, though). */
	
	SetName("Gobby");
}

int Goblin::GetNumberOfLimbs()
{
	return NumberOfLimbs;
}
