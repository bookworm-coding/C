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
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(n);
	printf("���ĺ��� ������ ������ �����ϴ�\n");
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
