#include <iostream>
#include <set>
using namespace std;

int main()
{
	// ����һ��Ԫ������Ϊstring�Ķ��ؼ���buf����ǰΪ�� 
	multiset<string> buf;
	// ����insert()����Ԫ�� 
	buf.insert("Wuhen");
	buf.insert("HahaHa");
	buf.insert("LuckyCoding");
	// ���ؼ��������ظ�Ԫ�� 
	buf.insert("Wuhen");
	// ������ 
	multiset<string>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << endl;
	return 0;
}

