#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf;  //����һ���洢���͵���������ʱ�ǿյ� 
	buf.push_back(2); //��β������һ��Ԫ�� 
	buf.push_back(7);
	buf.push_back(9);
	return 0; 
}

/* �ڶ��ְ汾

int main()
{
	vector<int> buf[3]; //����һ���洢���͵���������СΪ3 
	buf[0] = 2; // �޸ĵ�һ��Ԫ�� 
	buf[1] = 7;
	buf[2] = 9;
	return 0;
}
