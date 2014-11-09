#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	map<int, string> buf;
	buf[522]="Wuhen";
	buf[115]="Dogdog";
	buf[303]="Chaofan";
	map<int, string>::iterator it;
	// 利用find()查找元素，找到返回迭代器位置，否则返回end()
	it = buf.find(115);
	if (it != buf.end())
		cout << (*it).first << " " << (*it).second << endl;
	else
		cout << "Not find it !" << endl;
		
	it  = buf.find(503);
	if (it != buf.end())
		cout << (*it).first << " " << (*it).second << endl;
	else
		cout << "Not find it !" << endl;
	return 0;
}
