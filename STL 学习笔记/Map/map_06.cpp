// ��һ�����֣���ÿһλ�ĺ� 
// ���� string �� ASCII�� �� map ��ӳ����Կ��������� 
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	// �����ַ� '0'~'9' ������ 0~9 ��ӳ�� 
	map<char, int>buf;
	for (int i = 0; i < 10; i++)
		buf[i+'0'] = i;
	// ����string�����ֱ��ַ��� 
	string num;
	cout << "Please Enter A number : " ;
	cin >> num;
	// ��ʼ��� 
	int sum = 0;
	string::iterator it;
	for (it = num.begin(); it != num.end(); it++)
		sum += buf[*it];
	cout << "The sum is : " << sum << endl;
}
