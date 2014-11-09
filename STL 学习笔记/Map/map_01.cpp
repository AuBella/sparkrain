#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	// 定义一个键值为 string 映照数据为 int 的 map 对象，当前为空 
	map<string, string> buf;
	// map的插入方式和数组类似 
	buf["Wuhen"]="12408100119";
	buf["Darkdream"]="12408100316";
	buf["LaiTang"]="12408100135";
	// 前向迭代器 
	map<string, string>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}
