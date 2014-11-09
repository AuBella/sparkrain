#include <iostream>
#include <queue>
using namespace std;

int main()
{
	// 创建一个存储 int 元素的 priority_queue(优先队列) 对象，当前为空 
	// 优先队列优先级高的元素先出队，可以重载 < 自定义优先级 
	priority_queue<int> buf;
	// 利用 push() 入队 
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	// 利用 size() 获得元素个数 
	cout << "Size :  " << buf.size() << endl;
	// 利用 top() 获取队首元素 
	cout << "Top  :  " << buf.top() << endl;
	// 利用 pop() 出队
	cout << "==== Pop operation ====" << endl;
	cout << "Now top  is " << buf.top() << endl;
	cout << "Now size is " << buf.size() << endl;
	cout << "After pop" << endl;
	buf.pop();
	cout << "Now top  is " << buf.top() << endl;
	cout << "Now size is " << buf.size() << endl;
	return 0;
}
