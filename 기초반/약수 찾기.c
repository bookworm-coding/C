#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int input;
void get_divisor(void); 
void main(void){
	printf("정수를 입력하시오: ");
	scanf("%d",&input);
	get_divisor();
}
void get_divisor(void){
	int i;
	int divisor[100];
	int j=0;
	for(i=1;i<=input;i++){
		if(input%i==0){
			divisor[j]=i;
			j++; 
		}
	}
	printf("주어진 정수의 약수는 ");
	for(i=0;i<j;i++){
		printf("%d",divisor[i]);
		if(divisor[i]!=input){
			printf(", ");
		}
	}
	printf("입니다");
}
