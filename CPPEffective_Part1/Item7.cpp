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
	m_ch = new char[100];
	cout << "AtomicClock::AtomicClock()" << endl;
}

AtomicClock::~AtomicClock()
{
	//父类的析构函数不是virtual 的话，该析构函数不会被调用，会有内存泄漏。
	cout << "release m_ch" << endl;
	delete[] m_ch;
	m_ch = nullptr;
	cout << "AtomicClock::~AtomicClock()" << endl;
}

WaterClock::WaterClock()
{
	cout << "WaterClock::WaterClock()" << endl;
}

WaterClock::~WaterClock()
{
	//父类的析构函数不是virtual 的话，该析构函数不会被调用，会有内存泄漏。
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
