#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	map<int, string> buf;
	buf[522]="Wuhen";
	buf[303]="Chaofan";
	buf[1105]="Dogdog";
	// ������
	map<int, string>::iterator it;
	cout << "====== Before ======" << endl; 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << "  " << (*it).second << endl;	 
	// ���� erase()ɾ��Ԫ��
	buf.erase(1105);
	cout << "======  After ======" << endl;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << "  " << (*it).second << endl;
	return 0;
}
