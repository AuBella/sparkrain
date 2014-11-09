#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	multimap<string, int>buf;
	buf.insert(pair<string, __int64>("Wuhen", 100119));
	buf.insert(pair<string, __int64>("Chaofan", 100135));
	multimap<string, int>::iterator it;
	// 利用find()查找元素 
	// 若找到会返回迭代器位置 
	it = buf.find("Wuhen");
	if (it != buf.end())
		cout << (*it).first << " " << (*it).second << endl;
	else cout << "Not find it !" << endl; 
	// 若没找到返回end()
	it = buf.find("HahaHa");
	if (it != buf.end())
		cout << (*it).first << " " << (*it).second << endl;
	else cout << "Not find it !" << endl; 
	return 0; 
}
