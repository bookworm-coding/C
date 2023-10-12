#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int x=0,y=0,i=0,sum=1;
	printf("x? ");
	scanf("%d",&x);
	printf("y? ");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		sum=sum*x;
	}
	printf("%d",sum);
	return 0;
}
