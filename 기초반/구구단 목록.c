#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 

int main(){
	int a,b=1;
	printf("�Է��� n��? ");
	scanf("%d",&a);
	while(b<=9){
		printf("%d*%d=%d\n",a,b,a*b);
		b++;
	}
	return 0;
}
