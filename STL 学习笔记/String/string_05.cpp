#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	string buf = "0123456789";
	//定义一个string的迭代器 it 
	string::iterator it;
	//将it指向buf的第一个元素，此处为'0' 
	it = buf.begin();
	//在第二个元素 之前 插入一个'Y' 
	buf.insert(it + 1, 'Y');
	cout << buf << endl;
	return 0;
}
