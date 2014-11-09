#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<int> buf;
	list<int> :: iterator it;
	buf.push_back(522);
	buf.push_back(522);
	buf.push_back(522);
	buf.push_back(303);
	buf.push_back(503);
	buf.push_back(522);
	cout << "Before unique : ";
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	// 利用 unique() 去除 连续的 重复元素，仅保留一个 
	buf.unique();
	cout << "After unique  : ";
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	return 0;
}

/*

　　如果要去除所有的重复元素，可以先用buf.sort()进行排序，
然后再buf.unique().这样就去掉所有的重复元素了 

*/ 
