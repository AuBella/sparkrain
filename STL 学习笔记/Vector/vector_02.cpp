#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf;
	buf.push_back(2);
	buf.push_back(7);
	buf.push_back(9);
	
	reverse(buf.begin(), buf.end());
	vector<int>::iterator it; // 定义一个存储整型容器的迭代器 
	for (it = buf.begin(); it != buf.end(); it++)
	// begin()是第一个元素的位置
	// end()是最后一个元素的  下一个  位置，所以这里是不等于
	// 这里的元素位置和大小  无关  
		cout << *it << " "; //输出该元素的值 
	cout << endl; //换行 
	return 0; 
}
