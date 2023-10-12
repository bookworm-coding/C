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
	char input[201];
	for(int i=0;i<201;i++){
		input[i]='\0';
	}
	gets(input);
	int len=strlen(input);
	for(int i=0;i<len;i++){
		if(input[i]==' '){
			input[i]='*';
		}
	}
	if(len%6!=0){
		for(int i=len;i<6-(len%6)+len;i++){
			input[i]='.';
		}
		len=6-(len%6)+len;
	}
	for(int j=0;j<6;j++){
		for(int i=j;i<len;i+=6){
			printf("%c", input[i]);
		}
	}
	return 0;
}
