#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char a[1000];
	char b,c;
	int i;
	printf("�߸��� ������ ���ڿ�? ");
	gets(a);
	printf("���ڿ����� �߸��� ���ڴ�? ");
	scanf("%c",&b);
	printf("�߸��� ���ڴ�� �ٲ��� ���ڴ�? ");
	scanf("%c",&c);
	printf("\n");
	for(i=0;i<strlen(a);i++){
		if(a[i]==b){
			a[i]=c;
		}
	}
	printf("�ùٸ� ������ ���ڿ� : %s",a);
	return 0;
}
