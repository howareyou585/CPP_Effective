#pragma once
#include<string>
using namespace std;
class TimeKeeper
{
public:
	TimeKeeper();
	// ~TimeKeeper(); // 如果不是虚析构函数，则子类的析构函数无法被调用，只用父类的析构函数会调用
	virtual ~TimeKeeper() = 0; // 纯虚析构函数必须要实现。
};
class AtomicClock :public TimeKeeper
{
public:
	AtomicClock();
	~AtomicClock();
};
class WaterClock :public TimeKeeper
{
public:
	WaterClock();
	~WaterClock();
};

TimeKeeper* GetTimeKeeper(int kind);


class SpecialString :public string // 骚主意，string 的析构函数为non-virtual
{
public:
	SpecialString();
	~SpecialString(); //该析构函数不会被调用
private:
	char *m_ptr;
};