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
	scanf("%d", &n);
	int an=0;
	int bn=0;
	int a[20];
	int b[20];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			
		}
		else if(a[i]==1 && b[i]==2)
		{
			an += 6;
		}
		else if (a[i] == 2 && b[i] == 1)
		{
			bn += 6;
		}
		else if(a[i]-b[i]==1)
		{
			bn += a[i] + b[i];
		}
		else if(b[i]-a[i]==1)
		{
			an += a[i] + b[i];
		}
		else if(b[i]>a[i])
		{
			bn += b[i];
		}
		else if(a[i]>b[i])
		{
			an += a[i];
		}
	}
	printf("%d %d", an, bn);
	return 0;
}
