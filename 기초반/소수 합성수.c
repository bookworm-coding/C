#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int input;
void prime(void); 
int main(void){
	printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �ռ���(�Ҽ��� �ƴ� ��) �Դϴ�",input);
	}
	else{
		printf("%d�� �Ҽ� �Դϴ�",input);
	} 
}
