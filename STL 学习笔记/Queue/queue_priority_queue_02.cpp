#include <iostream>
#include <queue>
using namespace std;

int main()
{
	// ����һ���洢 int Ԫ�ص� priority_queue(���ȶ���) ���󣬵�ǰΪ�� 
	// ���ȶ������ȼ��ߵ�Ԫ���ȳ��ӣ��������� < �Զ������ȼ� 
	priority_queue<int> buf;
	// ���� push() ��� 
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	// ���� size() ���Ԫ�ظ��� 
	cout << "Size :  " << buf.size() << endl;
	// ���� top() ��ȡ����Ԫ�� 
	cout << "Top  :  " << buf.top() << endl;
	// ���� pop() ����
	cout << "==== Pop operation ====" << endl;
	cout << "Now top  is " << buf.top() << endl;
	cout << "Now size is " << buf.size() << endl;
	cout << "After pop" << endl;
	buf.pop();
	cout << "Now top  is " << buf.top() << endl;
	cout << "Now size is " << buf.size() << endl;
	return 0;
}
