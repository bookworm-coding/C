#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
char check(int n){
	int result=0;
	for(int i=1;i<n;i++){
		result+=i;
	}
	int result2=0;
	for(int i=n+1;result2<result;i++){
		result2+=i;
	}
	if(result2==result){
		return 'O';
	}
	else{
		return 'X';
	}
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	printf("%c", check(n));
	return 0;
}
