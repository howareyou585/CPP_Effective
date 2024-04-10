#pragma once
class Item10
{
public:
	Item10(int a,int b, int c);
	~Item10();
	Item10& operator =(const  Item10& item);
private:
	int m_a;
	int m_b;
	int m_c;
};

