#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
	float a,b;
	char c,d;
	do{
		printf("ù ��° ���� ? ");
		scanf("%f", &a);
		printf("�� ��° ���� ? ");
		scanf("%f", &b);
		c=' ';
		while(c!='+' && c!='-' && c!='*' && c!='/'){
			printf("���ϴ� ������? ");
			scanf(" %c", &c);
		}
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
		printf("\n����ұ���((y/n)? ");
		scanf(" %c",&d);
	}while(d=='y');
	
	return 0;
}
