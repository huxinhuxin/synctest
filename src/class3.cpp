#include <iostream>
#include "class3.h"

int class3::add1(int a,int b)
{
	std::cout<<"class3 add1 "<<a<<"+"<<b<<"="<<a+b<<std::endl;
	int c = m_class2.add(a,b);
	return c;
}

int class3::desc1(int a,int b)
{
	int c=m_class2.desc(a,b);
	std::cout<<"class3 desc1 "<<a<<"-"<<b<<"="<<c<<std::endl;
	return c;
}
