#include "Item10.h"



Item10::Item10(int a, int b, int c)
{
	m_a = a;
	m_b = b;
	m_c = c;
}


Item10::~Item10()
{
}

Item10 & Item10::operator=(const Item10 & item)
{
	// TODO: �ڴ˴����� return ���
	if (this == &item)
	{
		return *this;
	}
	this->m_a = item.m_a;
	this->m_b = item.m_b;
	this->m_c = item.m_c;
	return *this;
}
