#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf;
	cout << buf << endl;
	//另外一种和加法操作一样的操作，原理、实现一样 
	buf.append("Hello, World ");
	cout << buf << endl;

	buf.append("蛤蛤蛤");
	cout << buf << endl;
	
	return 0;
}
