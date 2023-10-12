#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int data[20][20];
int result(int start, int n, int gx, int gy) {
	int x = 1;
	int y = 1;
	data[x][y] = start++;
	int way = 0;
	while (x != gx || y != gy) {
		way %= 4;
		if (way == 0) {
			y++;
		}
		else if (way == 1) {
			x++;
		}
		else if (way == 2) {
			y--;
		}
		else if (way == 3) {
			x--;
		}
		if (data[x][y] != 0) {
			if (way == 0) {
				y--;
			}
			if (way == 1) {
				x--;
			}
			if (way == 2) {
				y++;
			}
			if (way == 3) {
				x++;
			}
			way++;
		}
		else {
			data[x][y] = start++;
		}
	}
	return data[gx][gy];
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int startnum, n, x, y;
	scanf("%d", &startnum);
	scanf("%d", &n);
	scanf("%d", &x);
	scanf("%d", &y);
	for (int i = 0; i < n + 2; i++) {
		data[0][i] = 999;
		data[i][0] = 999;
		data[n + 1][i] = 999;
		data[i][n + 1] = 999;
	}
	printf("%d", result(startnum, n, x, y));

	return 0;
}
