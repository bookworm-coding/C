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
	scanf("%d", &x);
	scanf("%d", &y);
	int result[n][n];
	x--;
	y--;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i>x){
				result[i][j]=i-x;
			}
			else{
				result[i][j]=x-i;
			}
			if(j>y){
				result[i][j]+=j-y;
			}
			else{
				result[i][j]+=y-j;
			}
			result[i][j]++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%2d ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
