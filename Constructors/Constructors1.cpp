/*	NOTES

Constructor - a special type of function called to create an object. It gives your classes etc. default values.
Constructor has the name of the class itself.

We don't need to specify return values in Constructors, not even void.
	
	EXAMPLES:

class Dog
{
	Dog(); // constructor defined inside of the class[[[[[[
	string name;
	int age;
	void bark();
}

// We can define classes outside of the Class function:

Dog::bark()
{
	cout << "Woof!" << endl; 
}

// We can define constructor outside of the class, too:

Dog::Dog()
{
	name = "Spot";
	age = 2;
}

// Then, each new Dog will have default name of "Spot" and age of "2" 

*/

#include <iostream>
#include <string>
using namespace std;

class Dog
{
public: // Structs have a body that's public by default - but in this case we need public to access dog.Bark() in int main();

	Dog();

	string Name;
	int Age;
	float Health;

	void Bark();
};

int main()
{
	Dog dog;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	dog.Name = "Sam";
	dog.Age = 40;
	dog.Health = 43.5;

	cout << dog.Name << endl;
	cout << dog.Age << endl;
	cout << dog.Health << endl;

	system("pause");
}

Dog::Dog() // we don't need void in the constructor itself.
{
		Bark(); // barking by default - that's how we define it outside of the class.

		Name = "Default Name";
		Age = 10;
		Health = 100.f;
}

void Dog::Bark() 
{
	cout << "Woof!" << endl; // that's how we define the Bark() function outside of the class.
}

// Struct in next part
