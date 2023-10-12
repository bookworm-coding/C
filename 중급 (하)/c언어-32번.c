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
	for(int i=1;i<n+2;i++){
		for(int j=0;j<n-i+1;j++){
			printf(" ");
		}
		for(int j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(int i=n;i>=1;i--){
		for(int j=0;j<n-i+1;j++){
			printf(" ");
		}
		for(int j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
