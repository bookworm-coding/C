#include <algorithm>
#pragma warning(disable:4996)
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
char inputchar[101];
struct select {
	int start, end;
};

void change(int start, int end) {
	if (start > end) {
		int tempint = start;
		start = end;
		end = tempint;
	}
	char temp[101];
	strcpy(temp, inputchar);
	for (int i = start, j = end; i <= end && j >= start; i++, j--) {
		inputchar[j] = temp[i];
	}
	return;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	fflush(stdin);
	scanf("%s", inputchar);
	int num;
	scanf("%d", &num);
	struct select input[100];
	char temp[101];
	for (int i = 0; i < num; i++) {
		scanf("%d %d", &input[i].start, &input[i].end);
		input[i].start--;
		input[i].end--;
		change(input[i].start, input[i].end);
	}
	printf("%s\n", inputchar);
	return 0;
}
