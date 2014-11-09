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
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	// ����erase() ɾ��Ԫ�� 
	buf.erase(72);
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	// ����size()�õ����ϴ�С
	cout << "size = " << buf.size() << endl; 
	// ����clean() ��ռ���
	buf.clear();
	cout << "size = " << buf.size() << endl;
	return 0;
}
