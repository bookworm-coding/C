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
		printf("현재 문자열 : %s\n",before);
		printf("1)복사 2)부분 복사 3)추가 4)부분 추가 5)종료\n");
		
		do{
			if(n!=-1){
				printf("잘못 입력되었습니다\n");
			}
			printf("번호를 입력하세요 ? ");
			scanf("%d",&n);
		}while(n>=6 || n<1);
		if(n!=5){
			printf("문자열을 입력하세요 ? ");
			fflush(stdin);
			gets(after);

		}
		
		if(n==1){
			strcpy(before,after);
		}
		else if(n==2){
			printf("숫자를 입력하세요 ? ");
			scanf("%d",&n);
			strncpy(before,after,n);
		}
		else if(n==3){
			strcat(before,after);
		}
		else if(n==4){
			printf("숫자를 입력하세요 ? ");
			scanf("%d",&n);
			strncpy(after,after,n);
			strcat(before,after);
		}
		printf("\n");
	}while(n!=5);
	printf("프로그램을 종료합니다");
	return 0;
}
