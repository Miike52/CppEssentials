#include <iostream>
using namespace std;

class Item
{
public:
	Item()
	{
		cout << "An item has been created!\n";
	}
	~Item()
	{
		cout << "An item has been destroyed!\n";
	}
};

int main()
{
	// destructor will be called if we don't use static - but if we use it, Item will be stored in another memory space, so destructor will be called only after the system("pause")
	{
		static Item item;
	}

	system("pause");
}
