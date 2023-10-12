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
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);
	int input[n][m];
	int min=10000000;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &input[i][j]);
			if(input[i][j]<min){
				min=input[i][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(input[i][j]<k+min+1){
				input[i][j]=-1;
			}
			printf("%d ", input[i][j]);
		}
		printf("\n");
	}
	return 0;
}
