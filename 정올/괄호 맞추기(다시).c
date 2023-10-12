#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
void calc(char input[]);
int main(void){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input[101];
	scanf("%s", input);
	calc(input);
	return 0;
}
void calc(char input[]){
	int i=0;
	int time=1;
	int result[strlen(input)];
	char temp[strlen(input)];
	for(i=0;i<strlen(input);i++){
		result[i]=0;
		temp[i]='\0';
	}
	i=0;
	int k=0;
	while(i<strlen(input)){
		if(temp[0]=='\0'){
			while(input[i]=='('){
				temp[i]=input[i];
				i++;
			}
		}
		result[i]=time;
		for(int j=i-1;j<=0;j--){
			if(temp[j]=='('){
				result[j]=time;
				temp[j]='\0';
				k=1;
				break;
			}
		}
		if(k==1){
			printf("WRONG EXPRESSION\n");
			return;
		}
		i++;
		time++;
	}
	printf("%d\n", time*2-2);
	for(i=0;i<strlen(input);i++){
		printf("%d ", result[i]);
	}
}
