#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "12345abc";
	cout << buf << endl;
	// �滻��������һ��Ϊ��ʼλ�ã����±���ͬ�����ڶ�������Ҫ�滻�ĳ��ȣ�������
	// �������滻���ַ��������Ȳ�һ��Ҫ�ͱ��滻���ַ�����ͬ�� 
	buf.replace(2, 2, "����");
	cout << buf << endl;
	return 0;
}
