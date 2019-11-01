//Copyright by cq01, 2019 Licensed under the MIT license : http://www.opensource.org/licenses/mit-license.php

#include <iostream>
#include<vector>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
using namespace std;

typedef std::vector<char> charVector;
typedef std::vector<charVector> charVector2D;
charVector2D Map;
void Minesweeper(const int& n, const int& m);
void fillMap(const int& n, const int& m);
int MineNumber(const int& n, const int& m, const int& i, const int& j);
inline int GetMine(const int& n, const int& m, const int& i, const int& j);
int main()
{
	int n, m;
	int i = 0;
	while (cin >> n >> m)
	{
		if (n == 0 || m == 0)
		{
			break;
		}
		if (i)
		{
			cout << endl;
		}
		++i;
		cout << "Field #" << i << ':' << endl;
		Minesweeper(n, m);
	}

	return 0;
}
void fillMap(const int& n, const int& m)
{
	char c;
	cin.get();
	Map.resize(n);
	for (int i = 0; i < n; ++i)
	{
		Map[i].resize(m);
		for (int j = 0; j < m; ++j)
		{
			c = cin.get();
			if (c == '.')
			{
				Map[i][j] = 0;
			}
			else
			{
				Map[i][j] = 1;
			}
		}
		cin.get();
	}
}
int MineNumber(const int& n, const int& m, const int& i, const int& j)
{
	int sum = 0;
	for (int s = i - 1; s < i + 2; ++s)
	{
		for (int t = j - 1; t < j + 2; ++t)
		{
			sum += GetMine(n, m, s, t);
		}
	}
	return sum;
}
inline int GetMine(const int& n, const int& m, const int& i, const int& j)
{
	if (i < 0 || i >= n || j < 0 || j >= m)
	{
		return 0;
	}
	return Map[i][j];
}
void Minesweeper(const int& n, const int& m)
{
	fillMap(n, m);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (Map[i][j])
			{
				cout << '*';
				continue;
			}
			cout << MineNumber(n, m, i, j);
		}
		cout << endl;
	}
}
