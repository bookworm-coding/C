#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int result[1000];
void change(int l/*i*/, int n/*input[i]*/){
	int time=0;
	int i;
	int where;
	int temp;
	while(time!=n){
		temp=0;
		for(i=0;i<1000;i++){
			if(result[i]==l){
				where=i;
			}
		}
		temp=result[where-1];
		result[where-1]=result[where];
		result[where]=temp;
		time++;
	}
	return;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,i;
	scanf("%d",&n);
	int input[n];
	for(i=1;i<=n;i++){
		result[i]=i;
	}
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	for(i=0;i<n;i++){
		change(i+1,input[i]);
	}
	for(i=1;i<=n;i++){
		printf("%d ",result[i]);
	}
	return 0;
} 
