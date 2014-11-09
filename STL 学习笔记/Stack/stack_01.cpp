#include <stack>
#include <iostream>
using namespace std;

int main()
{
	// ����һ���洢 int ���ݵ� stack(ջ) ����ĿǰΪ�� 
	stack<int> buf;
	// ����push()��ջ
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	// ���� top()��ȡջ��Ԫ��
	cout << "Top   : " << buf.top() << endl;
	// ���� size()���Ԫ������
	cout << "Size  : " << buf.size() << endl;
	// ���� empty() �ж�ջ�Ƿ�Ϊ�գ�1�� 0�ǿ� 
	cout << "Empty : " << buf.empty() << endl;
	// ���� pop()��ջ 
	buf.pop();
	cout << "Top   : " << buf.top() << endl;
	cout << "Size  : " << buf.size() << endl;
	return 0;
}
