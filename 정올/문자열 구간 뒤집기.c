#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
struct i_j{
	int i;
	int j;
};
char input[101];
char cinput[101];
void calc(int min, int max){
	int i;
	for(i=0;i<100;i++){
		cinput[i]='\0';
	}
	min--;
	max--;
	for(i=min;i<=max;i++){
		cinput[i-min]=input[i];
	}
	strrev(cinput);
	for(i=min;i<=max;i++){
		input[i]=cinput[i-min];
	}
	return;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,k;
	scanf("%d",&n);
	scanf("%s",input);
	scanf("%d",&k);
	struct i_j get[k];
	int i;
	for(i=0;i<k;i++){
		scanf("%d",&get[i].i);
		scanf("%d",&get[i].j);
	}
	for(i=0;i<k;i++){
		if(get[i].i>=get[i].j){
			calc(get[i].j,get[i].i);
		}
		else{
			calc(get[i].i,get[i].j);
		}
	}
	printf("%s",input);
	return 0;
} 
