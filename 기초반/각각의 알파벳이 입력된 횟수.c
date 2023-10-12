#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char n[100];
	int a[27];
	int i,j,nl;
	for(i=0;i<=27;i++){
		a[i]=0;
	}
	printf("문자열을 입력하세요 : ");
	gets(n);
	printf("알파벳의 개수는 다음과 같습니다\n");
	nl=strlen(n);
	for(i=0;i<=nl;i++){
		for(j='a';j<='z';j++){
			if(n[i]==j){
				a[j-96]++;
			}
		}
	}
	for(i=1;i<=26;i++){
		printf("%c = %d\n",i+96,a[i]);
	}
	return 0;
}
