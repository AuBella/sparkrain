#include <string>
#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	string buf;
	char tmp[109];
	scanf("%s", tmp);
	/* 	
		string �� �ַ��� ʹ�� = ���и�ֵ��ʱ����Ҫע��һ�����Ĺ��� 
		���̣�	�ȿ���һ��������string���ݵĿռ䣬Ȼ�� �ַ��� ���Ƶ����� 
			���ڣ�������char�ַ���ת��Ϊstring���ͣ���Ȼ����������ݿռ䵽
			ԭ�е� string ������ 
	*/ 
	buf = tmp;
	printf(buf.c_str());
	cout << endl;
	printf("%s\n", tmp);
	return 0;
}
