#include <set>
#include <iostream>

using namespace std;

int main()
{
	set<int> buf;
	buf.insert(22);
	buf.insert(5);
	buf.insert(94);
	buf.insert(72);
	set<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	// 利用erase() 删除元素 
	buf.erase(72);
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	// 利用size()得到集合大小
	cout << "size = " << buf.size() << endl; 
	// 利用clean() 清空集合
	buf.clear();
	cout << "size = " << buf.size() << endl;
	return 0;
}
