#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b,c,d;
	printf("�� ���� ������ �Է��϶� ? ");
	scanf("%d %d",&a,&b);
	for(c=1;c<=9;c++){
		for(d=a;d<=b;d++){
			printf("%d*%d=%d\t",d,c,d*c);
		}
		printf("\n");
		
	}
	return 0;
}
