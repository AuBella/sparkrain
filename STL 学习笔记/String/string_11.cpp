#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	string buf = "12345abc";
	cout << buf << endl;
	// ·´×ª²Ù×÷ 
	reverse(buf.begin(), buf.end());
	cout << buf << endl;
	return 0;
}
