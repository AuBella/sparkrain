#include <set>
#include <iostream>
using namespace std;

int main()
{
	//����һ���յ�Ԫ������Ϊint�ļ��϶���buf 
	set<int> buf;
	// ����insert()��������Ԫ��
	buf.insert(12);
	buf.insert(99);
	buf.insert(3);
	// �ظ������Ԫ�ػᱻ�Զ����� 
	buf.insert(12); 
	// ǰ�� ������ 
	set<int>::iterator it;
	// ǰ����������������������set�Ķ��壬ǰ������Ľ���Ǵ�С���� 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	// ���� ������ 
	set<int>::reverse_iterator rit;
	// �����������ǰ��պ��෴���ǴӴ�С 
	for (rit = buf.rbegin(); rit != buf.rend(); rit++)
		cout << *rit << " " ;
	cout << endl;  
	return 0;
}
