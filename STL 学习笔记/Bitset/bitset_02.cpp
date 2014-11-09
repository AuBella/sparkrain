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
	// bitset �±��Ƿ��ģ�0�����ұߣ�����λ�� 
	// ��������������ķ���������Ԫ��ֵ 
	buf[0] = 1; buf[3] = 1; buf[5] = 1;
	print(); 
	// ����set()һ���԰�Ԫ������Ϊ 1
	buf.set(); 	print();
	// ����rset() һ���԰�Ԫ������Ϊ 0 
	buf.reset(); print(); 
	// ����set(pos) �� pos λ�õ�Ԫ������Ϊ 1��pos��0��ʼ 
	buf.set(3); print();
	// ���� reset(pos) �� pos λ�õ�Ԫ������Ϊ 0��pos��0��ʼ
	buf.reset(3); print();
	// ����set(pos, num) �� pos λ������Ϊ num��pos��0��ʼ��num = 0 or 1
	buf.set(); buf.set(1, 0); buf.set(9, 0); print();
	// ֱ��������������ȫ��Ԫ��
	cout << buf << endl; 
	// ���� flip() ��λȡ��
	buf.flip(); cout << buf << endl; 
	return 0;
}
