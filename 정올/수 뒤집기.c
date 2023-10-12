#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int intrev(int n){
	int result = 0;
	while (n>0) {
		result*=10;
		result+=(n%10);
		n/=10;
	}

	return result;
}
int power(int _X, int _Y){
	return (int)pow((double)_X, (double)_Y);
}
char same(int n){
	char num[7];
	sprintf(num,"%d",n);
	int len=strlen(num);
	int i,j;
	for(i=0,j=len-1;i<len,j>=0;i++,j--){
		if(num[i]!=num[j]){
			return 'N';
		}
	}
	return 'Y';
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	scanf("%d",&n);
	n+=intrev(n);
	if(same(n)=='Y'){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
} 
