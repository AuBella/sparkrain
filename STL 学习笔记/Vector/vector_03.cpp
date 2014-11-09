#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf(3);
	buf[0] = 2;
	buf[1] = 7;
	buf[2] = 9;
	//此时输出为 2 7 9
	
	buf.insert(buf.begin(), 8);
	// 8 2 7 9
	buf.insert(buf.begin()+2, 1);
	// 8 2 1 7 9 书上说的第2个元素是指最开始的第2个元素7
	//           而不是进行一次插入之后的第2个元素2 
	buf.insert(buf.end(), 3);
	// 8 2 1 7 9 3
	vector<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl; 
}
