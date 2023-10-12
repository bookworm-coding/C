//24번 입니다 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
void print(int n){
	int num[n][n];
	int time=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			num[i][j]=time;
			time++;
		}
	}
	for(int i=0;i<n;i++){
		if(i%2==0){
			for(int j=0;j<n;j++){
				printf("%d ", num[i][j]);
			}
		}
		else{
			for(int j=n-1;j>=0;j--){
				printf("%d ", num[i][j]);
			}
		}
		printf("\n");
	}
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
