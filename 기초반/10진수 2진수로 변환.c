#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n;
	printf("N? ");
	scanf("%d",&n);
	int ar[12],inx=0,i;
	while(n){
		ar[inx++]=n%2;
		n/=2;
	}
	for(i=inx-1;i>=0;i--){
		printf("%d",ar[i]);
	}
	return 0;
}
