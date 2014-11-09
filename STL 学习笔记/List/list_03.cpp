#include <iostream>
#include <list>
using namespace std;

int main()
{
	list<int> buf;
	for (int i = 1; i <= 5; i++)
		buf.push_back(i);
	// 前向迭代器  
	list<int>::iterator it;
	// 反向迭代器  
	list<int>::reverse_iterator rit;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	for (rit = buf.rbegin(); rit != buf.rend(); rit++)
		cout << *rit << " " ;
	cout << endl;
	return 0;
}
