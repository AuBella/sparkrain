#include <list>
#include <iostream>
using namespace std;
list<int> buf;
list<int>::iterator it;
void Print()
{
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl << endl;
}
int main()
{
	for (int i = 1; i <= 10; i++)
		buf.push_back(i);
	buf.push_front(5);
	cout << "Befor remove     : " ;
	Print();
	// ����remove(x)ɾ�����е���x��Ԫ�� 
	buf.remove(5);
	cout << "After remove 5   : " ;
	Print();
	buf.remove(2);
	cout << "After remove 2   : " ;
	Print();
	// ����pop_front() ɾ����һ��Ԫ��
	buf.pop_front();
	cout << "After pop_front  : " ;
	Print(); 
	// ����pop_back() ɾ�����һ��Ԫ��
	buf.pop_back();
	cout << "After pop_back   : " ;
	Print();
	// ����erase() ɾ��ĳһ��������λ�õ�Ԫ��
	it = buf.begin();
	for (int i = 1; i < 3; i++) // �˴�Ϊɾ��������Ԫ�� 
		it++;
	buf.erase(it);
	cout << "After erase      : " ;
	Print();
	// ���� size() ��ȡ��ǰԪ�ظ���
	cout << "==== Before clear ====" << endl;
	cout << "Now the size is  : " << buf.size() << endl;
	// ���� clear() ���list����
	buf.clear();
	cout << "==== After  clear ====" << endl;
	cout << "Now the size is  : " << buf.size() << endl; 
	return 0;
}
