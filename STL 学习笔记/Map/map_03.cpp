#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	map<int, string>buf;
	buf[522]="Wuhen";
	buf[115]="Dogdog";
	buf[303]="Chaofan";
	// ǰ�������
	map<int, string>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	cout << "=================" << endl;
	// ���������
	map<int, string>::reverse_iterator rit;
	for (rit = buf.rbegin(); rit != buf.rend(); rit++)
		cout << (*rit).first << " " << (*rit).second << endl;
	return 0;
}
