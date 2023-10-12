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
#include <queue>
#include <random>
#include <stack>
#include <tuple>
#include <vector>
#include <deque>
#include <string>
#include <limits>
#include <iostream>
#include <fstream>
using namespace std;

int change(string input, int a)
{
	auto len = input.length();
	reverse(input.begin(), input.end());
	for (intmax_t i = len - 1; i >= 0; i--)
	{
		if (input[i] > '9')
		{
			input[i] = input[i] - 'A' + 10;
		}
		else
		{
			input[i] -= '0';
		}
	}
	int result = 0;
	for (int i = 0; i < len; i++)
	{
		if(input[i]>=a)
		{
			return -1;
		}
		result += input[i] * static_cast<int>(pow(a, i));
	}
	return result;
}
int main(void)
{
#ifndef _DEBUG
	auto inputfile=freopen("input.txt", "r", stdin);
	auto outputfile=freopen("output.txt", "w", stdout);
	ofstream tempfile("temp.txt");
#endif
	string input1;
	string input2;
	cin >> input1;
	cin >> input2;
	bool temp = false;
	for(int i=2;i<=36;i++)
	{
		for(int j=2;j<=36;j++)
		{
			int temp1 = change(input1, i);
			int temp2 = change(input2, j);
			if(temp1 != -1 && temp2!=-1 && temp1==temp2)
			{
				temp = true;
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
	if(temp==false)
	{
		cout << "0 0" << endl;
	}
#ifndef _DEBUG
	tempfile.close();
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
