#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b,c,d,e;
	printf("�Է�\n");
	scanf("%d %d",&a,&b);
	e=a*b;
	printf("���\n");
	for(;c!=0;){
		c=a%b;
		a=b;
		b=c;
	}
	d=e/a;
	printf("\n�ִ����� = %d\n�ּҰ���� = %d",a,d);
	return 0;
}
