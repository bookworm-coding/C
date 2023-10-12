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
	int n1[201]={};
	int n2[201]={};
	char temp[202] = {};
	gets_s(temp, 202);
	int l1 = (int)strlen(temp);
	for(int i=0;i<strlen(temp);i++)
	{
		n1[i] = temp[i] - '0';
	}
	memset(temp, '\0', sizeof(char) * 202);
	gets_s(temp, 202);
	int l2 = (int)strlen(temp);
	for (int i = 0; i < strlen(temp); i++)
	{
		n2[i] = temp[i] - '0';
	}
	int result[500] = {};
	for(int i=l1-1;i>=0;i--)
	{
		for(int j=l2-1;j>=0;j--)
		{
			int t = n1[i] * n2[j];
			result[i + j] += t;
			result[i + j - 1] += result[i+j] / 10;
			result[i + j] %= 10;
		}
	}
	for(int i=0;i<= l1 + l2 - 2;i++)
	{
		printf("%d", result[i]);
	}
	return 0;
}
