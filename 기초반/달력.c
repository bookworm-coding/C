#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b,n,c;
	do{
		printf("1일은 무슨요일입니까(일요일=0~토요일=6)? ");
		scanf("%d",&a);
	}while(a<0 || a>6);
	printf("총 몇일입니까? ");
	scanf("%d",&b);
	printf("\n");
	printf("일 월 화 수 목 금 토\n");
	for(c=1;c<=a;c++){
		printf("   ");
	}
	printf(" ");
	for(n=0;n<=b;n++){
		if((n+a)%7==0){
			printf("\n");
		}
		printf("%d ",n+1);
		if((n+1)<10){
			printf(" ");
		}
	}
	
	return 0;
}
