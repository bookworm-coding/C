#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b,c,d,e;
	printf("입력\n");
	scanf("%d %d",&a,&b);
	e=a*b;
	printf("출력\n");
	for(;c!=0;){
		c=a%b;
		a=b;
		b=c;
	}
	d=e/a;
	printf("\n최대공약수 = %d\n최소공배수 = %d",a,d);
	return 0;
}
