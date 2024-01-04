#include <iostream>

int main()
{
	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* NumPtr = numbers; 
	/* only the first number of the array right now is stored. Although, arrays are contiguous and next to each other in memory, 
	so we have access to all of them. */

	std::cout << *NumPtr << std::endl;

	NumPtr++;

	std::cout << *NumPtr << std::endl;

	NumPtr++;

	std::cout << *NumPtr << std::endl;

	NumPtr--;

	std::cout << *NumPtr << std::endl;

	NumPtr += 3;

	std::cout << *NumPtr << std::endl;

	system("pause");
}
