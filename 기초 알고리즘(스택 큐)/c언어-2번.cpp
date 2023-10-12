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
using namespace std;
struct s
{
	char a[101];
};
struct s change(struct s input, int start, int end)
{
	for(int i=start+1;i<end;i++)
	{
		if(input.a[i]>='a' && input.a[i]<='z')
		{
			input.a[i] = input.a[i] - 'a' + 'A';
		}
		else if(input.a[i]>='A' && input.a[i]<='Z')
		{
			input.a[i] = input.a[i] + 'a' - 'A';
		}
		else
		{
			
		}
	}
	return input;
}
int main(void)
{
#ifndef _DEBUG
	FILE* inputfile=freopen("input.txt", "r", stdin);
	FILE* outputfile=freopen("output.txt", "w", stdout);
#endif
	char input[101] = {};
	gets_s(input);
	stack<int> o;
	auto t = strlen(input);
	for(int i=0;i<strlen(input);i++)
	{
		if(input[i]=='(')
		{
			o.push(i);
		}
		if(input[i]==')')
		{
			struct s a={};
			strcpy(a.a, input);
			strcpy(input, change(a, o.top(), i).a);
			o.pop();
		}
	}
	for(int i=0;i<t;i++)
	{
		if(input[i]!='('&&input[i]!=')')
		{
			printf("%c", input[i]);
		}
	}
#ifndef _DEBUG
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
