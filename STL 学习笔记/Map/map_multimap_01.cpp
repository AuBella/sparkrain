#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	// 定义一个键值为string，映射数据为double的multimap buf,目前为空 
	multimap<string, double> buf;
	// 利用insert()插入数据
	// pair是一种模板类型，其中包含两个数据值，两个数据的类型可以不同 
	buf.insert(pair<string, double>("Wuhen", 94.522));
	buf.insert(pair<string, double>("Chaofan", 94.303));
	// 插入重复值 Wuhen
	buf.insert(pair<string, double>("Wuhen", 1994.0522));
	// 迭代器 
	multimap<string, double>::iterator it; 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}
