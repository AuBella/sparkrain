#include <set>
#include <iostream>

using namespace std;

int main()
{
	set<int> buf;
	buf.insert(22);
	buf.insert(5);
	buf.insert(94);
	buf.insert(72);
	set<int>::iterator it;
	// 利用 find() 查找元素，找到返回位置，没有找到返回 end() 
	it = buf.find(94);
	// 找到输出该数  
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it" << endl; 
	it = buf.find(114);
	//没找到输出 Not find it
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it" << endl; 
	return 0;
}
