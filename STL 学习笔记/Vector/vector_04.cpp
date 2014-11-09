#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf(10);
	for (int i = 0; i < 10; i++)
		buf[i] = i;
	//删除第三个元素	
	buf.erase(buf.begin()+2);
	vector<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	//删除第二到第六的元素 
	buf.erase(buf.begin()+1, buf.begin()+5);
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	//清空 
	buf.clear();
	//输出大小 
	cout << buf.size() << endl;
	return 0; 
}
