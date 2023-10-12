#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n,i,j,k,l;
	char yn;
	do{
		l=1;
		printf("N? ");
		scanf("%d",&n);
		for(i=1;i<=n;i+=2){
			for(k=1;k<=n-i;k+=2){
				printf("  ");
			}
			for(j=1;j<=i;j++){
				printf("%d ",l);
				l++;
			}
			printf("\n");
		}
		for(i=n-2;i>=1;i-=2){
			for(k=1;k<=n-i;k+=2){
				printf("  ");
			}
			for(j=i;j>=1;j--){
				if(n>=5){
					printf("%d",l);
				}
				else{
					printf("%d ",l);
				}
				
				l++;
			}
			printf("\n");
		}
		printf("다시 실행하겠습니까?(Y/N) ");
		scanf(" %c",&yn);
	}while(yn=='Y');
	
	return 0;
}
