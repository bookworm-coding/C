#define _USE_MATH_DEFINES
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdbool>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector>
#include <ctime>
#include <tuple>
#pragma warning(disable : 4996)
using namespace std;
int main(void) {
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
	int input;
	ignore=scanf("%d", &input);
	double temp = (double)input/10.0;
	printf("%d\n", (int)round(temp) * 10);
	temp = (double)input / 100.0;
	printf("%d\n", (int)round(temp) * 100);
	temp = (double)input / 1000.0;
	printf("%d\n", (int)round(temp) * 1000);
	return 0;
	return 0;
}
