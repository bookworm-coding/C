//#include <algorithm>
//using namespace std;
#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
int input[1000][1000];
int result[1000][1000];
int k;
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
char printer[1000];
int nd;
void print(int i, int j) {
	if (i == 1 || j == 1) {
		printer[nd] = '\0';
		return;
	}
	if (result[i - 1][j] < result[i][j - 1]) {
		printer[nd++] = 'R';
		print(i, j - 1);
	}
	else {
		printer[nd++] = 'D';
		print(i - 1, j);
	}
	return;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &input[i][j]);
			result[i][j] = input[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			result[i][j] = max(result[i - 1][j], result[i][j - 1]) + input[i][j];
		}
	}
	printf("%d\n", result[n][n]);
	print(n, n);
	for (int i = nd; i >= 0; i--) {
		printf("%c\n", printer[i]);
	}
	return 0;
}
