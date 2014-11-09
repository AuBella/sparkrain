#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct Cmp
{
	bool operator () (const int &a, const int &b)
	{
		// 从小到大 >   从大到小 <  
		return a > b;
	}
};

int main()
{
	// 定义优先队列， 元素类型为 int ，显式说明内部结构为 vector 
	priority_queue<int, vector<int>, Cmp> buf;
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	while(buf.empty() == false)
	{
		cout << buf.top() << endl;
		buf.pop();
	}
	return 0; 
}
