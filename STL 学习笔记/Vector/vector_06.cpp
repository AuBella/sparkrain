#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main()
{
	vector<int>buf;
	vector<int> :: iterator it;
	for (int i = 0; i < 10; i++)
		buf.push_back(rand() * rand() % rand());
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	// ÅÅÐò 
	sort(buf.begin(), buf.end());
	
	for (it = buf.begin(); it != buf.end(); it++)
		cout << *it << " " ;
	cout << endl;
	
	return 0;
}
