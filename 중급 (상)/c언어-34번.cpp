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
#pragma warning(disable:6031)
using namespace std;
int result[102][102];
struct t
{
	int x, y, way;
};
struct t f(struct t t)
{
	int x = t.x;
	int y = t.y;
	int way = t.way%4;
	if(way==0)
	{
		y--;
	}
	else if(way==1)
	{
		x--;
	}
	else if(way==2)
	{
		y++;
	}
	else if(way==3)
	{
		x++;
	}
	if(result[x][y]==0)
	{
		return { x, y, way };
	}
	else
	{
		x = t.x;
		y = t.y;
		way = (t.way+1) % 4;
		return f({ x, y, way });
	}
}

int main(void)
{
	
#ifndef _TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	scanf("%d", &n);
	for (int i = 0; i < 102; i++)
	{
		result[0][i] = 1;
		result[i][0] = 1;
		result[i][n + 1] = 1;
		result[n + 1][i] = 1;
	}
	result[n][n] = n * n;
	int x = n;
	int y = n;
	int way = 0;
	int value = n * n;
	while(value!=1)
	{
		auto temp=f({ x, y, way });
		x = temp.x;
		y = temp.y;
		way = temp.way;
		result[x][y] = --value;
	}
	if(n%2==0)
	{
		for (int j = 1; j <= n; j++)
		{
			for (int i = 1; i <= n; i++)
			{
				printf("%2d ", result[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%2d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}

