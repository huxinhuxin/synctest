#include <iostream>
#include "class2.h"

int class2::add(int a,int b)
{
	std::cout<<"class2 add "<<a<<"+"<<b<<"="<<a+b<<std::endl;
	return a+b;
}

int class2::desc(int a,int b)
{
	int c=a-b;
	std::cout<<"class2 desc "<<a<<"-"<<b<<"="<<c<<std::endl;
	return c;
}
