#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<int> buf;
	list<int> :: iterator it;	
	buf.push_back(522);
	buf.push_back(303);
	buf.push_back(503);
	buf.push_back(114);
	cout << "Before sort : " ;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	// ���� list �ĳ�Ա���� sort() ���� ���� ���� 
	cout << "After sort  : " ;
	buf.sort();
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	return 0;
}
