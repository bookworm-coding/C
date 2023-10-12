#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,j,k;
	printf("N? ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(k=n-1;k>=i;k--){
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	return 0;
}
