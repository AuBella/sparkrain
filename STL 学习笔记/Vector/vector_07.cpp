#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> buf;
	//����Ƿ�Ϊ�գ�1��0�ǿ� 
	cout << buf.empty() << endl;
	//���һ��Ԫ�� 
	buf.push_back(rand());
	//size�Ǵ�С 
	cout << buf.empty() << endl << buf.size() << endl;
	
	buf.push_back(2);
	buf.push_back(2);
	buf.push_back(2);
	buf.push_back(2);
	buf.push_back(2);
	cout << buf.size() << endl;
	
	return 0;
}
