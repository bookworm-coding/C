#include <algorithm>
using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
void print(int abcd[], int n){
	for(int i=0;i<n;i++){
		printf("%d ", abcd[i]);
	}
	return;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int input[n];
	for(int i=0;i<n;i++){
		scanf("%d", &input[i]);
	}
	int result[n];
	for(int i=0;i<n;i++){
		result[i]=i+1;
	}
	for(int i=0;i<n;i++){
		int temp=result[i];
		for(int j=i-1;j>=i-1-input[i];j--){
			result[j+1]=result[j];
		}
		result[i-input[i]]=temp;
	}
	print(result, n);
	return 0;
}
