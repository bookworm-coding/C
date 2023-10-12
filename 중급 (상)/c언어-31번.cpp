#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdbool>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector>
#include <ctime>
#include <tuple>
#pragma warning(disable : 4996)
using namespace std;
inline void print(int m[31][31], int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
#ifndef _TEST
	ignore = freopen("input.txt", "r", stdin);
	ignore = freopen("output.txt", "w", stdout);
#endif
	int n;
	ignore=scanf("%d", &n);
	int m[31][31]={0,};
	m[1][1 + n / 2]=1;
	int x = 1;
	int y = 1 + n / 2;
	int i = 2;
	while(i<=n*n)
	{
		x--;
		y++;
		//0 3
		if (x <= 0 || x > n)
		{
			if (y <= 0 || y > n)
			{
				x += 2;
				y -= 1;
			}
			else
			{
				x = n;
			}
		}
		else if (y <= 0 || y > n)
		{
			y = 1;
		}
		if (m[x > 0 ? x : NULL][y>0 ? y : NULL] != 0)
		{
			x += 2;
			y -= 1;
		}
		
		m[x>0 ? x : n-x][y > 0 ? y : n-y] = i++;
	}
	print(m, n);
	return 0;
}
