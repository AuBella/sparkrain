#include <set>
#include <iostream>
using namespace std;

int main()
{
	multiset<string> buf;
	buf.insert("Wuhen");
	buf.insert("HahaHa");
	buf.insert("LuckyCoding");
	buf.insert("Dogdog");
	buf.insert("HahaHa");
	multiset<string>::iterator it;
	cout << "Before delete: ";
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl << endl;;
	
	// ����erase()ɾ������ HahaHa Ԫ�أ��ĺ����ķ���ֵΪɾ��Ԫ�صĸ��� 
	int n = buf.erase("HahaHa");
	cout << "The 1st deleted: ";
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	cout << "Total deleted: " << n << endl;
	cout << endl << endl;
	
	n = buf.erase("Dogdog");
	cout << "The 2nd deleted: ";
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	cout << "Total deleted: " << n << endl;
	return 0;
}
