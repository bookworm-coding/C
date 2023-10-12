#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
#include <time.h>
#include <algorithm>
int calc(int len, int energy, int bridge[]){
	int i=0, j=0;
	int result=0;
	int minnum;
	int min;
	while(j<len){
		min=1000000000;
		for(i=0;i<4;i++){
			if(bridge[j+i]<min && bridge[j+i]!=-1){
				min=bridge[j+i];
				minnum=i;
			}
		}
		result+=min;
		j+=minnum+1;
	}
	if(energy<=result){
		return -1;
	}
	return result;
}
int main(void){
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	int distance, energy;
	scanf("%d %d", &distance, &energy);
	int bridge[distance];
	for(int i=0;i<distance;i++){
		scanf("%d", &bridge[i]);
	}
	
	printf("%d", calc(distance, energy, bridge));
	return 0;
}
