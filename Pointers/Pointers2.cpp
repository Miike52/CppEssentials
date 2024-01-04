/*  NOTES

Pointers are addresses. Because every variable has its own address, that address can be used to access that memory and read its contents.

It's very efficient to work with addresses of variables, instead of variables themselves.
Why? For example, when we call a Function, and give it an input parameter of (e.g.) Struct that is very large, we are copying and passing
around big objects in memory, which is inefficient and can slow your program.

Many bytes of storage, it means: every Function, every Variable, one by one gets copied over 
into the temporary local Struct in the Function and gets checked, EVEN if you need only 1 small thing from there.

In layman's terms: thanks to pointers you pass the address of (for instance) Struct directly, 
and show where that 1 thing (which the program needs) is located in the memory. It saves system memory and time.

	ADDITIONAL NOTES:

- We can also say that Pointers are variables that point to addresses of data.
- Pointers may work with increment/decrement operators - pointer arithmetic.
- Memory Addresses are typically stored in a hexadecimal format.
- Important for Game Dev: Pointers are used extensively in Unreal Engine.

	EXAMPLES

int myInt = 2;

int* ptr; // type int* is a pointer to int - it's NOT of type int

ptr = &MyInt; // ampersand here is an address of operator (hexadecimal number). Pointers don't have to be initialized right away like References

cout << ptr << endl;
	
	0x61ff14

cout << *ptr << endl; // we dereference the pointer by using *ptr

	2 // dereferencing - accessing the contents of memory location, by following the address stored in a pointer. In this case - value of myInt.

^ There's the difference.

*/

#include <iostream>

int main()

{
	int a = 100;

	int* aPtr;
	aPtr = &a;

	std::cout << *aPtr << std::endl; // without dereference operator * we would get hexadecimal number in cout

	int b = 50;

	aPtr = &b;
	
	std::cout << *aPtr << std::endl;

	system("pause");
}
