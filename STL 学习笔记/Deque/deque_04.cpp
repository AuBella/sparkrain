#include <deque>
#include <iostream>
using namespace std;
int main()
{
	deque<int> buf;
	for (int i = 1; i <= 5; i++)
		buf.push_back(i);
	// 迭代器 
	deque<int>::iterator it; 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	// 利用 pop_front() 从头部删除元素
	buf.pop_front();
	cout << "After pop_front(): " << endl;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	// 利用 pop_back()  从尾部删除元素
	buf.pop_back();
	cout << "After pop_back(): " << endl; 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	// 利用 erase() 从中间删除 
	cout << "After erase(): " << endl;
	buf.erase(buf.begin()+1);
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	// 利用size()获得元素个数
	cout << "Before clear(), the size is " << buf.size() << endl;
	
	// 利用 clear() 清空deque对象
	buf.clear();
	cout << "After clear(), the size is " << buf.size() << endl; 
	return 0;
}
