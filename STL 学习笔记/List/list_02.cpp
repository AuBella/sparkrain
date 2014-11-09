#include <iostream>
#include <list>
using namespace std;

list<int> buf;
list<int>::iterator it;
	
void Print()
{
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	return;
} 
int main()
{
	// ����push_back()��β������
	buf.push_back(522);
	cout << "After push_back() : ";
	Print();
	buf.push_back(303);
	cout << "After push_back() : ";
	Print();
	// ����push_front()��ͷ������
	buf.push_front(503);
	cout << "After push_front(): ";
	Print();
	// ���� insert() ���м���� 
	it = buf.begin();
	// list �ĵ�����ֻ��ִ�� ++ �� -- ���������� +3 ���� 
	it++;
	buf.insert(it, 115);
	cout << "After insert()    : ";
	Print();
	return 0;  
}
