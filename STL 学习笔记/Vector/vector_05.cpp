#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> buf(10);
	for (int i = 0; i < 10; i++)
		buf[i] = i;
	vector<int>::iterator it;
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	//��������� 
	vector<int>::reverse_iterator orz;
	//rbegin��rend ������Է���������õ� 
	//begin �� end �����������������õ� 
	for (orz = buf.rbegin(); orz != buf.rend(); orz++)
		cout << *orz << " ";
	cout << endl;
	//������ֱ�Ӱ������ڵ�Ԫ�ط�ת 
	reverse(buf.begin(), buf.end());
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " ";
	cout << endl;
	return 0;
}
