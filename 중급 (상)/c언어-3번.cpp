#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int return_min(int x, int y, int n){
	//x==-1 || x==n
	int a, b;
	if((x+1)>(n-x)){
		a=n-x;
	}
	else{
		a=x+1;
	}
	if((y+1)>(n-y)){
		b=n-y;
	}
	else{
		b=y+1;
	}
	if(a>b){
		return b;
	}
	return a;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int input[n][n];
	int result=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &input[i][j]);
		}
	}
	//0->n-1
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			result+=(return_min(i, j, n)*input[i][j]);
		}
	}
	printf("%d", result);
	return 0;
}
