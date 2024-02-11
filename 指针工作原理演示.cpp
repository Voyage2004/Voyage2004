#define _CRT_SECURE_NO_WARNINGS  //第一行在vs2022编译器中用于防止报错，在其他编译器中可以忽略
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int* p;
	int x = 37;
	cout << "Line 1 : x = "<<x << endl;
	p = &x;
	cout << "Line 3 : *p = " << *p <<" ,x"<< endl;
	*p = 58;
	cout << "Line 5 : *p = " << *p << ",x" << endl;
	cout << "Line 6 : adress of p = " << &p << endl;
	cout << "Line 7 : value of p = " << p << endl;
	cout << "Line 8 : value of the memory location "
		<< " pointed to by *p = " << *p << endl;
	cout << "Line 9 : adress of x =" << &x << endl;
	cout << "Line 10 : value of x = " << x << endl;
	return 0;
}
