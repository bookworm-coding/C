#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b;
	printf("<입력>\n");
	scanf("%d %d",&a,&b);
	printf("<출력>\n");
	if(a%b==0){
		printf("'%d'는 '%d'의 배수이다.",a,b);
	}
	else if(b%a==0){
		printf("'%d'는 '%d'의 약수이다",a,b);
	}
	else{
		printf("'%d'와 '%d'는 아무 관계도 없다.",a,b);
	}
	return 0;
}
