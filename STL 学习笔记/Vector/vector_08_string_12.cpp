#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// 定义一个存 string 类型的数据的 vector 容器 
	vector<string> buf;
	// 将三个 string 类型的元素放入 
	buf.push_back("Wuhen");
	buf.push_back("Xiaoxiao");
	buf.push_back("HahaHa");
	//分别输出这三个元素 
	cout << buf[0] << endl;
	cout << buf[1] << endl;
	cout << buf[2] << endl;
	//分别输出这三个元素的第三个元素 
	cout << buf[0][2] << endl;
	cout << buf[1][2] << endl;
	cout << buf[2][2] << endl;
	return 0;
}
