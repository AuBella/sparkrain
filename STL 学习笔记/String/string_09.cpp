#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	string buf;
	buf = "Wuhen Hahaha Xiaoxiao";
	//���ҵ�һ�� �ַ� o ���ֵ�λ�� 
	// 16 �� 20����o ������16�ǵ�һ�γ��ֵ�λ�� 
	cout << buf.find('o') << endl; 
	// ���ҵ�һ�γ��� �ַ��� o ��λ�� 
	cout << buf.find("o") << endl;
	// ���ҵ�һ�γ��� �ַ��� Haha ��λ��
	// ������������Ϊ��˵��find�����Դ�Сд�����е� 
	cout << buf.find("Haha") << endl;
	cout << buf.find("haha") << endl;
	// ���Ҳ�����ʱ�򣬻᷵�� 4294967295 ���̶��ģ� 
	cout << buf.find("Wobuzhidao") << endl;
	return 0;
}
