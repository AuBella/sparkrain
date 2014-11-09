#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string buf = "12345abc";
	string::iterator it = buf.begin();
	//删除第六个元素，需要注意的是删除操作耗时较大，因为要将其后的元素移动补位 
	buf.erase(it+5);
	cout << buf << endl;
	//删除第一个到第三个元素 
	buf.erase(it, it+2);
	cout << buf << endl;
	return 0;
}
