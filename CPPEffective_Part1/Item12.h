#pragma once
#include<string>
using namespace std;

class Customer
{
public:
	Customer(const string& strName);
	Customer(const Customer& rhs);
	virtual ~Customer();
	Customer& operator = (const Customer& rhs);
private:
	string m_name;
};

class PriorityCustomer :public Customer
{
public:
	PriorityCustomer(const string& strName,int priority);
	PriorityCustomer(const PriorityCustomer& rhs);
	~PriorityCustomer();
	PriorityCustomer& operator = (const PriorityCustomer& rhs);
private:
	int m_priority;
};
