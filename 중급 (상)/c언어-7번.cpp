#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>

void calc(int input1[], int input2[], int input1_len, int input2_len){
	char result[1002];
	memset(result, '\0', sizeof(char)*1002);
	for (int i=0;i<input1_len;i++){
		if (i >input2_len){
			result[i]=input1[i] + '0';
		}
		else if (input1[i]-input2[i]<0){
			input1[i + 1]--;
			result[i]=10 + input1[i]-input2[i] + '0';
		}
		else{
			result[i]=input1[i]-input2[i] + '0';
		}
	}
	strrev(result);
	printf("%s", result);
	return;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input1[1002];
	char input2[1002];
	scanf("%s",input1);
	scanf("%s",input2);
	int input1_int[1002];
	int input2_int[1002];
	memset(input1_int, 0, sizeof(int)*1002);
	memset(input2_int, 0, sizeof(int)*1002);
	strrev(input1);
	strrev(input2);
	for (int i=0;i<strlen(input1);i++){
		input1_int[i]=input1[i]-'0';
	}
	for (int i=0;i<strlen(input2);i++){
		input2_int[i]=input2[i]-'0';
	}
	calc(input1_int, input2_int, strlen(input1), strlen(input2));
	return 0;
}
