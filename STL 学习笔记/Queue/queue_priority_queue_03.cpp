#include <queue>
#include <string>
#include <iostream>
using namespace std;

struct Student
{
	string name, num;
	// 重载 < 自定义优先级 
	bool operator < (const Student &tmp) const
	{
		// 如果把 < 改 > 可以直接把顺序颠倒过来 
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
