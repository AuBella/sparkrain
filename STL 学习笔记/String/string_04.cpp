#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf;
	cout << buf << endl;
	//����һ�ֺͼӷ�����һ���Ĳ�����ԭ��ʵ��һ�� 
	buf.append("Hello, World ");
	cout << buf << endl;

	buf.append("����");
	cout << buf << endl;
	
	return 0;
}
