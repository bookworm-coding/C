#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int n(int num){
	if(num<2020){
		return 0;
	}
	else if(num%2021==0||num%2020==0||num%2020<=num/2020){
		return 1;
	}
	else{
		return 0;
	}
}
int main(void){
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int num,i;
	printf("input\n");
	scanf("%d",&num);
	int input[num];
	int output[num];
	for(i=0;i<num;i++){
		scanf("%d",&input[i]);
	}
	for(i=0;i<num;i++){
		output[i]=n(input[i]);
	}
	printf("output\n");
	for(i=0;i<num;i++){
		//if(output[i]==0) printf("%d\n",input[i]);
		printf("%d\n",output[i]);
	}
	return 0;
}

