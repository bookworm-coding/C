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
	int n, m;
	scanf("%d %d", &n, &m);
	char input[m][n+1];
	for(int i=0;i<m;i++){
		scanf("%s", input[i]);
	}
	int star=0;
	int at=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(input[i][j]=='*'){
				star++;
				input[i][j]='#';
			}
			else{
				at++;
				input[i][j]='&';
			}
		}
	}
	printf("%d %d\n", star, at);
	for(int i=0;i<m;i++){
		printf("%s\n", input[i]);
	}
	return 0;
}
