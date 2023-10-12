//25번 입니다 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
void print(int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<(2*n-1)-(i+1)-2;j++){
			printf(" ");
		}
		for(int j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
