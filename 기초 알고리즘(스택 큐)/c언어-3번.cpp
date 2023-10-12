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
void print(vector<int> v)
{
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==-1)
		{
			printf("  ");
		}
		else
		{
			printf("%d ", v[i]);
		}
	}
	printf("\n");
	return;
}
int main(void)
{
#ifndef testing
	FILE* inputfile=freopen("input.txt", "r", stdin);
	FILE* outputfile=freopen("output.txt", "w", stdout);
#endif
	printf("Queue size =? ");
	int size;
	scanf("%d " , &size);
	vector<int> v (size, -1);
	auto insert_place = 0;
	auto delete_place = 0;
	while(true)
	{
		char input[10];
		memset(input, '\0', sizeof(char) * 10);
		scanf("%s",input);
		if(strcmp(input, "remove")==0)
		{
			if(v[delete_place%size] == -1)
			{
				puts("Underflow");
			}
			else
			{
				v[delete_place % size] = -1;
				delete_place++;
				print(v);
			}
		}
		else if(strcmp(input, "insert")==0)
		{
			int d;
			scanf("%d", &d);
			if(v[insert_place%size]!=-1)
			{
				puts("Overflow");
			}
			else
			{
				v[insert_place % size] = d;
				insert_place++;
				print(v);
			}
		}
		else if(strcmp(input, "exit")==0)
		{
			puts("Bye.");
			break;
		}
	}
#ifndef testing
	fclose(outputfile);
	fclose(inputfile);
#endif
	return 0;
}
