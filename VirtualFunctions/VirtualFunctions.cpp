/*
	NOTES:

Virtual Functions - is a class member function that may be re-defined and overridden in its child/derived class (to achieve polymorphism).

Sometimes we may wish to have a function in the parent class, that when inherited by the child class, gets its own definition and is different.

Additional note: we may also define these outside the class.

	EXAMPLES:

class Parent
{
public:
	virtual void Greet()
	{
		cout << "Hello!\n";
	}
}

class Child: public Parent
{
public:
	void Greet()
	{
		cout << "What's up?\n";
	}
}

class GrandChild: public Child
{
	virtual void Greet() override // we don't need to add virtual here, as Child inherited it from the Parent etc., but it's a good practice in order to know, that the function is virtual. 
	// Same with override. It just makes things more clear.
	
	{
		cout << "Goo-goo ga-ga!\n";
	}
}

*/

#include <iostream>
using namespace std;

class Object
{
public:
	virtual void BeginPlay();
};

class Actor : public Object // derived class
{
public:
	virtual void BeginPlay() override; // override BeginPlay(); And again: even though it is already virtual, it is a good practice to add "virtual" and then "override" for clarity.
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main()
{
	// Object* obj = new Object;
	// obj->BeginPlay();

	// Actor* act = new Actor;
	// act->BeginPlay();

	Pawn* pwn = new Pawn;
	pwn->BeginPlay();

	// delete obj;
	// delete act;
	delete pwn;
	system("pause");
}

void Object::BeginPlay()
{
	cout << "Object BeginPlay() called.\n";
}

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() called.\n";
}

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() called.\n";

	// Those functions may be calling Parent versions of BeginPlay() here - Object and Actor
	Object::BeginPlay();
	Actor::BeginPlay();
}

// In layman's terms: just because these are virtual, each of them will have their different, unique version.
