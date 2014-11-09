#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string buf = "12345";
	int sum = 0;
	string::iterator it;
	// 因为string存储字符是使用ASCII码，且数字、小写字母、大写字母分别在 
	// 各自的区域是连续的，因此有'6' - '0' = 6，利用这个可以很方便的得到 
	// 各位数字的和 
	for (it = buf.begin(); it != buf.end(); it++)
		sum += (*it - '0');
	cout << sum << endl;
	return 0;
}
