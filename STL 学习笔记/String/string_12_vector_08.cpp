#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// ����һ���� string ���͵����ݵ� vector ���� 
	vector<string> buf;
	// ������ string ���͵�Ԫ�ط��� 
	buf.push_back("Wuhen");
	buf.push_back("Xiaoxiao");
	buf.push_back("HahaHa");
	//�ֱ����������Ԫ�� 
	cout << buf[0] << endl;
	cout << buf[1] << endl;
	cout << buf[2] << endl;
	//�ֱ����������Ԫ�صĵ�����Ԫ�� 
	cout << buf[0][2] << endl;
	cout << buf[1][2] << endl;
	cout << buf[2][2] << endl;
	return 0;
}
