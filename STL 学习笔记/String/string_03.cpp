#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "Hello", hhh = "����";
	cout << buf << endl;
	// �ӷ���������buf���ַ�����ӵĽ�����浽һ���µĿռ䣬Ȼ���Ƶ�buf��
	// �ӷ���Ѻ�����ַ������ӵ�buf֮�󣬾���������� 
	buf += "����";
	cout << buf << endl;
	buf += hhh;
	cout << buf << endl;
	return 0;
}
