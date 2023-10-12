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
using namespace std;
vector<int> r(vector<int> o)
{
	reverse(o.begin(), o.end());
	for(int i=0;i<o.size();i++)
	{
		o[i] += 2;
		o[i] %= 4;
	}
	return o;
}
bool make(int startnum, vector<int> origin, vector<int> data)
{
	vector<int> temp;
	for(int i=startnum, j=0;j<origin.size();i++, j++, i%=origin.size())
	{
		temp.push_back(origin[i]);
	}
	if(data==temp || data==r(temp))
	{
		return true;
	}
	return false;
}
int main(void)
{
#ifndef testing
	FILE* inputfile = freopen("input.txt", "r", stdin);
	FILE* outputfile = freopen("output.txt", "w", stdout);
#endif
	int len;
	scanf("%d", &len);
	vector<int> origin;
	for(int i=0;i<len;i++)
	{
		int temp;
		scanf("%d", &temp);
		origin.push_back(temp-1);
	}
	int n = 0;
	scanf("%d", &n);
	vector<vector<int>> datas;
	for(int i=0;i<n;i++)
	{
		vector<int> temp;
		for(int j=0;j<len;j++)
		{
			int t;
			scanf("%d", &t);
			temp.push_back(t-1);
		}
		datas.push_back(temp);
	}
	int resultn=0;
	vector<vector<int>> result;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<len;j++)
		{
			if(make(j, origin, datas[i]))
			{
				resultn++;
				result.push_back(datas[i]);
			}
		}
		
	}
	printf("%d\n", resultn);
	for(int i=0;i<result.size();i++)
	{
		for(int j=0;j<len;j++)
		{
			printf("%d ", result[i][j]+1);
		}
		printf("\n");
	}
	return 0;
}
