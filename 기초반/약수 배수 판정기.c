#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b;
	printf("<�Է�>\n");
	scanf("%d %d",&a,&b);
	printf("<���>\n");
	if(a%b==0){
		printf("'%d'�� '%d'�� ����̴�.",a,b);
	}
	else if(b%a==0){
		printf("'%d'�� '%d'�� ����̴�",a,b);
	}
	else{
		printf("'%d'�� '%d'�� �ƹ� ���赵 ����.",a,b);
	}
	return 0;
}
