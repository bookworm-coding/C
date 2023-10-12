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
struct l
{
	l* next;
	l* before;
	int val;
	bool found = false;
};
struct result
{
	int x, y, num;
};
int calc(l* x, l* y)
{
	int x_color = (*x).val;
	int y_color = (*y).val;
	auto x2 = x;
	auto y2 = y;
	while (x_color == 1)
	{
		x_color = (*x2).val;
		x2 = (*x2).before;
	}
	while (y_color == 1)
	{
		y_color = (*y2).val;
		y2 = (*y2).next;
	}
	y2 = y;
	x2 = x;
	int r = 0;
	bool f = true;
	while (true)
	{
		if(((*x2).val==x_color || (*x2).val==1) && (*x2).found==false)
		{
			(*x2).found = true;
			r++;
		}
		else
		{
			break;
		}
		x2 = (*x2).before;
		f = false;
	}
	f = true;
	while(true)
	{
		if(((*y2).val==y_color || (*y2).val==1) && (*y2).found==false)
		{
			(*y2).found = true;
			r++;
		}
		else
		{
			break;
		}
		y2 = (*y2).next;
		f = false;
	}
	auto start = x;
	auto p = x;
	do
	{
		(*p).found = false;
		p = (*p).next;
	} while (p != start);
	return r;
}
struct result calculate(l *start, l *end, int len)
{
	struct result max = { -1, -1, -1 };
	int x = 1;
	int y = 2;
	l* real_x = (*end).next;
	l* real_y = (*start).next;
	while(y<=len)
	{
		auto r = calc(real_x, real_y);
		if(r>max.num)
		{
			max = { x, y, r };
		}
		x++;
		y++;
		real_x = (*real_x).next;
		real_y = (*real_y).next;
	}
	return max;
}
int main()
{
#ifndef testing
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	char input[128];
	gets_s(input, sizeof(input));
	l *start = (l*)malloc(sizeof(l));
	(*start).next = NULL;
	(*start).before = NULL;
	(*start).found = false;
	if (input[0] == 'b')
	{
		(*start).val = 0;
	}
	else if (input[0] == 'r')
	{
		(*start).val = 2;
	}
	else
	{
		(*start).val = 1;
	}
	l* before = start;
	for(size_t i=1;i<strlen(input);i++)
	{
		l* v = (l*)malloc(sizeof(l));
		(*before).next = v;
		(*v).before = before;
		(*v).found = false;
		(*v).val = (input[i] == 'b' ? 0 : (input[i] == 'r' ? 2 : 1));
		(*v).next = start;
		(*start).before = v;
		before = v;
	}
	auto r = calculate(start, before, strlen(input));
	auto t = calc(before, start);
	if(r.num<t)
	{
		printf("%d %zd %d", t, strlen(input), 1);
	}
	else
	{
		printf("%d %d %d", r.num, r.x, r.y);
	}
	
	return 0;
}
