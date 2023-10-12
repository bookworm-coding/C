#include <algorithm>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	int input[n+2][m+2];
	for(int i=0;i<n+2;i++){
		for(int j=0;j<m+2;j++){
			input[i][j]=0;
		}
	}
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			scanf("%d", &input[i][j]);
		}
	}
	int max=0;
	int temp=0;
	for(int i=1;i<n+1;i++){
		for(int j=1;j<m+1;j++){
			temp=0;
			for(int k=-1;k<=1;k++){
				for(int l=-1;l<=1;l++){
					temp+=input[i+k][j+l];
				}
			}
			if(temp>max){
				max=temp;
			}
		}
	}
	printf("%d", max);
	return 0;
}
