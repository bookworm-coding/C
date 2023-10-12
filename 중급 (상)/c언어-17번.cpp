#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int len_of_2(int n){
	int i=0;
	while(n>0){
		n/=2;
		i++;
	}
	return i;
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int i=1;
	int len=len_of_2(n);
	int result[len];
	for(i=0;i<len;i++){
		result[i]=n%2;
		n/=2;
	}
	for(int i=len-1;i>=0;i--){
		if(result[i]==1){
			printf("%d ", len-i);
		}
	}
	return 0;
}
