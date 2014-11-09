#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct Student
{
	string name, num;
	// ���� < �Զ������ȼ� 
	bool operator < (const Student &tmp) const
	{
		// ����� < �� > ����ֱ�Ӱ�˳��ߵ����� 
		return num < tmp.num;
	}
};

int main()
{
	priority_queue<Student> buf;
	Student tmp;
	tmp.name = "Wuhen", tmp.num = "12408100119";
	buf.push(tmp);
	tmp.name = "Chaofan", tmp.num = "12408100135";
	buf.push(tmp);
	tmp.name = "Gaofushuai", tmp.num = "12408100118";
	buf.push(tmp);
	while(buf.empty() == false)
	{
		cout << (buf.top()).num << " " << (buf.top()).name << endl;
		buf.pop();
	}
	return 0;
}
