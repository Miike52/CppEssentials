/*
	NOTES:

Object oriented programming 3 ideas:

- Encapsulation 
- Inheritance
- Polymorphism

Polymorphism is the use of a single symbol to represent multiple different types.
In layman's terms: It gives a program the ability to redefine methods for derived classes.

If you create a pointer to a Parent class, it can also point to Child classes of the Parent.
Child is also a Parent, GrandChild is also a Parent - relationship.
Which version gets called if we access the pointer? Parent or the Child?
Because the object itself is a Child, it will call the Child version of the function.

	EXAMPLES:

Parent* ptr;

ptr = new Child;

ptr-> (call the member function) // we get Child

	// We can call everything that is derived from Parent and is lower in hierarchy:

Parent* ptr2 = new GrandChild;

ptr2-> (call the member function) // we get GrandChild

	// This saves time from having to create having different arrays, etc.

*/

#include <iostream>
using namespace std;

// Inheritance chain:
class Object
{
public:
	virtual void BeginPlay();
};

class Actor : public Object
{
public:
	virtual void BeginPlay() override;
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	Object* ptr_to_object = new Object;
	Actor* ptr_to_actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;


	// with polymorphism we can create an array of object pointers:

	Object* ObjectArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };

	// ptr_to_actor and ptr_to_pawn are derived from ptr_to_object, so they can be stored in the array

	for (int i = 0; i < 3; i++)
	{
		ObjectArray[i]->BeginPlay(); // loop through every single element of the Array
	}

	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called. \n\n";
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called. \n\n";
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called. \n\n";
}
