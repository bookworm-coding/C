#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int m1,m2,m3,m4;
int math(int,char,int); 
int main(void){
	int a;
	char m;
	int b;
	int c=0;
	int result;
	while(c==0){
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d %c%d",&a,&m,&b);
		c=math(a,m,b);
	}
	return 0;
}
int math(int a,char m,int b){
	int result;
	if(m=='+'){
		result=a+b;
		printf("���� ���: %d\n",result);
		printf("������ �� %d�� ����Ǿ����ϴ�.\n\n",++m1);
	}
	else if(m=='-'){
		result=a-b;
		printf("���� ���: %d\n",result);
		printf("������ �� %d�� ����Ǿ����ϴ�.\n\n",++m2);
	}
	else if(m=='*'){
		result=a*b;
		printf("���� ���: %d\n",result);
		printf("������ �� %d�� ����Ǿ����ϴ�.\n\n",++m3);
	}
	else if(m=='/'){
		result=a/b;
		printf("���� ���: %d\n",result);
		printf("�������� �� %d�� ����Ǿ����ϴ�.\n\n",++m4);
	}
	else{
		printf("���α׷��� �����մϴ�.");
		return 1;
	}
	return 0;
}
