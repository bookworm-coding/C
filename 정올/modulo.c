#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>

int calc(int input[10]){
	int result[10];
	int i, j, rr,imsi;
	rr=0;
	for(i=0;i<10;i++){
		result[i]=input[i]%42;
	}
	for(i=0;i<10;i++){
    	for(j=i-1;j>=0;j--){
			if(result[j]>result[j+1]){
				imsi=result[j];
				result[j]=result[j+1];
				result[j+1]=imsi;
			}
		}
	}
	for(i=1;i<10;i++){
		if(result[i]!=result[i-1]){
			rr++;
		}
	}
	return rr+1;
}

int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i;
	int input[10];
	for(i=0;i<10;i++){
		scanf("%d", &input[i]);
	} 
	printf("%d",calc(input));
	return 0;
}
