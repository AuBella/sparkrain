#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "12345abc";
	cout << buf << endl;
	// 替换操作，第一个为起始位置（和下标相同），第二个是需要替换的长度，第三个
	// 是用来替换的字符串（长度不一定要和被替换的字符串相同） 
	buf.replace(2, 2, "蛤蛤蛤");
	cout << buf << endl;
	return 0;
}
