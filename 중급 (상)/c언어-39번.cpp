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
	int n;
	int d[1001] = {};
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int temp;
		scanf("%d", &temp);
		if(d[i-temp]!=0)
		{
			for(int j=n;j>=i-temp;j--)
			{
				d[j + 1] = d[j];
			}
		}
		d[i - temp] = i;
	}
	for(int i=1;i<=5;i++)
	{
		printf("%d ", d[i]);
	}
	return 0;
}
