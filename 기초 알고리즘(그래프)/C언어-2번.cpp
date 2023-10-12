#pragma warning (disable:6031)
#include <numeric>
#include <algorithm>
#include <cinttypes>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <process.h>
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
using namespace std;
bool** c;
int main(void)
{
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int start = 0;
	//scanf("%d", &start);
//	start--;
	int n, r;
	scanf("%d %d", &n, &r);
	c = new bool* [n];
	for (int i = 0; i < n; i++) c[i] = new bool[n];
	for(int i=0;i<r;i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		c[a-1][b-1] = true;
		c[b-1][a-1] = true;
	}
	int* result=new int[n];
	memset(result, 0, sizeof(int) * n);
	queue<int> q;
	q.push(start);
	while(q.empty() == false)
	{
		for (int i1 = 0; i1 < n; i1++) {
			if (c[q.front()][i1]==true && result[i1]== 0&& i1!=start)
			{
				q.push(i1);
				result[i1] = result[q.front()]+1;
			}
		}
		q.pop();
	}
	printf("%d", accumulate(result, result + n, 0) * 2);
	return 0;
}

