#include <map>
#include <string>
#include <iostream>
using namespace std;
// �Զ���ȽϺ��� 
struct Cmp
{
	// ���� "()"  
	bool operator () (const int &a, const int &b)
	{
		return a > b;
	}
};
int main()
{
	map<int, string, Cmp>buf;
	buf[522] = "Wuhen";
	buf[303] = "Chaofan";
	buf[115] = "Dogdog";
	// Ĭ��������Ǵ�С���������������˷��ţ�����˴Ӵ�С 
	map<int, string, Cmp>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << (*it).first << " " << (*it).second << endl;
	return 0;
}

/*
	����ǽṹ����Ϊ��ֵ��ֱ���ڽṹ��������"<"����
	�� set һ�������� 
*/ 
