#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char a[1000];
	char b,c;
	int i;
	printf("잘못된 보내는 문자열? ");
	gets(a);
	printf("문자열에서 잘못된 문자는? ");
	scanf("%c",&b);
	printf("잘못된 문자대신 바꿔질 문자는? ");
	scanf("%c",&c);
	printf("\n");
	for(i=0;i<strlen(a);i++){
		if(a[i]==b){
			a[i]=c;
		}
	}
	printf("올바른 보내는 문자열 : %s",a);
	return 0;
}
