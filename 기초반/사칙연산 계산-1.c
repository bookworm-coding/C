#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
	float a,b;
	char c;
	printf("ù ��° ���� ? ");
	scanf("%f", &a);
	printf("�� ��° ���� ? ");
	scanf("%f", &b);
	printf("���ϴ� ������? ");
	scanf(" %c", &c);
	if(c=='+'){
		printf("���� %.1f�Դϴ�.",a+b);
	}
	else if(c=='-'){
		printf("���� %.1f�Դϴ�.",a-b);
	}
	else if(c=='*'){
		printf("���� %.1f�Դϴ�.",a*b);
	}
	else if(c=='/'){
		printf("���� %.1f�Դϴ�.",a/b);
	}
	return 0;
}
