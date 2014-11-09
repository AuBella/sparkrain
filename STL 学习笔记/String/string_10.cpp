#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "cat dog cat";
	// 比较 buf 和 字符串 cat 的大小，注意：比较遵循按字典序的大小顺序 
	// buf大 的时候会返回 正数 
	cout << buf.compare("cat") << endl;
	// 相同  的时候会返回 0 
	cout << buf.compare("cat dog cat") << endl;
	// buf小 的时候会返回 -1 
	cout << buf.compare("dog") << endl;
	return 0;
}
