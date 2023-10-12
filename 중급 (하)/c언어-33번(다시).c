#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
int main(){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	char input[n][n+1];
	for(int i=0;i<n;i++){
		fflush(stdin);
		scanf("%s", input[i]);
	}
	
	return 0;
}
