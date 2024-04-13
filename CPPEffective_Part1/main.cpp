#include "Item4.h"
#include "Item7.h"
#include "Item10.h"
#include <string>
#include<iostream>
#include "Directroy.h"
#include "FileSystem.h"
using namespace std;
int main()
{
	//string strName( "gcy");
	//string strAddr("tengzhou");
	//ABEntry entry(strName, strAddr, 41);
	////ABEntry entry2(string("gcy"), string("tengzhou"), 30);
	//entry.GetName();
	//cout << "-----------------------" << endl;
	//static_cast<const ABEntry>(entry).GetName();
	//Directroy d;

	//Item7:
	/*TimeKeeper* ptrTimeKeeper = GetTimeKeeper(1);
	if (ptrTimeKeeper)
	{
		delete ptrTimeKeeper;
		ptrTimeKeeper = nullptr;
	}
	cout << "--------------------------------" << endl;
	ptrTimeKeeper = GetTimeKeeper(0);
	if (ptrTimeKeeper)
	{
		delete ptrTimeKeeper;
		ptrTimeKeeper = nullptr;
	}
*/
	//SpecialString ss;
	Item10* objA = new Item10(1, 2, 4);
	Item10* objB = objA;
	*objA = *objB;
	return 0;
}