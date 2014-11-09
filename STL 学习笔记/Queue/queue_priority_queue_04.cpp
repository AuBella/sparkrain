#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct Cmp
{
	bool operator () (const int &a, const int &b)
	{
		// ��С���� >   �Ӵ�С <  
		return a > b;
	}
};

int main()
{
	// �������ȶ��У� Ԫ������Ϊ int ����ʽ˵���ڲ��ṹΪ vector 
	priority_queue<int, vector<int>, Cmp> buf;
	buf.push(19);
	buf.push(35);
	buf.push(18);
	buf.push(114);
	while(buf.empty() == false)
	{
		cout << buf.top() << endl;
		buf.pop();
	}
	return 0; 
}
