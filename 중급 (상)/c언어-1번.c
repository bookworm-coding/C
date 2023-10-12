#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int alphabet[26];
	for(int i=0;i<26;i++){
		alphabet[i]=0;
	}
	char input[10000];
	gets(input);//-32
	for(int i=0;i<(int)strlen(input);i++){
		if(input[i]>='a' && input[i]<='z'){
			input[i]-=32;
		}
		if(input[i]>='A' && input[i]<='Z'){
			alphabet[(int)input[i]-65]++;
		}
	}
	for(int i=0;i<26;i++){
		printf("%c %d\n", i+65, alphabet[i]);
	}
	return 0;
}
