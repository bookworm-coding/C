#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
char inputchar[800000000];
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	int num;
	scanf("%d", &n);
	scanf("%d", &num);//n은 최대 일억
	int i = 0;
	int result = 0;
	for (i = 1; i <= n; i++) {
		sprintf(inputchar, "%s%d", inputchar, i);
	}
	for (int j = 0; j < strlen(inputchar); j++) {
		if (inputchar[j] == num / 10 + '0' && inputchar[j + 1] == num % 10 + '0') {
			result++;
		}
	}
	printf("%d", result);
	return 0;
}
