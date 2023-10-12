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
	int n, m;
	scanf("%d %d", &n, &m);
	int input[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d", &input[i][j]);
		}
	}
	int big=0;
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			temp=0;
			for(int k=-1;k<=1;k++){
				for(int l=-1;l<=1;l++){
					if(i+k>=0 && j+l>=0 && i+k<n && j+l<m){
						temp+=input[i+k][j+l];
					}
				}
			}
			if(temp>big){
				big=temp;
			}
		}
	}
	printf("%d", big);
	return 0;
}
