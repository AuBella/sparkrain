#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf(10);
	for (int i = 0; i < 10; i++)
		buf[i] = i;
	//ɾ��������Ԫ��	
	buf.erase(buf.begin()+2);
	vector<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	//ɾ���ڶ���������Ԫ�� 
	buf.erase(buf.begin()+1, buf.begin()+5);
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	//��� 
	buf.clear();
	//�����С 
	cout << buf.size() << endl;
	return 0; 
}
