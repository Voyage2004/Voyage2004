#define _CRT_SECURE_NO_WARNINGS  //第一行在vs2022编译器中用于防止报错，在其他编译器中可以忽略
#include <iostream>
#include <cstring>
using namespace std;
int Is_str_equal_1(char s1[], char s2[])//相同返回1，不同返回0
{
	int flag = 0;//默认设置为0
	if (!strcmp(s1, s2)) flag = 1;
	else flag = 0;
	return flag;
}
int Is_str_equal_2(char s1[], char s2[])
{
	int flag = 0,len;
	len = strlen(s1);
	for (int i = 0; i < len; i++)
	{
		if (s1[i] == s2[i]) flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}

	return flag;
}
int main()//main函数内为使用示例（
{
	char s1[100] = "2001231", s2[100],pw[100];//s1为需要被对比的字符串，可以理解为正确密码，s2为需要输入的字符串，可理解为等待输入的密码
	cin >> pw;
	strcpy(s2, pw);
	cout <<"way 1 :"<<Is_str_equal_1(s1, s2) << endl;
	cout << "way 2 :" << Is_str_equal_2(s1, s2) << endl;
	return 0;
