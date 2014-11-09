#include <bitset>
#include <cstdio> 
#include <iostream>
using namespace std;
bitset<10> buf;
void print()
{
	for (int i = buf.size() - 1; i >= 0; i--)
		cout << buf[i] << "";
	cout << endl;
	return ;
}
int main()
{
	// bitset 下标是反的，0是最右边（即低位） 
	// 可以用类似数组的方法来设置元素值 
	buf[0] = 1; buf[3] = 1; buf[5] = 1;
	print(); 
	// 利用set()一次性把元素设置为 1
	buf.set(); 	print();
	// 利用rset() 一次性把元素设置为 0 
	buf.reset(); print(); 
	// 利用set(pos) 把 pos 位置的元素设置为 1，pos从0开始 
	buf.set(3); print();
	// 利用 reset(pos) 把 pos 位置的元素设置为 0，pos从0开始
	buf.reset(3); print();
	// 利用set(pos, num) 把 pos 位置设置为 num，pos从0开始，num = 0 or 1
	buf.set(); buf.set(1, 0); buf.set(9, 0); print();
	// 直接利用输出流输出全部元素
	cout << buf << endl; 
	// 利用 flip() 按位取反
	buf.flip(); cout << buf << endl; 
	return 0;
}
