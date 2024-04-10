#include "Item7.h"
#include <iostream>
using namespace std;
TimeKeeper::TimeKeeper()
{
	cout << "TimeKeeper::TimeKeeper()" << endl;
}

TimeKeeper::~TimeKeeper()
{
	cout << "TimeKeeper::~TimeKeeper()" << endl;
}

AtomicClock::AtomicClock()
{
	cout << "AtomicClock::AtomicClock()" << endl;
}

AtomicClock::~AtomicClock()
{
	cout << "AtomicClock::~AtomicClock()" << endl;
}

WaterClock::WaterClock()
{
	cout << "WaterClock::WaterClock()" << endl;
}

WaterClock::~WaterClock()
{
	cout << "WaterClock::~WaterClock()" << endl;
}

TimeKeeper * GetTimeKeeper(int kind)
{
	TimeKeeper * ptrTimeKeeper = nullptr;
	switch (kind)
	{
	case 0:
	
		ptrTimeKeeper = new AtomicClock();
		break;
	case 1:
		ptrTimeKeeper = new  WaterClock();
		break;
	default:
		break;
	}
	return ptrTimeKeeper;
}

SpecialString::SpecialString()
{
	m_ptr = new char[100];
	cout << "SpecialString::SpecialString()" << endl;
}

SpecialString::~SpecialString()
{
	delete[] m_ptr;
	m_ptr = nullptr;
	cout << "SpecialString::~SpecialString()" << endl;
}
