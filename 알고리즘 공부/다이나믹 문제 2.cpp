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
#include <sal.h>
#pragma warning(disable : 4996)
using namespace std;
int minnum(int a, int b) {
	if (a <= 0) {
		return b;
	}
	if (b <= 0) {
		return a;
	}
	return a > b ? b : a;
}
int main(void) {
	ignore=freopen("input.txt", "r", stdin);
	ignore=freopen("output.txt", "w", stdout);
	int n, m;
	int coin[100];
	int d[10000];
	ignore=scanf("%d", &n);
	ignore=scanf("%d", &m);
	for (int i = 0; i < n; i++) {
		ignore=scanf("%d", &coin[i]);
	}
	for (int i = 0; i <= m; i++) {
		if (i < coin[0]) {
			d[i] = 0;
		}
		else {
			for (int j = 0; j < n; j++) {
				if (d[i - coin[j]] < 0) {
					continue;
				}
				d[i] = minnum(d[i], d[i - coin[j]] + 1);
			}
		}
	}
	printf("%d", d[m]);
	return 0;
}
