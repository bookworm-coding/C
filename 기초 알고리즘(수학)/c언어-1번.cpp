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
#pragma warning(disable : 6031)
using namespace std;
int main(void)
{
#ifndef _TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int l = m * 2 - 1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<l-2*i-1;j++)
		{
			printf(" ");
		}
		int d=n;
		for(int j=0;j<i+1;j++)
		{
			if(d<0)
			{
				d = 10 + d;
			}
			if(d>=10)
			{
				d = d % 10;
			}
			printf("%d ", d--);
		}
		d += 2;
		for(int j=0;j<i;j++)
		{
			if (d < 0)
			{
				d = 10 + d;
			}
			if (d >= 10)
			{
				d = d % 10;
			}
			printf("%d ", d++);
		}
		printf("\n");
	}
	for (int i = m-2; i >=0; i--)
	{
		for (int j = 0; j < l - 2 * i - 1; j++)
		{
			printf(" ");
		}
		int d = n;
		for (int j = 0; j < i + 1; j++)
		{
			if (d < 0)
			{
				d = 10 + d;
			}
			if (d >= 10)
			{
				d = d % 10;
			}
			printf("%d ", d--);
		}
		d += 2;
		for (int j = 0; j < i; j++)
		{
			if (d < 0)
			{
				d = 10 + d;
			}
			if (d >= 10)
			{
				d = d % 10;
			}
			printf("%d ", d++);
		}
		printf("\n");
	}
	return 0;
}
