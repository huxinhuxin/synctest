#include  "class1.h"
#include <iostream>

class1::class1()
{
	m_lcount=0;
}

class1::~class1()
{
	
}

int class1::getcount()
{
	std::cout<<"class1 getcount "<<m_lcount<<std::endl;
	return m_lcount;
}

void class1::setcount(int a)
{
	std::cout<<"class1 setcount "<<a<<std::endl;
	m_lcount =a;
}
