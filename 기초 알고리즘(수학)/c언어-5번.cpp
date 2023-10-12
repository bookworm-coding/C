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
string c(string input)
{
	char before = '\0';
	int len=1;
	int start=0;
	string result=input;
	for(int i=0; i<input.size();i++)
	{
		if(input[i]==before)
		{
			len++;
		}
		else
		{
			if(len>=4)
			{
				auto temp1 = input.substr(0, start);
				auto temp2=to_string(len);
				auto temp3 = input.substr(i-1);
				result = temp1 + "("+temp2 + ")" + temp3;
				input = result;
			}
			before = input[i];
			len = 1;
			start = i;
		}
	}
	if (len >= 4)
	{
		auto temp1 = input.substr(0, start);
		auto temp2 = to_string(len);
		auto temp3 = input.substr(input.size() - 1);
		result = temp1 + "(" + temp2 + ")" + temp3;
		input = result;
	}
	return result;
}
string u(string input)
{
	string result=input;
	int opennum=0;
	bool opened = false;
	bool closed = false;
	for(int i=0;i<input.size();i++)
	{
		if(input[i]=='(')
		{
			opennum = i;
			opened = true;
		}
		else if(input[i]==')')
		{
			if(opened)
			{
				closed = true;
			}
		}
		else
		{
			if(closed)
			{
				auto num = stoi(input.substr(opennum + 1, i - 2));
				string temp;
				for(int j=0;j<num;j++)
				{
					temp += input[i];
				}
				result = input.substr(0, opennum) + temp + input.substr(i + 1);
				input = result;
				opened = false;
				closed = false;
				opennum = 0;
			}
		}
	}
	return result;
}
int main(void)
{
#ifndef _DEBUG
	auto inputfile=freopen("input.txt", "r", stdin);
	auto outputfile=freopen("output.txt", "w", stdout);
#endif
	string input;
	char mode;
	cin >> mode;
	cin >> input;
	auto result = (mode == 'U' ? u(input) : c(input));
	cout << result;

#ifndef _DEBUG
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
