#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
struct locate{
	int x,y;
};
void calc(int n, int x, int y){
	int result[n][n];
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			result[i][j]=1;
			if(i>x){
				result[i][j]+=(i-x);
			}
			else{
				result[i][j]+=(x-i);
			}
			if(j>y){
				result[i][j]+=(j-y);
			}
			else{
				result[i][j]+=(y-j);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%2d ", result[i][j]);
		}
		printf("\n");
	}
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int x,y;
	int n;
	scanf("%d", &n);
	scanf("%d %d", &x, &y);
	x--;
	y--;
	int i,j;
	calc(n, x, y);
	return 0;
} 
