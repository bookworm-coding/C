#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int num[26];
char lists[]="abcdefghijklmnopqrstuvwxyz";
char listb[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calc(char input[1000]){
	int i,j;
	for(i=0;i<strlen(input);i++){
		for(j=0;j<27;j++){
			if(input[i]==lists[j] || input[i]==listb[j]){
				num[j]++;
			}
		}
	}
}
int main(int argc, char *argv[]) {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	char input[1000];
	gets(input);
	calc(input);
	int i;
	for(i=0;i<26;i++){
		printf("%c %d\n",listb[i],num[i]);
	}
	return 0;
}
