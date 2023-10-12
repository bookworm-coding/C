#pragma warning(disable: 4996)
#pragma warning(disable: 6031)

#include <algorithm>
/*
#include <cinttypes>
#include <cmath>
#include <cstdbool>
*/
#include <cstdio>
/*
#include <cstdlib>
#include <cstring>
*/
#include <ctime>
#include <process.h>
/*
#include <deque>
#include <fstream>
#include <istream>
#include <ostream>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <vector>
*/
using namespace std;
int n, k, result=0;
int *w;
#define cmp(value, data, lastvalue, k) (data)<(lastvalue) ? 1/*continue*/ : (((value)+(data))<= (k) ? ((value)+(data)==(k) ? 2/*result++;return*/ : 3/*calculate*/) : 4/*return*/)
void calculate(const int value, const int lastvalue)
{
	for(int i=0;i<n;i++)
	{
		switch(cmp(value, w[i], lastvalue, k))
		{
			case 1:break;
			case 2:result++; return; break;
			case 3:calculate(value + w[i], w[i]); break;
			default:return; break;
		}
	}
}
int main(void)
{
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	scanf("%d", &n);
	w = new int[128];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &w[i]);
	}
	sort(w, w + n+1);
	scanf("%d", &k);
	calculate(0, 0);
	delete[] w;
	printf("%d", result);
	return 0;
}

