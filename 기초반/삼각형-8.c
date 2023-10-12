#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,j,k;
	char l;
	char yn;
	do{
		l='A';
		printf("N? ");
		scanf("%d",&n);
		for(i=1;i<=2*n-1;i+=2){
			for(k=1;k<=2*n-1-i;k+=2){
				printf(" ");
			}
			for(j=1;j<=i;j++){
				printf("%c",l);
				if(l=='Z'){
					l='A';
				}
				else{
					l++;
				}
				
			}
			printf("\n");
		}
		printf("다시 실행하겠습니까?(Y/N) ");
		scanf(" %c",&yn);
	}while(yn=='Y');
	
	return 0;
}
