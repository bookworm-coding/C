#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <math.h>
#include <random>
#include <stack>
#include <queue>
#include <vector>
#pragma warning(disable : 4996)
using namespace std;
int arr[22][22] = { 0 };
int result = 0;
void function(int col, int row){
	if (arr[col][row] ==0) {
		arr[col][row] = 2;
		result++;
		function(col + 1, row);
		function(col - 1, row);
		function(col, row + 1);
		function(col, row - 1);
		return;
	}
	else {
		return;
	}

}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	for (int i = 0; i < 22; i++) {
		memset(arr[i], 1, sizeof(int) * 22);
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	function(x, y);
	printf("%d", result);
	return 0;
}
