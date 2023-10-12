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
struct num
{
	int n;
	int i;
};
bool cmp(struct num a, struct num b)
{
	if(a.n>b.n)
	{
		return true;
	}
	else if(a.n==b.n)
	{
		if(a.i>b.i)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
int main(void)
{
#ifndef _TEST
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int color[4]={0, 0, 0, 0};
	struct num n[10];
	for(int i=0;i<10;i++)
	{
		n[i].n = 0;
		n[i].i = i;
	}
	int mn = 0;
	for(int i=0;i<5;i++)
	{
		char c;
		scanf(" %c", &c);
		if(c=='Y')
		{
			color[0]++;
		}
		else if(c=='B')
		{
			color[1]++;
		}
		else if(c=='G')
		{
			color[2]++;
		}
		else if (c == 'R')
		{
			color[3]++;
		}
		int a;
		scanf("%d", &a);
		mn = max(mn, a);
		fflush(stdin);
		n[a].n++;
	}
	sort(color, color + 4);
	sort(n, n + 10, cmp);

	bool t[7]={false, false, false, false, false, false, false};
	if(color[3]==5)
	{
		t[0] = true;
	}
	if(n[0].n==4)
	{
		t[2] = true;
		t[3] = true;
		t[4] = true;
	}
	if(n[0].n==3)
	{
		t[3] = true;
		t[4] = true;
		if(n[1].n==2)
		{
			t[5] = true;
			t[6] = true;
		}
	}
	if(n[0].n==2)
	{
		t[4] = true;
		if(n[1].n==2)
		{
			t[6] = true;
		}
	}
	t[1] = true;
	for(int i=0;i<5;i++)
	{
		if (n[i].n != 1){
			t[1] = false;
			break;
		}
		else
		{
			if(n[i].i!=n[i+1].i+1)
			{
				t[1] = false;
				break;
			}
		}
	}
	int m = 0;
	//조건
	//모두 같은 색
	//숫자가 연속적
	//4장의 숫자가 같음
	//3장의 숫자가 같음
	//2장의 숫자가 같음
	//3장+2장의 숫자가 같음
	//2장+2장의 숫자가 같음
	//모두 만족 X
	if(t[0] && t[1])
	{
		m = max(m, n[0].i+900);
	}
	if(t[2])
	{
		m = max(m, n[0].i + 800);
	}
	if(t[5])
	{
		m = max(m, n[0].i*10 + n[1].i + 700);
	}
	if(t[0])
	{
		m = max(m, mn + 600);
	}
	if(t[1])
	{
		m = max(m, n[0].i + 500);
	}
	if(t[3])
	{
		m = max(m, n[0].i + 400);
	}
	if(t[6])
	{
		m = max(m, n[0].i*10 +n[1].i + 300);
	}
	if (t[4])
	{
		m = max(m, n[0].i + 200);
	}
	if(m==0)
	{
		m = mn+100;
	}
	printf("%d", m);
	return 0;
}
