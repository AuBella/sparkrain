#include <iostream>
#include <string>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
	string b1, b2, b3;
	char c1[109], c2[109], c3[109];
	sscanf("Wuhen Xiaoxiao Hahaha", "%s%s%s", c1, c2, c3);
	b1 = c1;
	b2 = c2;
	b3 = c3;
	cout << b1 << " " << b2 << " " << b3 << endl;
	
	int a, b, c;
	sscanf("522 503 999", "%d%d%d", &a, &b, &c);
	cout << a << " " << b << " " << c << endl;
	
	int x, y, z;
	sscanf("4,5#6", "%d,%d#%d", &x, &y, &z);
	cout << x << " " << y << " " << z << endl;
	
	return 0;
}

/*
		��ʵ������Ӿ���Ϊ��˵�� sscanf �ܹ����ַ����ж�ȡ���ݡ�
	�����÷��� scanfһ����ֻ������ȡ��λ�ôӱ�׼����ĵ����ַ���
	������ѡ� 
*/
