// Pointer to Struct

#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;

	int X;
	int Y;
	int Z;
};

int main()
{
	Container container = { "Sam", 5, 6, 7 };

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl; 
	/* 
		Order of operations always begins on parenthesis. In this case we use them to dereference PtrToCont first, and then take .Name of it.
		Otherwise it would be in the opposite order and it would return an error. We can't take a .Name first and then access the address after,
		especially when PtrToCont is pointer to Struct, and not Struct itself.

		It does not look well, you can do it in the other way:
	*/

	cout << PtrToCont->Name << endl; // -> arrow notation - does the same thing. It dereferences it and gets access to content.

	cout << PtrToCont->X << endl;

	cout << PtrToCont->Y << endl;

	cout << PtrToCont->Z << endl;

	system("pause");
}
