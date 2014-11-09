#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "Hello", hhh = "蛤蛤蛤";
	cout << buf << endl;
	// 加法操作：将buf和字符串相加的结果保存到一个新的空间，然后复制到buf中
	// 加法会把后面的字符串连接到buf之后，具体结果看输出 
	buf += "蛤蛤蛤";
	cout << buf << endl;
	buf += hhh;
	cout << buf << endl;
	return 0;
}
