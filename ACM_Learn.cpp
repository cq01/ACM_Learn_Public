//Copyright by cq01, 2019 Licensed under the MIT license : http://www.opensource.org/licenses/mit-license.php
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	char cstr[101];
	while (cin.getline(cstr,101))
	{
		n = strlen(cstr);
		for (int i = n-1; i >=0; --i)
		{
			cout << cstr[i];
		}
		cout << endl;
	}
}