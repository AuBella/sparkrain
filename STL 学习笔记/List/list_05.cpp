#include <algorithm>
#include <list>
#include <iostream>
using namespace std;

int main()
{
	list<int> buf;
	list<int>::iterator it;
	buf.push_back(522);
	buf.push_back(303);
	buf.push_back(503);
	// ���� find() ����Ԫ��
	// ע��list����û��find()��Ա����
	// �����õ�����ͷ�ļ� algorithm �е� find() ����  
	// �ҵ��᷵�ص�����λ�� 
	it = find(buf.begin(), buf.end(), 303);
	if (it != buf.end()) 
		cout << *it << endl; 
	else 
		cout << "Not find it !" << endl;
	// �Ҳ������� end() 
	it = find(buf.begin(), buf.end(), 213);
	if (it != buf.end())
		cout << *it << endl;
	else 
		cout << "Not find it !" << endl;
	return 0;
}
