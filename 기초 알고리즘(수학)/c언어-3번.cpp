#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <cstdbool>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <queue>
#include <random>
#include <stack>
#include <tuple>
#include <vector>
#include <deque>
#include <string>
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
using namespace std;
int main(void)
{
#ifndef _TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d.", a / b);
	int c=a%b*10;
	int v[21];
	for(int i=0;i<21;i++)
	{
		v[i]=c / b;
		c = c % b*10;
	}
	if (v[20] >= 5)
	{
		v[20] = 0;
		v[19]++;
	}
	for(int i=20;i>=0;i--)
	{
		if(v[i]>=10)
		{
			v[i] -= 10;
			v[i - 1]++;
		}
	}
	for(int i=0;i<20;i++)
	{
		printf("%d", v[i]);
	}
	return 0;
}
