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
	char input[n+1];
	scanf("%s", input);
	int result=0;
	for(int i=0;i<n;i++){
		if(input[i]=='k' && input[i+1]=='h' && input[i+2]=='a' && input[i+3]=='z' && input[i+4]=='i' && input[i+5]=='x'){
			result++;
		}
	}
	printf("%d", result);
	return 0;
}
