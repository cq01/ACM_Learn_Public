//Copyright by cq01, 2019 Licensed under the MIT license : http://www.opensource.org/licenses/mit-license.php
#include <iostream>
using namespace std;
int main()
{
	long int n, m, a, s;
	cin >> n;
	for (long int i = 0; i < n; i++)
	{
		cin >> m;
		s = 0;
		for (long int j = 0; j < m; j++)
		{
			cin >> a;
			s += a;
		}
		cout << s << endl;
	}
}