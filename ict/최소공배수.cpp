#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <algorithm>
long long int calcnum(long long int a, long long int b){
	long long int temp = 100;
	long long int sum=a*b;
	while (temp!=0) {
		temp=a%b;
		a=b;
		b=temp;
	}
	return sum/a;
}
long long int calc(long long int n, long long int input[]){
	for(int i=1;i<n;i++){
		input[i]=calcnum(input[i-1], input[i]);
	}
	return input[n-1];
}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long int n;
	scanf("%lld", &n);
	long long int input[n];
	for(long long int i=0;i<n;i++){
		scanf("%lld", &input[i]);
	}
	printf("%lld", calc(n, input)); 
	return 0;
}
