#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#define _USE_MATH_DEFINES
#include <algorithm>
#include <cmath>
#include <cstdbool>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <fstream>
#include <iostream>
#include <limits>
#include <queue>
#include <random>
#include <stack>
#include <string>
#include <tuple>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
using namespace std;
int main()
{
#ifndef testing
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n, m, k;
	scanf_s("%d %d %d", &n, &m, &k);
	set<int> l;
	int num = m;
	while(l.size()<n-1)
	{
		l.insert(num);
		printf("%d ", num);
		for(int i=0;i<k;i++)
		{
			do
			{
				num++;
			} while (l.find(num % n != 0 ? num % n : n) != l.end());
		}
		while(l.find(num % n!=0 ? num % n : n)!=l.end())
		{
			num++;
		}
		num = num % n!=0 ? num % n : n;
	}
	for(int i=1;i<=n;i++)
	{
		if(l.find(i)==l.end())
		{
			printf("\n%d", i);
			return 0;
		}
	}
	return 0;
}
