#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define M 9999
int main(){
	int a[5]={1,2,4,8,M};
	int b[5]={1,2,3,6,M};
	int p[120];
	int i,j,k,s;
	i=j=s=0;
	while(a[i]!=M || b[j]!=M){
		if(a[i]<=b[j]){
			p[s++]=a[i++];
		}
		else{
			p[s++]=b[j++];
		}
	}
	for(k=0;k<i+j;k++){
		if(p[k]==p[k+1]){
			continue;
		}
		printf("%d\n",p[k]);
	}
	return 0;
}
