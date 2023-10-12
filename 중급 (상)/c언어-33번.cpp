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
char lpwd[10000][6];
inline int compare(char a, char b)
{
	if(a==b)
	{
		return 0;
	}
	a -= '0';
	b -= '0';
	if(b==8 && a==0)
	{
		return 1;
	}
	if(a==0)
	{
		return 2;
	}
	if(a==b-3 || a==b+3 || a==b+1 || a==b-1)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}
inline bool check(char pwd[6], int n)
{
	for(int i=0;i<n;i++)
	{
		int c=0;
		for(int j=0;j<6;j++)
		{
			c += compare(pwd[j], lpwd[i][j]);
		}
		if(c==0 || c==1)
		{
			return true;
		}
	}
	return false;
}
int main(void)
{
#ifndef _TEST
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
#endif

	int n;
	ignore=scanf("%d", &n);
	char pwd[6];
	for(int i=0;i<n;i++)
	{
		ignore=scanf("%s",lpwd[i]);
	}
	ignore=scanf("%s",pwd);
	printf(check(pwd, n) ? "OPEN" : "CLOSE");
	return 0;
}
