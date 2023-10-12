#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>

bool prime(int n){
	for(int i=2;i<=ceil(sqrt(n));i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int find_prime(int n){
	int temp=5;
	int num=0;
	while(num!=n){
		if(prime(temp)){
			num++;
		}
		temp+=4;
	}
	return temp-4;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int k;
	scanf("%d", &k);
	printf("%d", find_prime(k));
	return 0;
}
