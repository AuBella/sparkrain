#include <set>
#include <iostream>

using namespace std;

// �Զ���ȽϺ��� Cmp,����"()"���� 
struct Cmp
{
	bool operator ()(const int &a, const int &b)
	{
		return a > b;
	}
};

int main()
{
	//����һ��Ԫ������Ϊint���ȽϺ���ΪCmp�ļ���buf 
	set<int, Cmp> buf;
	buf.insert(22);
	buf.insert(5);
	buf.insert(94);
	buf.insert(114);
	//������ 
	set<int, Cmp>::iterator it;
	// ��ΪCmp�����ıȽϹ����Ĭ�Ϲ����෴������ǰ��������������ǴӴ�С 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	return 0;
}

// �ṹ��Ҫ���رȽϺ����Ļ���ֱ���ڽṹ���н��ж� "<" �������ؾ��� 
