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
	int n;
	scanf("%d", &n);
	int x, y;
	int k=n;
	int data[n][n];
	for(int i=0;i<n;i++){
		x=i;
		y=0;
		while(x>=0 && y>=0 && x<n && y<n){
			data[x--][y++]=k++;
		}
	}
	for(int i=1;i<n;i++){
		x=n-1;
		y=i;
		while(x>=0 && y>=0 && x<n && y<n){
			data[x--][y++]=k++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ", data[i][j]);
		}
		printf("\n");
	}
	return 0;
}
