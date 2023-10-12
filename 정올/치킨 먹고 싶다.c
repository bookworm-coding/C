#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

struct input{
	int p,m,f,c;
};

struct data{
	int coupon, money, chicken, temp;
};

int calc(int p, int m, int f, int c){
	long long cnt = 0;
    long long coup = m / p * c / f * c + m / p * c % f;
	while (coup >= f) {
		cnt += coup / f;
		coup = coup / f * c + coup % f;
	}
	return cnt;
}

int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	struct input input[20000];
	int i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d", &input[i].p, &input[i].m, &input[i].f, &input[i].c);
		printf("%d\n",calc(input[i].p, input[i].m, input[i].f, input[i].c));
	}
	return 0;
}
