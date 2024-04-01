#include "Item4.h"
#include <string>
#include<iostream>
using namespace std;
int main()
{
	string strName( "gcy");
	string strAddr("tengzhou");
	ABEntry entry(strName, strAddr, 41);
	//ABEntry entry2(string("gcy"), string("tengzhou"), 30);
	entry.GetName();
	cout << "-----------------------" << endl;
	static_cast<const ABEntry>(entry).GetName();
	return 0;
}