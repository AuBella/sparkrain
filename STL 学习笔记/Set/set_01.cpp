#include <set>
#include <iostream>
using namespace std;

int main()
{
	//定义一个空的元素类型为int的集合对象buf 
	set<int> buf;
	// 利用insert()函数插入元素
	buf.insert(12);
	buf.insert(99);
	buf.insert(3);
	// 重复插入的元素会被自动忽略 
	buf.insert(12); 
	// 前向 迭代器 
	set<int>::iterator it;
	// 前向迭代器是中序遍历，按照set的定义，前向迭代的结果是从小到大 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	// 反向 迭代器 
	set<int>::reverse_iterator rit;
	// 反向迭代器和前向刚好相反，是从大到小 
	for (rit = buf.rbegin(); rit != buf.rend(); rit++)
		cout << *rit << " " ;
	cout << endl;  
	return 0;
}
