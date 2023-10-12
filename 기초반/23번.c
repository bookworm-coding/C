#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
void print(int n){
	int a=(n-3)/2;
	int i;
	int h;
	int b=(n-1)/2;
	for(h=0;h<b;h++){
		for(i=0;i<n;i++){
			printf("*");
		}
		printf("\n");
		int j=0;
		int k=0;
		for(i=0;i<n;i++){
			if(k==0){
				printf("*");
				k=1;
			}
			else{
				for(j=0;j<a;j++){
					printf(" ");
				}
				k=0;
			}
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		printf("*");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
	

