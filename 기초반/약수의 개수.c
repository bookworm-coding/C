#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int a,b,n;
	printf("<�Է�>\n");
	scanf("%d",&a);
	n=0;
	printf("<���>\n");
	for(b=1;b<=a;b++){
		if(a%b==0){
			n++;
		}
	}
	printf("%d",n);
	return 0;
}
