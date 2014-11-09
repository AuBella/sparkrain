#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int> buf;
	// 在尾部插入
	buf.push_back(522);
	buf.push_back(303);
	buf.push_back(503);
	// 以数组形式输出
	cout << buf[0] << " " << buf[1] << " " << buf[2] << endl;
	
	// 在头部插入，会覆盖原有值，不增加新元素 
	buf.push_front(115);
	cout << buf[0] << " " << buf[1] << " " << buf[2] << endl;
	
	// 在中间插入，会覆盖原有值，不增加新元素
	buf.insert(buf.begin() + 1, 114);
	cout << buf[0] << " " << buf[1] << " " << buf[2] << endl; 
	
	return 0; 
}
