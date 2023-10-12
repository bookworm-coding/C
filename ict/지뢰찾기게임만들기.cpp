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
	bool bomb[n+2][n+2];
	for(int i=0;i<n+2;i++){
		for(int j=0;j<n+2;j++){
			bomb[i][j]=false;
		}
	}
	for(int i=0;i<m;i++){
		int temp1, temp2;
		scanf("%d", &temp1);
		scanf("%d", &temp2);
		bomb[temp1][temp2]=true;
	}
	
	int k;
	scanf("%d", &k);
	
	for(int i=0;i<k;i++){
		int temp1, temp2;
		scanf("%d", &temp1);
		scanf("%d", &temp2);
		int temp3=0;
		if(bomb[temp1][temp2]){
			printf("BOMB");
			return 0;
		}
		for(int i=-1;i<=1;i++){
			for(int j=-1;j<=1;j++){
				if(bomb[temp1+i][temp2+j]==true){
					temp3++;
				}
			}
		}
		printf("%d", temp3);
	}
	return 0;
}
