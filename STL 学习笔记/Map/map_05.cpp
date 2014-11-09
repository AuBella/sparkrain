#include <map>
#include <string>
#include <iostream>
using namespace std;
// 自定义比较函数 
struct Cmp
{
	// 重载 "()"  
	bool operator () (const int &a, const int &b)
	{
		return a > b;
	}
};
int main()
{
	map<int, string, Cmp>buf;
	buf[522] = "Wuhen";
	buf[303] = "Chaofan";
	buf[115] = "Dogdog";
	// 默认情况下是从小到大，我这里重载了符号，变成了从大到小 
	map<int, string, Cmp>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}

/*
	如果是结构体作为键值，直接在结构体中重载"<"即可
	和 set 一样的做法 
*/ 
