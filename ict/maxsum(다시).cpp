//#include <algorithm>
//using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
int input[100000];
int result[100000][100000];
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &input[i]);
		for (int j = 0; j <= i; j++) {
			for (int k = j; k < n; k++) {
				result[j][k] += input[i];
			}
		}
	}
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (result[i][j] > max) {
				max = result[i][j];
			}
		}
	}
	printf("%d", max);
	return 0;
}
