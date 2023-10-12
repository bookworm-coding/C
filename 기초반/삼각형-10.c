#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,j,k,l,m=0;
	char yn;
	do{
		printf("N? ");
		scanf("%d",&n);
		for(i=n,l=0;i>=1,l<=n;i--,l++){
			if(l!=0){
				for(m=1;m<=l;m++){
					printf("*");
				}
			}
			
			printf(" ");
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
