#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int i=2;
	while(n!=1){
		if(n%i==0){
			printf("%d ", i);
			n/=i;
		}
		else{
			i++;
		}
	}
	return 0;
}
