#include <queue>
#include <iostream>
using namespace std;
int main()
{
	// ����һ���洢 int Ԫ�ص� queue(����) ���󣬵�ǰΪ�� 
	queue<int> buf; 
	// ���� push() ���
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	// ���� size() ��ȡԪ������
	cout << "Size  :  " << buf.size() << endl;
	// ���� empty() �ж϶����Ƿ�Ϊ�� 1�� 0�ǿ�
	cout << "Empty :  " << buf.empty() << endl;
	// ���� front() ��ȡ����Ԫ�� 
	cout << "Front :  " << buf.front() << endl;
	// ���� back() ��ȡ��βԪ��
	cout << "Back  :  " << buf.back() << endl;
	// ���� pop() ����
	cout << "=== Pop operation ===" << endl;
	cout << "Now front is " << buf.front() << endl;
	cout << "Now size  is " << buf.size() << endl;
	buf.pop();
	cout << "After pop" << endl;
	cout << "Now front is " << buf.front() << endl;
	cout << "Now size  is " << buf.size() << endl;
	return 0; 
}
