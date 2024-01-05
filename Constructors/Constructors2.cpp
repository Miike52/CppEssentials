// Constructors & Struct

#include <iostream>
#include <string>
using namespace std;

struct Cat
{
	Cat();
	int Age;
	float Health;

	void Meow();
};

Cat::Cat()
{
	cout << "A new cat is born!" << endl;
	
	Age = 3;
	Health = 85.5f;

	Meow();
}

void Cat::Meow()
{
	cout << "My age is: " << Age << ".\n";
	cout << "My health is: " << Health << ".\n";
}

int main()
{
	Cat cat;

	cat.Age += 5;

	cat.Meow();

	system("pause");
}
