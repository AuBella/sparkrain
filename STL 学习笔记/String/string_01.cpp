#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf;
	//���buf�ĳ��� 
	cout << buf.length() <<endl;
	cout << buf << endl;;
	buf += "Hello, World!";
	//ͬlength 
	cout << buf.size() << endl;
	cout << buf << endl;
	return 0;
}
