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
struct d
{
	int n;
	char c;
};
char input[100001];
bool cmp(struct d f, struct d l)
{
	if(f.n>l.n)
	{
		return true;
	}
	else if(f.n==l.n)
	{
		if(f.c>l.c)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}
void print()
{
	auto len = strlen(input);
	for(int i=0;i<len;i++)
	{
		if(input[i]!=CHAR_MIN)
		{
			printf("%c", input[i]);
		}
	}
	printf("\n");
}
void change(char a)
{
	auto len = strlen(input);
	for(int i=0;i<len;i++)
	{
		if(input[i]==a)
		{
			input[i] = CHAR_MIN;
		}
	}
}
int main()
{
#ifndef testing
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	gets_s(input);
	print();
	struct d a[26];
	for(int i=0;i<26;i++)
	{
		a[i].c = 'a' + (char)i;
		a[i].n = 0;
	}
	for(int i=0;i<strlen(input);i++)
	{
		a[input[i] - 'a'].n++;
	}
	sort(a, a + 26, cmp);
	for(int i=0;i<25;i++)
	{
		if(a[i].n!=0)
		{
			change(a[i].c);
			print();
		}
	}
	return 0;
}
