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
#define len 100
using namespace std;
void print(char text[], int start, int end, char last) {
	for (int i = start; i <= end; i++) {
		printf("%c", text[i]);
	}
	printf("%c", last);
}
int main(void) {
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
	char input[len];
	memset(input, '\0', sizeof(char) * len);
	gets_s(input, len);
	for (int i = (int)strlen(input) - 1; i >= 0; i--) {
		print(input, i, (int)strlen(input) - 1, ' ');
	}
	return 0;
}
