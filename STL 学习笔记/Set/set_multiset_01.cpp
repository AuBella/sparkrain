#include <iostream>
#include <set>
using namespace std;

int main()
{
	// 定义一个元素类型为string的多重集合buf，当前为空 
	multiset<string> buf;
	// 利用insert()插入元素 
	buf.insert("Wuhen");
	buf.insert("HahaHa");
	buf.insert("LuckyCoding");
	// 多重集合允许重复元素 
	buf.insert("Wuhen");
	// 迭代器 
	multiset<string>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << endl;
	return 0;
}

