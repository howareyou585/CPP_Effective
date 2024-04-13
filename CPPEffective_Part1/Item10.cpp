#include "Item10.h"



Item10::Item10(int a, int b, int c)
{
	m_a = a;
	m_b = b;
	m_ptrC = new int(c);
}


Item10::~Item10()
{
	if (m_ptrC)
	{
		delete m_ptrC;
	}
}

Item10 & Item10::operator=(const Item10 & item)
{
	// TODO: 在此处插入 return 语句
	if (this == &item)
	{
		//如果没有该条件判断， 当&item 和 this 是同一个对象时， 程序会崩溃 
		return *this;
	}
	if (m_ptrC)
	{
		delete m_ptrC;
		m_ptrC = nullptr;
	}

	this->m_a = item.m_a;
	this->m_b = item.m_b;
	this->m_ptrC = new int (*item.m_ptrC);
	return *this;
}
