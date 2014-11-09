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
	// 利用push_back()从尾部插入
	buf.push_back(522);
	cout << "After push_back() : ";
	Print();
	buf.push_back(303);
	cout << "After push_back() : ";
	Print();
	// 利用push_front()从头部插入
	buf.push_front(503);
	cout << "After push_front(): ";
	Print();
	// 利用 insert() 从中间插入 
	it = buf.begin();
	// list 的迭代器只能执行 ++ 和 -- 操作，不能 +3 这种 
	it++;
	buf.insert(it, 115);
	cout << "After insert()    : ";
	Print();
	return 0;  
}
