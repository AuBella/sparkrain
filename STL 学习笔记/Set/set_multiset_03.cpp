#include <set>
#include <iostream>
using namespace std;

int main()
{
	multiset<string> buf;
	buf.insert("Wuhen");
	buf.insert("HahaHa");
	buf.insert("LuckyCoding");
	multiset<string>::iterator it;
	// 利用 find() 找到第一次出现的迭代器位置，没有找到返回end() 
	it = buf.find("Wuhen");
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it!" << endl; 
	
	it = buf.find("Aimeizhi Li");
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it!" << endl;  
	return 0;
}
