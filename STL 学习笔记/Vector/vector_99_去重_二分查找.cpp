#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> buf(5, 2);
	for (int i = 0; i < 5; i++)
		buf.push_back(rand());
	vector<int>::iterator orz;
	cout << buf.size() << endl;
	for (orz = buf.begin(); orz != buf.end(); orz++)
		cout << *orz << " ";
	cout << endl;
	
	// 去重 
	// 去重之前一定要先排序，再去重
	// 去重原理：找到重复的数据后移动到最后，然后返回第一个重复的元素的地址
	// 然后利用erase进行擦除 
	sort(buf.begin(), buf.end());
	vector<int>::iterator it = unique(buf.begin(), buf.end());
	buf.erase(it, buf.end());
	cout << buf.size() << endl;
	
	//二分查找函数
	cout << binary_search(buf.begin(), buf.end(), 2) << endl;
	
	return 0;
}
