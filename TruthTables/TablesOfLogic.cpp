/* NOTES:

We use AND, OR, and TRUTH TABLES to check more than one condition.
Also, they are useful to make the code more compact and taking up less space (you don't have to check every condition by copy pasting if statements).

AND: &&
OR: ||

Table of logic (If A is true, then B etc. equals):

A = T / T / F / F
B = T / F / T / F
A && B = T / F / F / F
A || B = T / T / T / F

EXAMPLE:

int main()
{
	int a = 5;
	int b = -5;

	if (a < 10 && b > -10)
	{
		// TRUE
	}
	if (a > 10 || a < 6)
	{
		// TRUE 
	}
	system("pause");
}
*/

#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	int j = 2;
	int k = 3;

	if (i == k || i == j)
	{
		cout << "Both conditions false. This will never be printed. ";
	}

	if ((i <= k && i < j) && (j <= k))
	{
		cout << "This will be printed. " << endl;
	}

	system("pause");
}
