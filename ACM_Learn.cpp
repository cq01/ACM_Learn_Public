//from https://blog.csdn.net/metaphysis/article/details/6431937
//Licensed under CC 4.0 BY-SA(http://creativecommons.org/licenses/by-sa/4.0/)
#include <iostream>

#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define MAXSIZE 100000
using namespace std;

int cache[MAXSIZE] = { 0 };
long int times(long int n);
int main()
{
	int i, j;
	int res = 0;
	int step;
	while (cin >> i >> j)
	{
		int start = min(i, j);
		int end = max(i, j);
		for (long int k = start; k <= end; ++k)
		{
			if ((step = times(k)) > res)
			{
				res = step;
			}
		}
		cout << i << ' ' << j << ' ' << res << endl;
		res = 0;
	}
}

long int times(long int n)
{
	if (n == 1)
	{
		return 1;
	}
	if (n & 1)//n%2
	{
		n += (n << 1) + 1;//3n+1
	}
	else
	{
		n >>= 1;//n/2
	}
	if (n < MAXSIZE)//search cache
	{
		if (!cache[n])
		{
			cache[n] = times(n);
		}
		return cache[n] + 1;
	}
	return times(n) + 1;
}