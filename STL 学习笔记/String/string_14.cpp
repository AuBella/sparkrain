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
		string 和 字符串 使用 = 进行赋值的时候需要注意一下他的过程 
		过程：	先开辟一个用来存string数据的空间，然后将 字符串 复制到这块空 
			间内（即：将char字符串转化为string类型），然后复制这块数据空间到
			原有的 string 对象中 
	*/ 
	buf = tmp;
	printf(buf.c_str());
	cout << endl;
	printf("%s\n", tmp);
	return 0;
}
