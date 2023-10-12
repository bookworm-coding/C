#include <algorithm>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input[101];
	gets(input);
	int opennum=0;
	int open[50];
	int result[101];
	int num=1;
	for(int i=0;i<strlen(input);i++){
		if(input[i]=='('){
			open[opennum]=i;
			opennum++;
		}
		else{
			if(opennum==0){
				printf("WRONG EXPRESSION");
				return 0;
			}
			input[i]='-';
			input[open[opennum-1]]='-';
			result[i]=num;
			result[open[opennum-1]]=num;
			opennum--;
			open[opennum]=0;
			num++;
		}
	}
	if(opennum!=0){
		printf("WRONG EXPRESSION");
		return 0;
	}
	for(int i=0;i<strlen(input);i++){
		printf("%d ", result[i]);
	}
	return 0;
}
