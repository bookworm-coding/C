#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <algorithm>
using namespace std;
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
	int num=(n-3)/2;
	for(int i=0;i<num;i++){
		printf("*");
		for(int j=0;j<num;j++){
			printf(" ");
		}
		printf("*");
		for(int j=0;j<num;j++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(int i=0;i<n;i++){
		printf("*");
	}
	printf("\n");
	for(int i=0;i<num;i++){
		printf("*");
		for(int j=0;j<num;j++){
			printf(" ");
		}
		printf("*");
		for(int j=0;j<num;j++){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for(int i=0;i<n;i++){
		printf("*");
	}
	return 0;
}
