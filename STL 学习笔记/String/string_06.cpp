#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "12345abc";
	//���buf�е�һһ��Ԫ�أ��÷�������ʵ�ֵ�һ�� 
	cout << buf[2] << " " << buf[5] << endl;
	//������˵������string�д洢�ַ��ķ�ʽ��charһ������ΪASCII�� 
	cout << buf[5] - 'a' << endl;
	return 0;
}
