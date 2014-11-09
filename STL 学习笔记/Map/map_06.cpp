// 给一个数字，求每一位的和 
// 利用 string 、 ASCII码 和 map 的映射可以快速求出结果 
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	// 建立字符 '0'~'9' 到数字 0~9 的映射 
	map<char, int>buf;
	for (int i = 0; i < 10; i++)
		buf[i+'0'] = i;
	// 利用string将数字变字符串 
	string num;
	cout << "Please Enter A number : " ;
	cin >> num;
	// 开始求和 
	int sum = 0;
	string::iterator it;
	for (it = num.begin(); it != num.end(); it++)
		sum += buf[*it];
	cout << "The sum is : " << sum << endl;
}
