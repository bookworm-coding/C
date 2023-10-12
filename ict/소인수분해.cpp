#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <algorithm>
void calc(int n){
	int i=2;
	while(n>1){
		if(n%i==0){
			printf("%d ", i);
			n/=i;
		}
		else{
			i++;
		}
	}
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	calc(n);
	return 0;
}
