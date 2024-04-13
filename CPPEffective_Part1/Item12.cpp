#include "Item12.h"
#include<iostream>
Customer::Customer(const string& strName):m_name(strName)
{
	
	cout << "Customer::Customer" << endl;
}

Customer::Customer(const Customer& rhs)
{
	this->m_name = rhs.m_name;
}

Customer::~Customer()
{
	
	cout << "~Customer::Customer" << endl;
}

Customer& Customer::operator=(const Customer& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}
	this->m_name = rhs.m_name;
}

PriorityCustomer::PriorityCustomer(const string& strName, int priority):Customer(strName),m_priority(priority)
{
	cout << "PriorityCustomer::PriorityCustomer" << endl;
}

PriorityCustomer::PriorityCustomer(const PriorityCustomer& rhs):Customer(rhs)
{
	m_priority = rhs.m_priority;
}

PriorityCustomer::~PriorityCustomer()
{
	cout << "~PriorityCustomer::~PriorityCustomer" << endl;
}

PriorityCustomer& PriorityCustomer::operator=(const PriorityCustomer& rhs)
{
	// TODO: 在此处插入 return 语句
	if (this == &rhs)
	{
		return *this;
	}
	Customer::operator=(rhs);
	this->m_priority = rhs.m_priority;
	return *this;
}
