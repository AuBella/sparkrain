#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> buf;
	//输出是否为空，1空0非空 
	cout << buf.empty() << endl;
	//添加一个元素 
	buf.push_back(rand());
	//size是大小 
	cout << buf.empty() << endl << buf.size() << endl;
	
	buf.push_back(2);
	buf.push_back(2);
	buf.push_back(2);
	buf.push_back(2);
	buf.push_back(2);
	cout << buf.size() << endl;
	
	return 0;
}
