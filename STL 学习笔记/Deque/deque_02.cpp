#include <deque>
#include <iostream>
using namespace std;

int main()
{
	deque<int> buf;
	// ��β������
	buf.push_back(522);
	buf.push_back(303);
	buf.push_back(503);
	// ��������ʽ���
	cout << buf[0] << " " << buf[1] << " " << buf[2] << endl;
	
	// ��ͷ�����룬�Ḳ��ԭ��ֵ����������Ԫ�� 
	buf.push_front(115);
	cout << buf[0] << " " << buf[1] << " " << buf[2] << endl;
	
	// ���м���룬�Ḳ��ԭ��ֵ����������Ԫ��
	buf.insert(buf.begin() + 1, 114);
	cout << buf[0] << " " << buf[1] << " " << buf[2] << endl; 
	
	return 0; 
}
