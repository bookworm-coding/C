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
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char input[101];
	for(int i=0;i<101;i++){
		input[i]='\0';
	}
	gets(input);
	for(int i=0;i<strlen(input);i++){
		if(input[i]!='h' && input[i]!='a' && input[i]!='y'){
			printf("%c", input[i]);
		}
	}
	return 0;
}
