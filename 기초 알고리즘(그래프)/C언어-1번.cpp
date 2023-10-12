#pragma warning (disable:6031)
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
int n, e;
bool** arr;
struct rrc2
{
	int* data;
	int length;
};
void c1(int p, bool * went)
{
	if(went == nullptr)
	{
		went = new bool[n];
		memset(went, false, sizeof(bool) * n);
	}
	went[p] = true;
	printf("%c", (char)p + 'A');
	for(int i=0;i<n;i++)
	{
		if(arr[p][i]==true && went[i]==false)
		{
			c1(i, went);
		}
	}
	return;
}
rrc2 rc2(int p, bool * went)
{
	int* result = new int[n];
	int k = 0;
	for(int i=0;i<n;i++)
	{
		if (arr[p][i] == true && went[i] == false)
		{
			result[k++] = i;
			went[i] = true;
			printf("%c", i+'A');
		}
	}
	return {result, k};
}
void c2(const int p, bool *went)
{
	queue<int> q;
	q.push(p);
	while(q.empty()==false)
	{
		auto d = rc2(q.front(), went);
		for(int i=0;i<d.length;i++)
		{
			q.push(d.data[i]);
		}
		q.pop();
	}
}
int main(void)
{
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	scanf("%d %d", &n, &e);
	arr = new bool* [n];
	for (int i = 0; i < n; i++) arr[i] = new bool[n];
	//memset(arr, false, sizeof(bool)*n*n);
	for(int i=0;i<e;i++)
	{
		char a, b;
		scanf(" %c %c", &a, &b);
		arr[a-'A'][b-'A'] = true;
		arr[b-'A'][a-'A'] = true;
	}
	char start;
	scanf(" %c", &start);
	c1(start - 'A', nullptr);
	printf("\n%c", start);
	bool* went = new bool[n];
	memset(went, false, sizeof(bool) * n);
	went[start - 'A'] = true;
	c2(start-'A', went);
	return 0;
}

