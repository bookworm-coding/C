#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i;
	char id[30];
	char pw[30];
	char phone[15];
	char iid[30];
	char ipw[30];
	char iphone[15];
	do{
		printf("1)회원가입 2)로그인 3)아이디 비밀번호 찾기 4)나가기\n번호를 입력하시오? ");
		scanf("%d",&i);
		if(i==1){
			printf("회원가입\n");
			printf("아이디 = ");
			scanf("%s",id);
			printf("비밀번호 = ");
			scanf("%s",pw);
			printf("전화번호 = (-포함)");
			scanf("%s",phone);
		}
		if(i==2){
			printf("로그인\n");
			printf("아이디 = ");
			scanf("%s",iid);
			printf("비밀번호 = ");
			scanf("%s",ipw);
			if(strcmp(iid,id)==0 && strcmp(ipw,pw)==0){
				printf("로그인 되었습니다\n");
			}
			else if(strcmp(iid,id)==0){
				printf("비밀번호가 틀렸습니다. 다시 입력하시오!\n");
			}
			else if(strcmp(ipw,pw)==0){
				printf("아이디가 틀렸습니다. 다시 입력하시오!\n");
			}
			else{
				printf("모두 틀렸습니다 회원가입을 하거나 아이디/비밀번호를 찾으시오\n");
			}
		}
		if(i==3){
			printf("아이디 비밀번호 찾기\n");
			printf("전화번호 : ");
			scanf("%s",iphone);
			if(strcmp(phone,iphone)==0){
				printf("아이디 : %s\n",id);
				printf("비밀번호 : %s\n",pw);
			}
		}
	}while(i!=4);

	return 0;
}
