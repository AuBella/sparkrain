#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	string buf = "0123456789";
	//����һ��string�ĵ����� it 
	string::iterator it;
	//��itָ��buf�ĵ�һ��Ԫ�أ��˴�Ϊ'0' 
	it = buf.begin();
	//�ڵڶ���Ԫ�� ֮ǰ ����һ��'Y' 
	buf.insert(it + 1, 'Y');
	cout << buf << endl;
	return 0;
}
