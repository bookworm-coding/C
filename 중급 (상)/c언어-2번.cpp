#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
//#include <math.h>
#include <stdbool.h>
#include <algorithm>
#include <cmath>
double sum(int numbers[], int len){
	int total=0;
	for(int i=0;i<len;i++){
		total+=numbers[i];
	}
	return (double)total/(double)len;
}
int sum_number(int numbers[], int len){
	return (int)round(sum(numbers, len));
}
void print(int numbers[], int len){
	int sumi=sum_number(numbers, len);
	for(int i=0;i<len;i++){
		printf("%d ", numbers[i]);
	}
	printf("%d\n", sumi);
	return;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	double sumd;
	scanf("%d", &n);
	int input[n];
	int result[n];
	for(int i=0;i<n;i++){
		scanf("%d", &input[i]);
		result[i]=input[i];
	}
	int get=10;
	while(get!=0){
		sumd=sum(result, n);
		scanf("%d", &get);
		if(get==0){
			continue;
		}
		if(get>sumd){
			result[0]=get;
		}
		else if(sumd>get){
			result[n-1]=get;
		}
		std::sort(result, result+n);
		print(result, n);
	}
	return 0;
}
