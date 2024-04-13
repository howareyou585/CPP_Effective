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
//	// TODO: 在此处插入 return 语句
//	if (this == &item)
//	{
//		//如果没有该条件判断， 当&item 和 this 是同一个对象时， 程序会崩溃 
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
//version1: 不判断两个赋值的对象是否是同一个对象
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
//version 2：判断两个赋值的对象是否是同一个对象
//Item10 & Item10::operator=(const Item10 & item)
//{
//	// TODO: 在此处插入 return 语句
//	if (this == &item)
//	{
//		//如果没有该条件判断， 当&item 和 this 是同一个对象时， 程序会崩溃 
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
//version 3：在第二个版本的基础上继续完善代码
//
//Item10& Item10::operator=(const Item10& rhs)
//{
//	if (this == &rhs) // 判断是否是同一个对象
//	{
//		return *this;
//	}
//	//1.保存原来的指针对象
//	auto ptrOrgin = this->m_ptrC;
//	
//	//2.赋值操作
//	this->m_ptrC = new int(*rhs.m_ptrC);
//	this->m_a = rhs.m_a;
//	this->m_b = rhs.m_b;
//
//	//3.删除
//	delete ptrOrgin;
//	ptrOrgin = nullptr;
//	return *this;
//}

//version 4：copy and swap
Item10& Item10::operator=(Item10 rhs)
{
	/*::swap(*this, rhs);*/
	return *this;
}