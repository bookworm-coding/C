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
int main(void)
{
#ifndef _DEBUG
	FILE* inputfile=freopen("input.txt", "r", stdin);
	FILE* outputfile=freopen("output.txt", "w", stdout);
#endif
	char input[101];
	gets_s(input);
	for(int i=0;i<strlen(input);i++)
	{
		if(input[i]=='a' || input[i]=='h' || input[i]=='y')
		{
			
		}
		else
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
