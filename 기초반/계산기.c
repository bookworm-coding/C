#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int m1,m2,m3,m4;
int math(int,char,int); 
int main(void){
	int a;
	char m;
	int b;
	int c=0;
	int result;
	while(c==0){
		printf("¿¬»êÀ» ÀÔ·ÂÇÏ½Ã¿À: ");
		scanf("%d %c%d",&a,&m,&b);
		c=math(a,m,b);
	}
	return 0;
}
int math(int a,char m,int b){
	int result;
	if(m=='+'){
		result=a+b;
		printf("¿¬»ê °á°ú: %d\n",result);
		printf("µ¡¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n\n",++m1);
	}
	else if(m=='-'){
		result=a-b;
		printf("¿¬»ê °á°ú: %d\n",result);
		printf("»¬¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n\n",++m2);
	}
	else if(m=='*'){
		result=a*b;
		printf("¿¬»ê °á°ú: %d\n",result);
		printf("°ö¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n\n",++m3);
	}
	else if(m=='/'){
		result=a/b;
		printf("¿¬»ê °á°ú: %d\n",result);
		printf("³ª´°¼ÀÀº ÃÑ %d¹ø ½ÇÇàµÇ¾ú½À´Ï´Ù.\n\n",++m4);
	}
	else{
		printf("ÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù.");
		return 1;
	}
	return 0;
}
