#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char before[1000] = "";
	char after[1000] = "";
	char input;
	int n=-1;
	do{
		n=-1;
		printf("���� ���ڿ� : %s\n",before);
		printf("1)���� 2)�κ� ���� 3)�߰� 4)�κ� �߰� 5)����\n");
		
		do{
			if(n!=-1){
				printf("�߸� �ԷµǾ����ϴ�\n");
			}
			printf("��ȣ�� �Է��ϼ��� ? ");
			scanf("%d",&n);
		}while(n>=6 || n<1);
		if(n!=5){
			printf("���ڿ��� �Է��ϼ��� ? ");
			fflush(stdin);
			gets(after);

		}
		
		if(n==1){
			strcpy(before,after);
		}
		else if(n==2){
			printf("���ڸ� �Է��ϼ��� ? ");
			scanf("%d",&n);
			strncpy(before,after,n);
		}
		else if(n==3){
			strcat(before,after);
		}
		else if(n==4){
			printf("���ڸ� �Է��ϼ��� ? ");
			scanf("%d",&n);
			strncpy(after,after,n);
			strcat(before,after);
		}
		printf("\n");
	}while(n!=5);
	printf("���α׷��� �����մϴ�");
	return 0;
}
