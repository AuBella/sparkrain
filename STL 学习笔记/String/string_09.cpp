#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string buf;
	buf = "Wuhen Hahaha Xiaoxiao";
	//查找第一次 字符 o 出现的位置 
	// 16 和 20都是o ，但是16是第一次出现的位置 
	cout << buf.find('o') << endl; 
	// 查找第一次出现 字符串 o 的位置 
	cout << buf.find("o") << endl;
	// 查找第一次出现 字符串 Haha 的位置
	// 这两个例子是为了说明find函数对大小写是敏感的 
	cout << buf.find("Haha") << endl;
	cout << buf.find("haha") << endl;
	// 当找不到的时候，会返回 4294967295 （固定的） 
	cout << buf.find("Wobuzhidao") << endl;
	return 0;
}
