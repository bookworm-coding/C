#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
int calc(int h, int w, int n){
	int floor=n%h;
	if(floor==0){
		floor=h;
	}
	floor*=100;
	int num=n/h;
	if(num!=w){
		num++;
	}
	return floor+num;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int num;
	scanf("%d",&num);
	int h, w, n;
	for(int i=0;i<num;i++){
		scanf("%d %d %d", &h, &w, &n);
		printf("%d\n", calc(h, w, n));
	}
	return 0;
}
