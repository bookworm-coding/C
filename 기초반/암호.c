#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char str1[16];
	printf("��й�ȣ�� �Է��ϼ��� : ");
	scanf("%s",str1);
	if(strcmp(str1,"abcdefg")==0){
		printf("��й�ȣ�� ��ġ�մϴ�.");
	}
	else{
		printf("Ʋ�� ��й�ȣ �Դϴ�");
	}
	return 0;
}
