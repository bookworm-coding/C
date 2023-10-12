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
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	int max;
	if(a>b){
		max=a;
	}
	else{
		max=b;
	}
	for(int i=1;i<=max;i++){
		if(a%i==0 || b%i==0){
			printf("%d ", i);
		}
	}
	return 0;
}
