#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
int calc(int input);
int clocknum(int input);
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i;
	int input[4];
	for(i=0;i<4;i++){
		scanf("%d", &input[i]);
	}
	int in=0;
	for(i=0;i<4;i++){
		in*=10;
		in+=input[i];
	}
	printf("%d", calc(in));
	return 0;
}
int calc(int input){
	int inputnum=clocknum(input);
	int cache=inputnum;
	int time=1;
	int a=0;
	for(int i=1111;i<inputnum;i++){
		cache=clocknum(i);
		if(cache==i){
			time++;
		}
	}
	return time;
}
int clocknum(int input){
	int k[4];
	int i=3;
	while(input!=0){
		k[i]=input%10;
		input/=10;
		i--;
	}
	int temp[4][4];
	for(i=0;i<4;i++){
		temp[0][i]=k[i];
	}
	for(i=1;i<4;i++){
		temp[1][i]=k[i-1];
	}
	temp[1][0]=k[3];
	for(i=2;i<4;i++){
		temp[2][i]=k[i-2];
	}
	temp[2][0]=k[2];
	temp[2][1]=k[3];
	for(i=3;i<4;i++){
		temp[3][i]=k[i-3];
	}
	temp[3][0]=k[1];
	temp[3][1]=k[2];
	temp[3][2]=k[3];
	int tempclock[4]={0, 0, 0, 0};
	for(i=0;i<4;i++){
		for(int j=0;j<4;j++){
			tempclock[i]*=10;
			tempclock[i]+=temp[i][j];
		}
	}
	int small=100000;
	for(i=0;i<4;i++){
		if(tempclock[i]<small){
			small=tempclock[i];
		}
	}
	return small;
}

