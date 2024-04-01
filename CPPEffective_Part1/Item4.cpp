#include "Item4.h"
#include <iostream>
using namespace std;
ABEntry::ABEntry(string& name, string& address, int num):m_thename(name), m_theAddress(address), m_numTimesConsulted(num)
{

}

const string & ABEntry::GetName() const
{
	// TODO: 在此处插入 return 语句
	cout << "excuting const GetName" << endl;
	return m_thename;
}

string & ABEntry::GetName()
{
	// TODO: 在此处插入 return 语句
	
	cout << "excuting GetName" << endl;
	return const_cast<string&> ((static_cast<const ABEntry>(*this)).GetName());
}
