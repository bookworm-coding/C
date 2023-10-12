#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <algorithm>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;  
	int input[1000];
	for(int i=0;i<1000;i++){
		input[i]=0;
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d", &input[i]);
	}
	int result=0;
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(input[j]>input[j+1]){
				temp=input[j+1];
				input[j]=input[j];
				input[j]=temp;
				result++;
			}
		}
	}
	printf("%d",result);
	return 0;
}
