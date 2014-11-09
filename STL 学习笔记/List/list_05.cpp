#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<int> buf;
	list<int>::iterator it;
	buf.push_back(522);
	buf.push_back(303);
	buf.push_back(503);
	// 利用 find() 查找元素
	// 注意list对象没有find()成员函数
	// 这里用到的是头文件 algorithm 中的 find() 函数  
	// 找到会返回迭代器位置 
	it = find(buf.begin(), buf.end(), 303);
	if (it != buf.end()) 
		cout << *it << endl; 
	else 
		cout << "Not find it !" << endl;
	// 找不到返回 end() 
	it = find(buf.begin(), buf.end(), 213);
	if (it != buf.end())
		cout << *it << endl;
	else 
		cout << "Not find it !" << endl;
	return 0;
}
