/*
	NOTES
	
Arrays are solutions that allow the application of operations to an entire set of values at once. They are containers of values of the same data type.
Each element in the array (elements) are right next to each other in memory - CONTIGUOUS MEMORY LOCATIONS.
For example, you have 100 integers, and you want the 99th integer - by specifying the index you may access it directly - RANDOM ACCESS.
Multiple Values - One Variable.

012345

0-1 is 4 bytes away, 1-2 is 8 bytes away, so the number 3 will be 12 bytes away.

	EXAMPLES:

1. Simple iteration (printing 1,2,3):

int myIntArray[3];

myIntArray[0] = 1;
myIntArray[1] = 2;
myIntArray[2] = 3;

for(int i = 0; i < 3; i++)
{
	cout << myIntArray[i];
}

2. Declaring a variable of type double (decimal):

double myDubArray[] = {{3.14159},{2.71828}}; // {Element 0}, {Element 1}
cout << myDubArray[1];
cout << myDubArray[0];

*/

#include <iostream>
using namespace std;

int main()
{
	int MyIntArray[10];

	for (int i = 0; i < 10; i++) // initialize the array in the background
	{
		MyIntArray[i] = i;
		// cout << MyIntArray[i] << endl; // displays the numbers in the array in sequence
	}

	cout << "The first element in MyIntArray is: " << MyIntArray[0] << endl;

	cout << "The fifth element in MyIntArray is: " << MyIntArray[4] << endl;

	system("pause");
}
