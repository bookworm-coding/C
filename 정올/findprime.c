#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int calc(int n){
	int i;
	int k=0;
	int exit;
	int j;
	int l=0;
	for(i=0;l==0;i++){
		exit=0;
		l=1;
		k=4*(n+i)+1;
		for(j=2;j<=sqrt(k);j++){
			if((k%j)==0){
				l=0;
			}
		}
	}
	return k;
}
 

int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	scanf("%d", &n);
	printf("%d", calc(n));
	return 0;
}
