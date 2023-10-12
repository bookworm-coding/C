#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <algorithm>
using namespace std;
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int input[5];
	for(int i=0;i<5;i++){
		scanf("%d", &input[i]);
	}
	sort(input, input+5);
	int temp=input[1]+4;
	if(input[3]>=temp){
		printf("KIN");
	}
	else if(input[3]<temp){
		printf("%d", (input[1]+input[2]+input[3]));
	}
	return 0;
}
