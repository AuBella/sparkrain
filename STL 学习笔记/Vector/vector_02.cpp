#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> buf;
	buf.push_back(2);
	buf.push_back(7);
	buf.push_back(9);
	
	reverse(buf.begin(), buf.end());
	vector<int>::iterator it; // ����һ���洢���������ĵ����� 
	for (it = buf.begin(); it != buf.end(); it++)
	// begin()�ǵ�һ��Ԫ�ص�λ��
	// end()�����һ��Ԫ�ص�  ��һ��  λ�ã����������ǲ�����
	// �����Ԫ��λ�úʹ�С  �޹�  
		cout << *it << " "; //�����Ԫ�ص�ֵ 
	cout << endl; //���� 
	return 0; 
}
