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
	if(n%2==0){
		printf("ERROR");
	}
	else{
		for(int i=1;i<=n;i++){
			for(int j=0;j<i;j++){
				printf("@");
			}
			printf("\n");
		}
	}
	return 0;
}
