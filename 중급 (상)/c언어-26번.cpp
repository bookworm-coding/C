#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int input[500][500];
void function(int n) {
	int x = 0;
	int y = 0;
	int num = n;
	while(x<n && y<n){
		int startx = x;
		int starty = y;
		for (; x >= 0 && y >= 0 && y < n && x < n; x--, y++) {
			input[x][y] = num++;
		}
		if (startx + 1 == n) {
			x = startx;
			y = starty + 1;
		}
		else {
			x = startx + 1;
			y = starty;
		}
	}
	return;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	function(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", input[i][j]);
		}
		printf("\n");
	}
	return 0;
}
