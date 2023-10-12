#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
long long int min,max;
void calc(long long int n){
	max=(n+1)/2;
	min=(n+2)/3;
	return;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout); 
	long long int n;
	scanf("%lld",&n);
	calc(n);
	printf("%lld %lld",max,min);
	return 0;
} 
