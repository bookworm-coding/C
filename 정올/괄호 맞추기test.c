#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
char input[101];
void calc();
int main(void){
	scanf("%s", input);
	int len=strlen(input);
	int i;
	int open=0;
	int close=0;
	for(i=0;i<len;i++){
		if(input[i]=='('){
			open++;
		}
		if(input[i]==')'){
			close++;
		}
		if(open<close){
			break;
		}
	}
	if(open!=close){
		printf("0\nWRONG EXPRESSION\n");
	}
	else{
		calc();
	}
	return 0;
}
void calc(){
	int i, j;
	int len=strlen(input);
	int num[len];
	int temp;
	int plus=1;
	int all=0;
	for(i=0;i<len;i++){
		num[i]=0;
	}
	j=1;
	int last=0;
	while(plus<=len){
		temp=0;
		for(i=0;i<len;i++){
			if(input[i]=='(' && input[i+plus]==')' && num[i]==0 && num[i+plus]==0){
				num[i]=j;
				num[i+plus]=j;
				temp=1;
				j++;
				for(int k=1;k<=i;k++){
					if(input[i-k]=='('&& input[i+plus+k]==')' && num[i-k]==0 && num[i+plus+k]==0){
						num[i-k]=j;
						num[i+plus+k]=j;
						j++;
					}
					else{
						break;
					}
				}
				break;
			}
		}
		if(temp!=1){
			plus++;
			last=0;
		}
	}
	int max=0;
	for(i=0;i<len;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	printf("%d\n", max*2);
	for(i=0;i<len;i++){
		printf("%d", num[i]);
		if(i!=len-1){
			printf(" ");
		}
	}
	printf("\n");
	return;
}
