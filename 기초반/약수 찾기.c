#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int input;
void get_divisor(void); 
void main(void){
	printf("������ �Է��Ͻÿ�: ");
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
	printf("�־��� ������ ����� ");
	for(i=0;i<j;i++){
		printf("%d",divisor[i]);
		if(divisor[i]!=input){
			printf(", ");
		}
	}
	printf("�Դϴ�");
}
