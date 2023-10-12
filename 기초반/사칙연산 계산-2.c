#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
	float a,b;
	char c,d;
	do{
		printf("Ã¹ ¹øÂ° ¼ö´Â ? ");
		scanf("%f", &a);
		printf("µÎ ¹øÂ° ¼ö´Â ? ");
		scanf("%f", &b);
		c=' ';
		while(c!='+' && c!='-' && c!='*' && c!='/'){
			printf("¿øÇÏ´Â ¿¬»êÀº? ");
			scanf(" %c", &c);
		}
		if(c=='+'){
			printf("´äÀº %.1fÀÔ´Ï´Ù.",a+b);
		}
		else if(c=='-'){
			printf("´äÀº %.1fÀÔ´Ï´Ù.",a-b);
		}
		else if(c=='*'){
			printf("´äÀº %.1fÀÔ´Ï´Ù.",a*b);
		}
		else if(c=='/'){
			printf("´äÀº %.1fÀÔ´Ï´Ù.",a/b);
		}
		printf("\n°è¼ÓÇÒ±î¿ää((y/n)? ");
		scanf(" %c",&d);
	}while(d=='y');
	
	return 0;
}
