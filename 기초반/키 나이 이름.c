#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
	int age;
	float ki;
	char irum[20], ch;
	printf("****친구들 정보****");
	do{
		printf("\n이름 : "); scanf("%s", &irum);
		printf("나이 : "); scanf("%d", &age);
		printf("키 : "); scanf("%f", &ki);
		printf("이름 : %s 나이 : %d 키 : %.1f입니다.\n",irum,age,ki);
		printf("계속 할까요(y/n)?");
		ch=getche();
	}while(ch=='y' || ch=='Y');
	return 0;
}
