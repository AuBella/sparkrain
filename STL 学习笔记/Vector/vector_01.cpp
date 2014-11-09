#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf;  //定义一个存储整型的容器，此时是空的 
	buf.push_back(2); //在尾部插入一个元素 
	buf.push_back(7);
	buf.push_back(9);
	return 0; 
}

/* 第二种版本

int main()
{
	vector<int> buf[3]; //定义一个存储整型的容器，大小为3 
	buf[0] = 2; // 修改第一个元素 
	buf[1] = 7;
	buf[2] = 9;
	return 0;
}
