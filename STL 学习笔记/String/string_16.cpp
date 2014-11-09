#include <string>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

string NumToString(double a)
{
	ostringstream out;
	if (out << a)
		return out.str();
	return "Error!";
}

double StringToNum(const string &a)
{
	istringstream In(a);
	double res;
	if (In >> res)
		return res;
	return 0.0;
}

int main()
{
	string a1 = "522503", a2;
	double b1 = 503522, b2;
	//数字转化为字符串
	a2 = NumToString(b1); 
	//字符串转化为数字
	b2 = StringToNum(a1);
	
	cout << a1 << endl << b2 << endl << endl;
	cout << b1 << endl << a2 << endl;
}
