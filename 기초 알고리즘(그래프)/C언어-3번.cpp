#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <algorithm>
#include <cmath>
#include <cstdbool>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <deque>
#include <fstream>
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

int main()
{
#ifndef testing
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	scanf("%d", &n);
	
	int i, j;
	scanf("%d %d", &i, &j);
	i--;
	j--;
	for(int a=0;a<n;a++)
	{
		for (int b = 0; b < n; b++)
		{
			printf("%2d ", abs(i-a)+abs(j-b)+1);
		}
		printf("\n");
	}
	return 0;
}
