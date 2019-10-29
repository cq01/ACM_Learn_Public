//Copyright by cq01, 2019 Licensed under the MIT license : http://www.opensource.org/licenses/mit-license.php
#include <iostream>
using namespace std;
int main()
{
	int n, a, s;
	while (true)
	{
		cin >> n;
		if (n == 0)
		{
			break;
		}
		s = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			s += a;
		}
		cout << s << endl;
	}
}