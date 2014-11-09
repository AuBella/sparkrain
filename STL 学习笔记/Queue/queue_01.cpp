#include <queue>
#include <iostream>
using namespace std;
int main()
{
	// 创建一个存储 int 元素的 queue(队列) 对象，当前为空 
	queue<int> buf; 
	// 利用 push() 入队
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	// 利用 size() 获取元素数量
	cout << "Size  :  " << buf.size() << endl;
	// 利用 empty() 判断队列是否为空 1空 0非空
	cout << "Empty :  " << buf.empty() << endl;
	// 利用 front() 获取队首元素 
	cout << "Front :  " << buf.front() << endl;
	// 利用 back() 获取队尾元素
	cout << "Back  :  " << buf.back() << endl;
	// 利用 pop() 出队
	cout << "=== Pop operation ===" << endl;
	cout << "Now front is " << buf.front() << endl;
	cout << "Now size  is " << buf.size() << endl;
	buf.pop();
	cout << "After pop" << endl;
	cout << "Now front is " << buf.front() << endl;
	cout << "Now size  is " << buf.size() << endl;
	return 0; 
}
