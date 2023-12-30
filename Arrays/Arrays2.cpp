/*
	NOTES

int main()
{
	int MyArray[5] = { 1, 23, 5, 4, 9 };

	cout << "MyArray[0] = " << MyArray[0] << endl;
	cout << "MyArray[1] = " << MyArray[1] << endl;
	cout << "MyArray[2] = " << MyArray[2] << endl;
	cout << "MyArray[3] = " << MyArray[3] << endl;
	cout << "MyArray[4] = " << MyArray[4] << endl;
	cout << "MyArray[5] = " << MyArray[5] << endl; // This number is out of the array bounds. It will print out garbage and unpredictable data. Don't do that.

	system("pause");
}

*/ 

#include <iostream>
using namespace std;

int main()
{
	int MyArray[5] = { 1, 23, 5, 4, 9 };

	for (int i = 0; i < 5; i++)
	{
		cout << "MyArray[" << i << "] = " << MyArray[i] << endl;
	}

	system("pause");
}
