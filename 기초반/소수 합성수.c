#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int input;
void prime(void); 
int main(void){
	printf("정수를 입력하시오: ");
	scanf("%d",&input);
	prime();
	return 0;
}
void prime(void){
	int i;
	int j=0;
	for(i=2;i<input;i++){
		if(input%i==0){
			j=1;
		}
	}
	if(j==1){
		printf("%d는 합성수(소수가 아닌 수) 입니다",input);
	}
	else{
		printf("%d는 소수 입니다",input);
	} 
}
