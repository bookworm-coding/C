#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int calc(int sx, int sy, int x, int y){
	return abs(sx-x)+abs(sy-y);
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int result=0;
	int bx, by, nx, ny;
	bx=0;
	by=0;
	for(int i=0;i<n;i++){
		scanf("%d", &nx);
		scanf("%d", &ny);
		result+=calc(bx, by, nx, ny);
		bx=nx;
		by=ny;
	}
	printf("%d", result);
	return 0;
}
