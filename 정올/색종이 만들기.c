#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
#include <time.h>
int input[128][128];
int num;
int white, blue;
int custom_log2(int n){
	int temp;
	while(n%2==0){
		n/=2;
		temp++;
	}
	return temp;
}
void cut(int n, int x, int y){
	int temp=7-log2(n);
	if(n==1){
		if(input[x][y]==0){
			white++;
		}
		else{
			blue++;
		}
		return;
	}
	int color=input[x][y];
	int a=1;
	for(int i=x;i<x+n;i++){
		for(int j=y;j<y+n;j++){
			if(input[i][j]!=color){
				a=0;
				break;
			}
		}
		if(a==0){
			break;
		}
	}
	if(a==1){
		if(color==1){
			blue++;
		}
		else{
			white++;
		}
		return;
	}
	cut(n/2, x, y);
	cut(n/2, x+n/2, y);
	cut(n/2, x, y+n/2);
	cut(n/2, x+n/2, y+n/2);
}
int main(void){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int i, j;
	int n;
	scanf("%d", &n);
	int temp=log2(n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &input[i][j]);
		}
	}
	cut(n,0,0);
	printf("%d\n%d", white, blue);
	return 0;
}

