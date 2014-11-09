#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> buf(10);
	for (int i = 0; i < 10; i++)
		buf[i] = i;
	vector<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	//反向迭代器 
	vector<int>::reverse_iterator orz;
	//rbegin和rend 都是针对反向迭代器用的 
	//begin 和 end 都是针对正向迭代器用的 
	for (orz = buf.rbegin(); orz != buf.rend(); orz++)
		cout << *orz << " ";
	cout << endl;
	//这样是直接把容器内的元素反转 
	reverse(buf.begin(), buf.end());
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}
