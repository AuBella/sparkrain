#include <stack>
#include <iostream>
using namespace std;

int main()
{
	// 定义一个存储 int 数据的 stack(栈) 对象，目前为空 
	stack<int> buf;
	// 利用push()入栈
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	// 利用 top()读取栈顶元素
	cout << "Top   : " << buf.top() << endl;
	// 利用 size()获得元素数量
	cout << "Size  : " << buf.size() << endl;
	// 利用 empty() 判断栈是否为空，1空 0非空 
	cout << "Empty : " << buf.empty() << endl;
	// 利用 pop()出栈 
	buf.pop();
	cout << "Top   : " << buf.top() << endl;
	cout << "Size  : " << buf.size() << endl;
	return 0;
}
