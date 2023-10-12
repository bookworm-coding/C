#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
char input[201];
char output[201];
void encrypt(void){
	int len=strlen(input);
	int len6;
	if(len%6==0){
		len6=len/6;
	}
	else{
		len6=len/6+1;
	}
	char c[len6][7];
	int i;
	for(i=0;i<len;i++){
		if(input[i]==' '){
			input[i]='*';
		}
	}
	for(i=len;i<201;i++){
		input[i]='\0';
	}
	int temp;
	temp=6-(len%6);
	for(i=len;i<(len+temp);i++){
		input[i]='.';
	}
	int j;
	for(i=0;i<len6;i++){
		for(j=0;j<6;j++){
			c[i][j]=input[6*i+j];
		}
		c[i][6]='\0';
	}
	for(i=0;i<len6;i++){
		for(j=0;j<6;j++){
			output[j*6+i]=c[i][j];
		}
	}
	return;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i;
	gets(input);
	encrypt();
	printf("%s",output);
	return 0;
} 
