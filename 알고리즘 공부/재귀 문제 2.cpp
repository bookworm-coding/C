#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <math.h>
#include <random>
#include <stack>
#include <queue>
#include <vector>
#pragma warning(disable : 4996)
using namespace std;
struct num {
	int n[3];
	int len;
};
struct num split(int n) {
	struct num result;
	result.n[0] = 0;
	result.n[1] = 0;
	result.n[2] = 0;
	int i = 0;
	while (n != 0) {
		result.n[i] = n % 10;
		n /= 10;
		i++;
	}
	result.len = i;
	return result;
}
int calc(int n, int i) {
	struct num cut = split(n);
	if (n / 10 == 0) {
		return i;
	}
	int result = 1;
	for (int i = 0; i < cut.len; i++) {
		result *= cut.n[i];	
	}
	if (split(result).len == 0 || split(result).len == 1) {
		return i + 1;
	}
	else {
		return calc(result, i + 1);
	}
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int p1, p2, n;
	scanf("%d", &p1);
	scanf("%d", &p2);
	scanf("%d", &n);
	vector<int> v;
	for (int i = p1; i <= p2; i++) {
		if (calc(i, 0) == n) {
			v.push_back(i);
		}
	}
	printf("%d\n", (int)v.size());
	for (vector<int>::size_type i = 0; i < v.size(); ++i) {
		printf("%d\n", v[i]);
	}
	return 0;
}
