#include "Item10.h"
#include <vector>
using namespace std;
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
//Item10& Item10::operator=(const Item10& item)
//{
//	// TODO: �ڴ˴����� return ���
//	if (this == &item)
//	{
//		//���û�и������жϣ� ��&item �� this ��ͬһ������ʱ�� �������� 
//		return *this;
//	}
//	if (m_ptrC)
//	{
//		delete m_ptrC;
//		m_ptrC = nullptr;
//	}
//
//	this->m_a = item.m_a;
//	this->m_b = item.m_b;
//	this->m_ptrC = new int(*item.m_ptrC);
//	return *this;
//}
//version1: ���ж�������ֵ�Ķ����Ƿ���ͬһ������
//Item10& Item10::operator=(const Item10& item)
//{
//	
//	if (m_ptrC)
//	{
//		delete m_ptrC;
//		m_ptrC = nullptr;
//	}
//
//	this->m_a = item.m_a;
//	this->m_b = item.m_b;
//	this->m_ptrC = new int(*item.m_ptrC);
//	return *this;
//}
// 
//version 2���ж�������ֵ�Ķ����Ƿ���ͬһ������
//Item10 & Item10::operator=(const Item10 & item)
//{
//	// TODO: �ڴ˴����� return ���
//	if (this == &item)
//	{
//		//���û�и������жϣ� ��&item �� this ��ͬһ������ʱ�� �������� 
//		return *this;
//	}
//	if (m_ptrC)
//	{
//		delete m_ptrC;
//		m_ptrC = nullptr;
//	}
//
//	this->m_a = item.m_a;
//	this->m_b = item.m_b;
//	this->m_ptrC = new int (*item.m_ptrC);
//	return *this;
//}
//version 3���ڵڶ����汾�Ļ����ϼ������ƴ���
//
//Item10& Item10::operator=(const Item10& rhs)
//{
//	if (this == &rhs) // �ж��Ƿ���ͬһ������
//	{
//		return *this;
//	}
//	//1.����ԭ����ָ�����
//	auto ptrOrgin = this->m_ptrC;
//	
//	//2.��ֵ����
//	this->m_ptrC = new int(*rhs.m_ptrC);
//	this->m_a = rhs.m_a;
//	this->m_b = rhs.m_b;
//
//	//3.ɾ��
//	delete ptrOrgin;
//	ptrOrgin = nullptr;
//	return *this;
//}

//version 4��copy and swap
Item10& Item10::operator=(Item10 rhs)
{
	/*::swap(*this, rhs);*/
	return *this;
}