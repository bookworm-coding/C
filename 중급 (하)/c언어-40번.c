#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	if(n==1){
		printf("NO");
		return 0;
	}
	for(int i=2;i<=ceil(sqrt(n));i++){
		if(n%i==0){
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
