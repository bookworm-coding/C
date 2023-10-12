//20번 입니다 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int s(int a,int b){
	int c=1;
	int e=a*b;
	for(;c!=0;){
		c=a%b;
		a=b;
		b=c;
	}
	return e/a;
}
int main(){
	int n;
	scanf("%d",&n);
	int input[101];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	for(i=0;i<n;i++){
		input[i+1]=s(input[i],input[i+1]);
	}
	printf("%d",input[n-1]);

	return 0;
}
