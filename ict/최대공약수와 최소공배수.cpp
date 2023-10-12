#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <algorithm>
using namespace std;
long long int calc(long long int a, long long int b) {
	long long int temp = 100;
	while (temp != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	long long int sum = a * b;
	long long int temp = calc(a, b);
	printf("%lld %lld", temp, sum / temp);
	return 0;
}
