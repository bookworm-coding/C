#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
	int age;
	float ki;
	char irum[20], ch;
	printf("****ģ���� ����****");
	do{
		printf("\n�̸� : "); scanf("%s", &irum);
		printf("���� : "); scanf("%d", &age);
		printf("Ű : "); scanf("%f", &ki);
		printf("�̸� : %s ���� : %d Ű : %.1f�Դϴ�.\n",irum,age,ki);
		printf("��� �ұ��(y/n)?");
		ch=getche();
	}while(ch=='y' || ch=='Y');
	return 0;
}
