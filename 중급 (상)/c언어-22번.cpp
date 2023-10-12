#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int input[500][500];
void function(int num, int x, int y, int n, bool way/*true 면 오른쪽+왼쪽아래 대각선, false 면 아래+오른쪽 위 대각선*/) {
	if (x >= n - 1 && y >= n - 1) {
		return;
	}
	if (way) {
		input[x++][y] = num++;
		if (x >= n) {
			x--;
			y++;
			input[x--][y++] = num++;
		}
		else {
			input[x--][y++] = num++;
		}
		if (x >= 0 && y >= 0 && x < n && y < n) {
			for (; x >= 0 && y >= 0 && y < n && x < n; x--, y++, num++) {
				input[x][y] = num;
			}
			num--;
			x++;
			y--;
		}
		function(num, x, y, n, false);
	}
	else {
		input[x][y++] = num++;
		if (y >= n) {
			x++;
			y--;
			input[x++][y--] = num++;
		}
		else {
			input[x++][y--] = num++;
		}
		if (x >= 0 && y >= 0 && y < n && x < n) {
			for (; x >= 0 && y >= 0 && y < n && x < n; x++, y--, num++) {
				input[x][y] = num;
			}
			num--;
			x--;
			y++;
		}
		function(num, x, y, n, true);
	}
	return;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	function(1, 0, 0, n, false);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", input[i][j]);
		}
		printf("\n");
	}
	return 0;
}
