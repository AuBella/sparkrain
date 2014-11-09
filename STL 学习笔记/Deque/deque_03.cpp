#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int> buf;
	for (int i = 1; i <= 5; i++)
		buf.push_back(i);
	// ǰ�������
	deque<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	// ���������
	deque<int>::reverse_iterator rit;
	for (rit = buf.rbegin(); rit != buf.rend(); rit++)
		cout << *rit << " " ;
	cout << endl; 
	return 0;
}
