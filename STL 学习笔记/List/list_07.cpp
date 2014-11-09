#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<int> buf;
	list<int> :: iterator it;
	buf.push_back(522);
	buf.push_back(522);
	buf.push_back(522);
	buf.push_back(303);
	buf.push_back(503);
	buf.push_back(522);
	cout << "Before unique : ";
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	// ���� unique() ȥ�� ������ �ظ�Ԫ�أ�������һ�� 
	buf.unique();
	cout << "After unique  : ";
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	return 0;
}

/*

�������Ҫȥ�����е��ظ�Ԫ�أ���������buf.sort()��������
Ȼ����buf.unique().������ȥ�����е��ظ�Ԫ���� 

*/ 
