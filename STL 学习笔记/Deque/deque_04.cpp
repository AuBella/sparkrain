#include <deque>
#include <iostream>
using namespace std;
int main()
{
	deque<int> buf;
	for (int i = 1; i <= 5; i++)
		buf.push_back(i);
	// ������ 
	deque<int>::iterator it; 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	// ���� pop_front() ��ͷ��ɾ��Ԫ��
	buf.pop_front();
	cout << "After pop_front(): " << endl;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	// ���� pop_back()  ��β��ɾ��Ԫ��
	buf.pop_back();
	cout << "After pop_back(): " << endl; 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	// ���� erase() ���м�ɾ�� 
	cout << "After erase(): " << endl;
	buf.erase(buf.begin()+1);
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	// ����size()���Ԫ�ظ���
	cout << "Before clear(), the size is " << buf.size() << endl;
	
	// ���� clear() ���deque����
	buf.clear();
	cout << "After clear(), the size is " << buf.size() << endl; 
	return 0;
}
