#include <set>
#include <iostream>

using namespace std;

int main()
{
	set<int> buf;
	buf.insert(22);
	buf.insert(5);
	buf.insert(94);
	buf.insert(72);
	set<int>::iterator it;
	// ���� find() ����Ԫ�أ��ҵ�����λ�ã�û���ҵ����� end() 
	it = buf.find(94);
	// �ҵ��������  
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it" << endl; 
	it = buf.find(114);
	//û�ҵ���� Not find it
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it" << endl; 
	return 0;
}
