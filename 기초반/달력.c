#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b,n,c;
	do{
		printf("1���� ���������Դϱ�(�Ͽ���=0~�����=6)? ");
		scanf("%d",&a);
	}while(a<0 || a>6);
	printf("�� �����Դϱ�? ");
	scanf("%d",&b);
	printf("\n");
	printf("�� �� ȭ �� �� �� ��\n");
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
