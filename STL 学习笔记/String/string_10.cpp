#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "cat dog cat";
	// �Ƚ� buf �� �ַ��� cat �Ĵ�С��ע�⣺�Ƚ���ѭ���ֵ���Ĵ�С˳�� 
	// buf�� ��ʱ��᷵�� ���� 
	cout << buf.compare("cat") << endl;
	// ��ͬ  ��ʱ��᷵�� 0 
	cout << buf.compare("cat dog cat") << endl;
	// bufС ��ʱ��᷵�� -1 
	cout << buf.compare("dog") << endl;
	return 0;
}
