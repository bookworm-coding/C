#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b,c,d;
	printf("두 개의 정수를 입력하라 ? ");
	scanf("%d %d",&a,&b);
	for(c=1;c<=9;c++){
		for(d=a;d<=b;d++){
			printf("%d*%d=%d\t",d,c,d*c);
		}
		printf("\n");
		
	}
	return 0;
}
