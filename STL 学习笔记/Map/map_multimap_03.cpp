#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	multimap<string, int>buf;
	buf.insert(pair<string, __int64>("Wuhen", 100119));
	buf.insert(pair<string, __int64>("Chaofan", 100135));
	multimap<string, int>::iterator it;
	// ����find()����Ԫ�� 
	// ���ҵ��᷵�ص�����λ�� 
	it = buf.find("Wuhen");
	if (it != buf.end())
		cout << (*it).first << " " << (*it).second << endl;
	else cout << "Not find it !" << endl; 
	// ��û�ҵ�����end()
	it = buf.find("HahaHa");
	if (it != buf.end())
		cout << (*it).first << " " << (*it).second << endl;
	else cout << "Not find it !" << endl; 
	return 0; 
}
