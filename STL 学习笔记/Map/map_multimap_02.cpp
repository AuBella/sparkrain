#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	multimap<string, double> buf;
	buf.insert(pair<string, double>("Wuhen", 1994.0522));
	buf.insert(pair<string, double>("Chaofan", 1994.0303));
	
	// ����size()�õ�Ԫ�ظ���
	cout << "====================" << endl; 
	cout << buf.size() << endl; 
	cout << "====================" << endl; 
	
	multimap<string, double>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	
	// ����erase()ɾ��ĳ��Ԫ��
	buf.erase("Chaofan");
	
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	
	cout << "====================" << endl; 
	cout << buf.size() << endl; 
	cout << "====================" << endl; 
	
	// ����clear()�������Ԫ��
	buf.clear();
	
	cout << "====================" << endl; 
	cout << buf.size() << endl; 
	cout << "====================" << endl; 
	return 0; 
}
