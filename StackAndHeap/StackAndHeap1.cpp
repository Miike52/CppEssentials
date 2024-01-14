/*
	NOTES

This is to understand the pointers a little bit further. How dynamic memory works?

Memory addresses are placed in Stack.
Items are stored in the Stack, and they're prioritized, based on the order they go into the Stack.
	


	STACK:

	p
	main()

	HEAP:

	p = 3
	p = 15

Heap is reserverd for dynamic memory - when we don't know how much memory we have to use, we use dynamic.
We allocate memory to the Heap by 2 keywords:

new
delete

int main()
{

	int* p = new int;
	*p = 3; // it is allocated in the Heap in hexadecimal number
	
	delete p; // it does not delete the pointer, it deallocates memory - the address is now free for some other variable to allocate memory
	p = new int(15);
}

Local variables go out of scope on its own, but dynamically allocated memory does not do such thing.
If we allocate the memory and don't free it up, it just takes memory and sits there - that's called memory leak.

Keyword "delete" frees this memory up. 

function.1()
{
	int* p = new int(5); // this will cause memory leak, especially if we call this function many times
}


If we free up memory and nothing will point to Heap, we can encounter "dangling pointers". It may cause errors later on.
We need to reassign pointer p, to the keyword nullptr, like this:

p = nullptr; // sometimes people use p = 0, but it may be misleading and misunderstood sometimes

*/


// print i as long i is less than 6

#include <iostream>
#include <string>
using namespace std;

struct Character
{
	string Name;
	float Health;
};


int main()
{
	/* Call to function - as we have not created Character() yet in struct, we create it here - default values are assigned - empty and 0.
	This is stored on the Heap - it does not go out of scope by default and will cause memory leak if we don't get rid of it */
	
	for (int i = 0; i < 1000000000; i++)
	{
		Character* PtrToChar = new Character();

		PtrToChar->Name = "Neo";

		cout << PtrToChar->Name << endl;

		delete PtrToChar; // it deletes it from the Heap and frees memory up - always do it when you create objects dynamically
	}
	
	system("pause");
}

