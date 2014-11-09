#include <deque>
#include <iostream>
using namespace std;

int main()
{
	// 创建一个 deque 对象
	// 创建空deque
	deque<int> a;
	// 创建10个元素的 deque
	deque<int> b(10);
	// 创建10个元素，元素初值为 2 的 deque
	deque<int> c(10, 2);
	return 0;
}
