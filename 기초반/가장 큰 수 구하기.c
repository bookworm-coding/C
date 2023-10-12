#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
	int n[10];
	int i,big;
	for(i=0;i<10;i++){
		scanf("%d",&n[i]);
	}
	big=n[0];
	for(i=0;i<9;i++){
		if(big>n[i+1]){
			big=big;
		}
		else{
			big=n[i+1];
		}
		
	}
	printf("가장 큰 수 : %d\n",big);
	return 0;
}
