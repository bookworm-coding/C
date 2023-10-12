#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <algorithm>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
using namespace std;
void calc(int n) {
	int result[17][17];
	int way = 1;//1은 아래, 2는 오른쪽, 3은 위로, 4는 왼쪽 
	for (int i = 0; i < n + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			result[i][j] = 0;
		}
	}
	result[n + 1][1] = 1;
	result[n][n + 1] = 1;
	result[0][n] = 1;
	int time = 1;
	int now_x = 1;
	int now_y = 1;
	int n2 = n * n;
	while (true) {
		if (time == n2 + 1) {
			break;
		}
		if (way > 4) {
			way -= 4;
		}
		if (way == 1) {
			if (result[now_x][now_y] == 0) {
				result[now_x][now_y] = time;
				time++;
				now_x++;
			}
			else {
				way++;
			}
		}
		if (way == 2) {
			if (result[now_x][now_y] == 0) {
				result[now_x][now_y] = time;
				time++;
				now_y++;
			}
			else{
				way++;
			}
		}
		if (way == 3) {
			if (result[now_x][now_y] == 0) {
				result[now_x][now_y] = time;
				time++;
				now_x--;
				continue;
			}
			else {
				way++;
			}
		}
		if (way == 4) {
			if (result[now_x][now_y] == 0) {
				result[now_x][now_y] = time;
				time++;
				now_y--;
			}
			else {
				way++;
			}
		}
	}
	for (int i = 0; i < n + 2; i++) {
		for (int j = 0; j < n + 2; j++) {
			printf("%2d ", result[j][i]);
		}
		printf("\n");
	}
}
int main() {
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n;
	scanf("%d", &n);
	calc(n);
	return 0;
}
