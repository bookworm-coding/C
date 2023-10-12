#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int game(int n,int k){
	int i;
	int r;
	int s,b; 
	int j;
	for(j=1;j<=n;j++){
		for(i=j;i<=k;i++){
			r+=i;
		}
		if(n==r){
			s=j;
			b=k;
			return b-s;
		}
	}
	return -1;
}
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int result = game(n,k);
	printf("%d",result);
	return 0;
}
