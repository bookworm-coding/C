#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
#include <algorithm>
int sum(int numbers[], int len){
	int total=0;
	for(int i=0;i<len;i++){
		total+=numbers[i];
	}
	return (int)ceil((double)total/(double)len);
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	int input[n];
	int sum;
	int result[n];
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		scanf("%d", &input[i]);
		result[i]=input[i];
	}
	int get=10;
	while(get!=0){
		sum=sum(input, n);
		scanf("%d", &get);
		if(get>sum){
			input[0]=get;
		}
		else if(sum>get){
			input[n-1]=get;
		}
		std::sort
	}
	
	
	return 0;
}
