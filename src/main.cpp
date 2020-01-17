#include <iostream>
#include "class1.h"
#include "class3.h"

using namespace std;

int main()
{
	class1 cl1;
	cl1.setcount(10);
	class3 cls;
	int a =cls.add1(cl1.getcount(),5);
	cout<<"a = "<<a<<endl;
	int b =cls.desc1(8,3);
	int aaaarr[10]={0};
	aaaarr[11]=10;
	cout<<"arrrr16 = "<<aaaarr[16]<<endl;
	int* newa = new int;
	delete newa;
	newa=0;
	delete newa;
	
	cout<<"b = "<<b<<endl;
	getchar();
	return 0;
}
