#include <iostream>
using namespace std;

class Critter
{
public:
	
// Static variable inside of class

	Critter()
	{
		cout << "A new critter is born!\n";
		++CritterCount;
	}

// Static function inside of class

	static void AnnounceCount()
	{
		cout << CritterCount << endl;;
	}
	
	// we cannot initialize CritterCount inside the class. Static class variable members must be initialized outside of the class. Const could be initialized, though.
	static int CritterCount;
};

int Critter::CritterCount = 0; // initialize

int main()
{
	Critter::AnnounceCount();
	Critter* crit = new Critter; // dynamically create critter
	Critter::AnnounceCount();
	delete crit; // free up memory space

	system("pause");
}
