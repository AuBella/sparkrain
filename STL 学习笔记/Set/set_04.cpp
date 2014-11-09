#include <set>
#include <iostream>

using namespace std;

// 自定义比较函数 Cmp,重载"()"操作 
struct Cmp
{
	bool operator ()(const int &a, const int &b)
	{
		return a > b;
	}
};

int main()
{
	//定义一个元素类型为int，比较函数为Cmp的集合buf 
	set<int, Cmp> buf;
	buf.insert(22);
	buf.insert(5);
	buf.insert(94);
	buf.insert(114);
	//迭代器 
	set<int, Cmp>::iterator it;
	// 因为Cmp函数的比较规则和默认规则相反，所以前向迭代器在这里是从大到小 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	return 0;
}

// 结构体要重载比较函数的话，直接在结构体中进行对 "<" 进行重载就是 
