#pragma once
#include<string>
using namespace std;
class TimeKeeper
{
public:
	TimeKeeper();
	// ~TimeKeeper(); // �����������������������������������޷������ã�ֻ�ø�����������������
	virtual ~TimeKeeper() = 0; // ����������������Ҫʵ�֡�
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


class SpecialString :public string // ɧ���⣬string ����������Ϊnon-virtual
{
public:
	SpecialString();
	~SpecialString(); //�������������ᱻ����
private:
	char *m_ptr;
};