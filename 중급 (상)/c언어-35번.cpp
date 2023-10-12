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
	char c;
	scanf("%c", &c);
	int line;
	scanf("%d", &line);
	if(c>'Z'||c<'A' || line>24)
	{
		printf("입력에러!");
		return 0;
	}
	c--;
	int m=line*2-1;
	bool mode = false;
	int l = 1;
	for(int i=0;i<line;i++)
	{
		for(int j=0;j<(m-l)/2;j++)
		{
			printf(" ");
		}
		if(mode)
		{
			c++;
			c = (char)(c >= 'A' ? (c <= 'Z' ? c : 'A' + c - 'Z' - 1) : c + 'Z' - 'A' + 1);
			for(int j=0;j<l;j++)
			{
				c = (char)(c >= 'A' ? (c <= 'Z' ? c : 'A' + c - 'Z' - 1) : c + 'Z' - 'A' + 1);
				printf("%c", c++);
			}
			c--;
			printf("\n");
		}
		else
		{
			c += l;
			c = (char)(c >= 'A' ? (c <= 'Z' ? c : 'A' + c - 'Z' - 1) : c + 'Z' - 'A' + 1);
			for (int j = 0; j < l; j++)
			{
				c = (char)(c >= 'A' ? (c <= 'Z' ? c : 'A' + c - 'Z' - 1) : c + 'Z' - 'A' + 1);
				printf("%c", c--);
			}
			c+=l;
			printf("\n");
		}
		l += 2;
		mode = (mode==false);
	}
	return 0;
}
