#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector> 
#pragma warning(disable:4996)
using namespace std;
void print(vector<int> data) {
	vector<int>::size_type len = data.size();
	for (vector<int>::size_type i = 0; i < len; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
	return;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	vector<int> input;
	input.reserve(n);
	vector<int> sorted;
	sorted.reserve(n);
	vector<int> result;
	result.reserve(n);
	for (int i = 0; i < n; i++) {
		int temp;
		scanf("%d", &temp);
		input.push_back(temp);
		sorted.push_back(temp);
		//sorted[i] = input[i];
	}
	sort(sorted.begin(), sorted.end());
	print(input);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (input.at(i) == sorted.at(j)) {
				printf("%2d ", j+1);
				break;
			}
		}
	}
	return 0;
}
