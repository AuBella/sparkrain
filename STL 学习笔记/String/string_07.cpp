#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string buf = "12345abc";
	string::iterator it = buf.begin();
	//ɾ��������Ԫ�أ���Ҫע�����ɾ��������ʱ�ϴ���ΪҪ������Ԫ���ƶ���λ 
	buf.erase(it+5);
	cout << buf << endl;
	//ɾ����һ����������Ԫ�� 
	buf.erase(it, it+2);
	cout << buf << endl;
	return 0;
}
