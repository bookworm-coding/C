#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//#include "costom.h"
#define _USE_MATH_DEFINES
#include <math.h>
char input[10000][101];
void read(int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<101;j++){
			if(input[j][i]==' '||input[j][i]=='\0'){
				continue;
			}
			printf("%c",input[j][i]);
		}
	}
	return;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<=n;i++){
		gets(input[i]);
	}
	read(n);
	return 0;
} 
