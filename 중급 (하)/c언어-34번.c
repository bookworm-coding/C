#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	for(int i=n/2+1;i>0;i--){
		for(int j=0;j<i;j++){
			if(i==n/2+1 && j==i-1){
				continue;
			}
			printf("*");
		}
		for(int j=0;j<n-i*2;j++){
			printf(" ");
		}
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2;i<=n/2+1;i++){
		for(int j=0;j<i;j++){
			if(i==n/2+1 && j==i-1){
				continue;
			}
			printf("*");
		}
		for(int j=0;j<n-i*2;j++){
			printf(" ");
		}
		for(int j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
