#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	// ����һ����ֵΪ string ӳ������Ϊ int �� map ���󣬵�ǰΪ�� 
	map<string, string> buf;
	// map�Ĳ��뷽ʽ���������� 
	buf["Wuhen"]="12408100119";
	buf["Darkdream"]="12408100316";
	buf["LaiTang"]="12408100135";
	// ǰ������� 
	map<string, string>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}
