#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
	float a,b;
	char c;
	printf("첫 번째 수는 ? ");
	scanf("%f", &a);
	printf("두 번째 수는 ? ");
	scanf("%f", &b);
	printf("원하는 연산은? ");
	scanf(" %c", &c);
	if(c=='+'){
		printf("답은 %.1f입니다.",a+b);
	}
	else if(c=='-'){
		printf("답은 %.1f입니다.",a-b);
	}
	else if(c=='*'){
		printf("답은 %.1f입니다.",a*b);
	}
	else if(c=='/'){
		printf("답은 %.1f입니다.",a/b);
	}
	return 0;
}
