#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	// ����һ����ֵΪstring��ӳ������Ϊdouble��multimap buf,ĿǰΪ�� 
	multimap<string, double> buf;
	// ����insert()��������
	// pair��һ��ģ�����ͣ����а�����������ֵ���������ݵ����Ϳ��Բ�ͬ 
	buf.insert(pair<string, double>("Wuhen", 94.522));
	buf.insert(pair<string, double>("Chaofan", 94.303));
	// �����ظ�ֵ Wuhen
	buf.insert(pair<string, double>("Wuhen", 1994.0522));
	// ������ 
	multimap<string, double>::iterator it; 
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}
