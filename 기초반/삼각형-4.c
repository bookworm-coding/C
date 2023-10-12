#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,j,k;
	char yn;
	do{
		printf("N? ");
		scanf("%d",&n);
		for(i=n;i>=1;i--){
			for(k=1;k<=n-i;k++){
				printf(" ");
			}
			for(j=i;j>=1;j--){
				printf("*");
			}
			printf("\n");
		}
		printf("다시 실행하겠습니까?(Y/N) ");
		scanf(" %c",&yn);
	}while(yn=='Y');
	
	return 0;
}
