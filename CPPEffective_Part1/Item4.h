#pragma once
#include <vector>
#include <string>
using namespace std;

class ABEntry
{

public:

	ABEntry(string& name, string& address, int num);
	const string& GetName() const;
	string & GetName();
private:
	string m_thename;
	string m_theAddress;
	int    m_numTimesConsulted;

};

