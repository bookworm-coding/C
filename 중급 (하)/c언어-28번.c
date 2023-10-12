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
	char input[501];
	scanf("%s", input);
	for(int i=0;i<strlen(input);i++){
		if(input[i]-'A'<n){
			input[i]=91+input[i]-'A';
		}
		input[i]-=n;
	}
	printf("%s", input);
	return 0;
}
