//Copyright by cq01, 2019 Licensed under the MIT license : http://www.opensource.org/licenses/mit-license.php
#include <iostream>
#include<cstring>
using namespace std;
char str[1001];
int main()
{
	int n;
	cin >> n;
	cin.get();
	for (int i = 0; i < n; ++i)
	{
		cin.getline(str, 1000);
		cout << str << endl << endl;
	}
	while (cin >> str)
	{
		cout << str << endl << endl;
	}
}