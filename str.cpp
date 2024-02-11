#define _CRT_SECURE_NO_WARNINGS
//第一行用于在vs2022中不报错，其他编译器和省略
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s1[80], s2[80];
	strcpy(s1, "C++");
	strcpy(s2, "is power programming");
	cout << "lenths: " << strlen(s1) << " " << strlen(s2) << endl;
	if (!strcmp(s1, s2)) cout << "the strings are equal" << endl;
	else cout << "not equal" << endl;
	strcat(s1, s2);
	cout << s1 << endl;
	strcpy(s2, s1);
	cout << s2 << endl;
	cout << s1 << " and " << s2 << endl;
	if (!strcmp(s1, s2)) cout << "s1 and s2 are now the same" << endl;
	return 0;
}
