#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf(3);
	buf[0] = 2;
	buf[1] = 7;
	buf[2] = 9;
	//��ʱ���Ϊ 2 7 9
	
	buf.insert(buf.begin(), 8);
	// 8 2 7 9
	buf.insert(buf.begin()+2, 1);
	// 8 2 1 7 9 ����˵�ĵ�2��Ԫ����ָ�ʼ�ĵ�2��Ԫ��7
	//           �����ǽ���һ�β���֮��ĵ�2��Ԫ��2 
	buf.insert(buf.end(), 3);
	// 8 2 1 7 9 3
	vector<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl; 
}
