#include <algorithm>
#pragma warning(disable:4996)
#pragma warning(disable:6031)
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	//최대 22자리
	int result[22] = { 0 };
	int i = 0;
	while (n != 0) {
		if (n % 2 == 0) {
			result[i] = 0;
		}
		else {
			result[i] = 1;
		}
		n /= 2;
		i++;
	}
	int temp = 0;
	bool a=true;
	for (i = 21; i >= 0; i--) {
		if (result[i] == 1) {
			printf("%d ", temp-i);
			a = false;
		}
		else if(a){
			temp = i;
		}
	}
	return 0;
}
