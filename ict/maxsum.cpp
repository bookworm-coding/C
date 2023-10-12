//#include <algorithm>
//using namespace std;
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
int sum(int start, int end, int array[]){
	int result=0;
	for(int i=start;i<=end;i++){
		result+=array[i];
	}
	return result;
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
	int max=0;
	int temp=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			temp=sum(i, j, input);
			if(temp>max){
				max=temp;
			}
		}
	}
	printf("%d", max);
	return 0;
}
