#include <set>
#include <iostream>
using namespace std;

int main()
{
	multiset<string> buf;
	buf.insert("Wuhen");
	buf.insert("HahaHa");
	buf.insert("LuckyCoding");
	multiset<string>::iterator it;
	// ���� find() �ҵ���һ�γ��ֵĵ�����λ�ã�û���ҵ�����end() 
	it = buf.find("Wuhen");
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it!" << endl; 
	
	it = buf.find("Aimeizhi Li");
	if (it != buf.end())
		cout << *it << endl;
	else
		cout << "Not find it!" << endl;  
	return 0;
}
