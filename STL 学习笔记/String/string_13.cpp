#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string buf = "12345";
	int sum = 0;
	string::iterator it;
	// ��Ϊstring�洢�ַ���ʹ��ASCII�룬�����֡�Сд��ĸ����д��ĸ�ֱ��� 
	// ���Ե������������ģ������'6' - '0' = 6������������Ժܷ���ĵõ� 
	// ��λ���ֵĺ� 
	for (it = buf.begin(); it != buf.end(); it++)
		sum += (*it - '0');
	cout << sum << endl;
	return 0;
}
