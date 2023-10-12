#include <algorithm>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
struct candy {
	int a, b, c;
};
bool compare(const candy c1, const candy c2) {
	double temp1 = (double)c1.b / (double)c1.a;
	double temp2 = (double)c2.b / (double)c2.a;
	return temp1 > temp2;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	struct candy candy[n];
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &candy[i].a, &candy[i].b, &candy[i].c);
	}
	sort(candy, candy + n, compare);
	double candynum[n] = { 0.0 };
	double money = 0;
	int i = 0;
	double mass = (double)m;
	while (mass > 0.0) {
		candynum[i] = (double)candy[i].c;
		mass -= (double)((double)candy[i].b * (double)candy[i].c);
		if (mass < 0.0) {
			mass += (double)((double)candy[i].b * (double)candy[i].c);
			candynum[i] = mass / (double)candy[i].b;
			mass = 0.0;
		}
		else {
			i++;
		}
	}
	for (int j = 0; j <= i; j++) {
		money += candynum[j] * (double)candy[j].a;
	}
	printf("%d", (int)ceil(money));
	return 0;
}
