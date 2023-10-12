#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int calc(int n){
	int b=0, s=0;
	int i, j;
	char small[11], big[11];
	sprintf(small,"%d",n);
	int len=strlen(small);
	for(int i=len-1;i>0;i--){
		for(int j = 0; j < i; j++){
			if(small[j]>small[j+1]){
				int temp=small[j];
				small[j]=small[j+1];
				small[j+1]=temp;
			}
		}
	}
	strcpy(big, small);
	strrev(small);
	for(i=len-1;i>=0;i--) {
		s*=10;
		s+=small[i]-'0';
	}
	for(i=len-1;i>=0;i--){
		b*=10;
		b+=big[i]-'0';
	}
	return b-s;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	int i;
	int now;
	scanf("%d", &n);
	int data[1000];
	int tempdata[1000]; 
	for(i=0;i<1000;i++){
		data[i]=0;
	}
	data[0]=n;
	int num=1;
	int d=0;
	int finish=0;
	while(num<1000){
		data[num]=calc(data[num-1]);
		num++;
	}
	int a=0;
	for(i=0;i<num;i++){
		a=0;
		for(int j=0;j<i;j++){
			if(data[i]==data[j]){
				a=1;
			}
		}
		if(a==0){
			d++;
		}
	}
	printf("%d\n", d);
	for(i=0;i<num;i++){
		a=0;
		for(int j=0;j<i;j++){
			if(data[i]==data[j]){
				a=1;
			}
		}
		if(a==0){
			printf("%d\n", data[i]);
		}
	}
	return 0;
}
