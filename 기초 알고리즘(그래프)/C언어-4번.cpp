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
#include <windows.h>
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
#define M INT_MAX
struct d
{
	int value = M;
	pair<int, int> before;
};
d datad[10][10];

int main(void)
{
#ifndef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
			int temp;
			scanf("%d", &temp);
			if(temp==0)
			{
				datad[i][j].value = -1;
			}
			else
			{
				datad[i][j].value = M;
			}
		}
	}
	pair<int,int> s;
	scanf("%d %d", &s.first, &s.second);
	s.first--; s.second--;
	int rx, ry;
	scanf("%d %d", &rx, &ry);
	rx--; ry--;
	queue<pair<int, int>> q;
	q.push(s);
	while(datad[rx][ry].value==-1)
	{
		int x = q.front().first;
		int y = q.front().second;
		if(x<0 || y<0 || x>9 || y>9)
		{
			q.pop();
			continue;
		}
		if(x>0 && datad[x - 1][y].value == -1)
		{
			datad[x - 1][y].value = datad[x][y].value + 1;
			datad[x - 1][y].before = q.front();
			q.push({ x - 1, y });
		}
		if(x<9 && datad[x + 1][y].value == -1)
		{
			datad[x + 1][y].value = datad[x][y].value + 1;
			datad[x + 1][y].before = q.front();
			q.push({ x + 1, y });
		}
		if(y>0 && datad[x][y-1].value == -1)
		{
			datad[x][y-1].value = datad[x][y].value + 1;
			datad[x][y-1].before = q.front();
			q.push({ x, y-1 });
		}
		if(y<9 && datad[x][y + 1].value == -1)
		{
			datad[x][y + 1].value = datad[x][y].value + 1;
			datad[x][y + 1].before = q.front();
			q.push({ x, y+1 });
		}
		q.pop();
	}
	pair<int, int> a = { rx, ry };
	stack<pair<int, int>> sp;
	while(a!=s)
	{
		sp.push(a);
		a = datad[a.first][a.second].before;
	}
	sp.push(s);
	printf("%d\n", static_cast<int>(sp.size()));
	while(sp.empty()!=true)
	{
		printf("%d %d\n", sp.top().first+1, sp.top().second+1);
		sp.pop();
	}
	return 0;
}

