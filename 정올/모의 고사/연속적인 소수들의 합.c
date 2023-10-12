#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
#include <time.h>
int prime[3000];
int findprime(int n){
	int time=0;
	for(int i=2;i<=n;i++){
		bool boolen=true;
		for(int j=0;j<time;j++){
			if(i%prime[j]==0){
				boolen=false;
			}
		}
		if(boolen){
			prime[time]=i;
			time++;
		}
	}
	return time;
}
int main(void){
	int i, j, k;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int num=findprime(n);
	int result=0;
	int temp;
	for(i=1;i<=num;i++){
		for(j=0;j+i<num;j++){
			temp=0;
			for(k=j;k<j+i;k++){
				temp+=prime[k];
			}
			if(temp==n){
				result++;
				break;
			}
		}
	}
	for(i=0;i<num;i++){
		if(prime[i]==n){
			result++;
		}
	}
	printf("%d", result);
	return 0;
}
