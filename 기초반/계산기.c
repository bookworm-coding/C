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
		printf("연산을 입력하시오: ");
		scanf("%d %c%d",&a,&m,&b);
		c=math(a,m,b);
	}
	return 0;
}
int math(int a,char m,int b){
	int result;
	if(m=='+'){
		result=a+b;
		printf("연산 결과: %d\n",result);
		printf("덧셈은 총 %d번 실행되었습니다.\n\n",++m1);
	}
	else if(m=='-'){
		result=a-b;
		printf("연산 결과: %d\n",result);
		printf("뺄셈은 총 %d번 실행되었습니다.\n\n",++m2);
	}
	else if(m=='*'){
		result=a*b;
		printf("연산 결과: %d\n",result);
		printf("곱셈은 총 %d번 실행되었습니다.\n\n",++m3);
	}
	else if(m=='/'){
		result=a/b;
		printf("연산 결과: %d\n",result);
		printf("나눗셈은 총 %d번 실행되었습니다.\n\n",++m4);
	}
	else{
		printf("프로그램을 종료합니다.");
		return 1;
	}
	return 0;
}
