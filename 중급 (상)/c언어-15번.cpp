#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);
	int input[100][100];
	char temp[100];
	for (int i = 0; i < m; i++) {
		scanf("%s", temp);
		for (int j = 0; j < n; j++) {
			input[i][j] = temp[j] - '0';
		}
	}
	for (int i = m-1; i>=0; i--) {
		for (int j = n-1; j>=0; j--) {
			if(input[i][j]==0){
				for(int k=i;k>=0;k--){
					if(input[k][j]==1){
						input[k][j]=0;
						input[i][j]=1;
						break;
					}
				}
			}
		}
	}
	bool check;
	int i=m-1;
	while(i>=0){
		check=true;
		for (int j = 0; j<n; j++) {
			if(input[i][j]==0){
				check=false;
				break;
			}
		}
		if(check){
			for(int j=i-1;j>=1;j--){
				for(int k=0;k<n;k++){
					input[j+1][k]=input[j][k];
				}
			}
			for(int k=0;k<n;k++){
				input[0][k]=0;
			}
		}
		else{
			i--;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d", input[i][j]);
		}
		printf("\n");
	}
	return 0;
}
