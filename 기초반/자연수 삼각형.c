#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,j,k,l,m,o;
	char yn;
	do{
		m=1;
		printf("N? ");
		scanf("%d",&n);
		for(i=n,l=1;i>=1,l<=n;i--,l++){
			for(j=i;j>=1;j--){
				printf(" ");
			}

			for(o=m;o<=m*2-1;o++){
				printf("%d",o);
			}
			for(o=m*2-2;o>=m;o--){
				printf("%d",o);
			}
			
			printf("\n");
			m++;
		}
		printf("다시 실행하겠습니까?(Y/N) ");
		scanf(" %c",&yn);
	}while(yn=='Y');
	
	return 0;
}
