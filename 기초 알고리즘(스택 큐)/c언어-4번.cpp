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
bool make(int startnum, bool way, char input[21], char i[21])
{
	if(way)
	{
		for(int k=startnum, j=0;j<strlen(i); k++, j++, k%=strlen(input))
		{
			if(input[k]!=i[j])
			{
				return false;
			}
		}
		return true;
	}
	else
	{
		for (int k = startnum, j = 0; j < strlen(i); k--, j++, k=(k >= 0 ? k : strlen(i)+k))
		{
			if (input[k] != i[j])
			{
				return false;
			}
		}
		return true;
	}
}
int main(void)
{
#ifndef testing
	FILE* inputfile = freopen("input.txt", "r", stdin);
	FILE* outputfile = freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	char input[21];
	cin >>input;
	int k;
	cin >> k;
	for(int i=0;i<k;i++)
	{
		char d[21];
		cin >> d;
		bool tf = false;
		for(int j=0;j<strlen(input);j++)
		{
			if(make(j, true, input, d)==true || make(j, false, input, d)==true)
			{
				tf = true;
				puts("Y");
				break;
			}
		}
		if(tf==false)
		{
			puts("N");
		}
	}
	return 0;
}
