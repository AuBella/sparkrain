#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> buf(5, 2);
	for (int i = 0; i < 5; i++)
		buf.push_back(rand());
	vector<int>::iterator orz;
	cout << buf.size() << endl;
	for (orz = buf.begin(); orz != buf.end(); orz++)
		cout << *orz << " ";
	cout << endl;
	
	// ȥ�� 
	// ȥ��֮ǰһ��Ҫ��������ȥ��
	// ȥ��ԭ���ҵ��ظ������ݺ��ƶ������Ȼ�󷵻ص�һ���ظ���Ԫ�صĵ�ַ
	// Ȼ������erase���в��� 
	sort(buf.begin(), buf.end());
	vector<int>::iterator it = unique(buf.begin(), buf.end());
	buf.erase(it, buf.end());
	cout << buf.size() << endl;
	
	//���ֲ��Һ���
	cout << binary_search(buf.begin(), buf.end(), 2) << endl;
	
	return 0;
}
