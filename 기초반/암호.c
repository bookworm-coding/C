#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char str1[16];
	printf("비밀번호를 입력하세요 : ");
	scanf("%s",str1);
	if(strcmp(str1,"abcdefg")==0){
		printf("비밀번호가 일치합니다.");
	}
	else{
		printf("틀린 비밀번호 입니다");
	}
	return 0;
}
