#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf;
	//输出buf的长度 
	cout << buf.length() <<endl;
	cout << buf << endl;;
	buf += "Hello, World!";
	//同length 
	cout << buf.size() << endl;
	cout << buf << endl;
	return 0;
}
