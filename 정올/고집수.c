#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int calc(int n){
	int now;
	now=n;
	int num[3];
	int time=0;
	while(now>9){
		num[0]=now/100;
		num[1]=(now%100)/10;
		num[2]=now%10;
		if(now<100){
			num[0]++;
		}
		time++;
		now=num[0]*num[1]*num[2];
	}
	return time;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int min, max, num, i, n=0;
	scanf("%d %d %d", &min, &max, &num);
	n=0;
	int result[max-min];
	for(i=min;i<=max;i++){
		if(calc(i)==num){
			result[n]=i;
			n++;
		}
	}
	printf("%d\n",n);
	for(i=0;i<n;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}
//int main(){
//	int k;
//	scanf("%d",&k);
//	printf("%d", calc(k));
//}
