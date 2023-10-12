#pragma warning(disable: 4996)
#pragma warning(disable: 6031)
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
inline int lis(vector<int> arr)
{
	int length[100000];
	int result = 0;
	for (int k = 0; k < arr.size(); k++) {
		length[k] = 1;
		for (int i = 0; i < k; i++) {
			if (arr[i] < arr[k]) {
				length[k] = max(length[k], length[i] + 1);
			}
		}
		result = max(result, length[k]);
	}
	return result;
}
int main()
{
#ifndef testing
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
#endif
	int n;
	scanf("%d", &n);
	vector<int> input;
	for(int i=0;i<n;i++)
	{
		int temp;
		scanf("%d", &temp);
		input.push_back(temp);
	}
	const auto a = lis(input);
	ranges::reverse(input);
	const auto b = lis(input);
	if(a > b)
	{
		printf("LEFT");
	}
	else if(b > a)
	{
		printf("RIGHT");
	}
	else
	{
		printf("IDGARA");
	}
	return 0;
}
