#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b;
	printf("하나의 정수를 입력하라 ? ");
	scanf("%d",&a);
	for(b=1;b<=9;b++){
		printf("%d*%d=%d\n",a,b,a*b);
	}
	return 0;
}
