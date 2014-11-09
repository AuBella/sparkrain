#include <list>
#include <iostream>
using namespace std;
list<int> buf;
list<int>::iterator it;
void Print()
{
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl << endl;
}
int main()
{
	for (int i = 1; i <= 10; i++)
		buf.push_back(i);
	buf.push_front(5);
	cout << "Befor remove     : " ;
	Print();
	// 利用remove(x)删除所有等于x的元素 
	buf.remove(5);
	cout << "After remove 5   : " ;
	Print();
	buf.remove(2);
	cout << "After remove 2   : " ;
	Print();
	// 利用pop_front() 删除第一个元素
	buf.pop_front();
	cout << "After pop_front  : " ;
	Print(); 
	// 利用pop_back() 删除最后一个元素
	buf.pop_back();
	cout << "After pop_back   : " ;
	Print();
	// 利用erase() 删除某一个迭代器位置的元素
	it = buf.begin();
	for (int i = 1; i < 3; i++) // 此处为删除第三个元素 
		it++;
	buf.erase(it);
	cout << "After erase      : " ;
	Print();
	// 利用 size() 获取当前元素个数
	cout << "==== Before clear ====" << endl;
	cout << "Now the size is  : " << buf.size() << endl;
	// 利用 clear() 清空list对象
	buf.clear();
	cout << "==== After  clear ====" << endl;
	cout << "Now the size is  : " << buf.size() << endl; 
	return 0;
}
