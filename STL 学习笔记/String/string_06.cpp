#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "12345abc";
	//输出buf中单一一个元素，用法和数组实现的一样 
	cout << buf[2] << " " << buf[5] << endl;
	//此例子说明了在string中存储字符的方式和char一样，均为ASCII码 
	cout << buf[5] - 'a' << endl;
	return 0;
}
