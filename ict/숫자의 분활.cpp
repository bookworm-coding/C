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
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	char test[1000000];
	scanf("%s", test);
	int len=strlen(test);
	strrev(test);
	for(int i=0;i<len;i++){
		for(int j=i;j>=0;j--){
			printf("%c", test[j]);
		}
		printf(" ");
	}
	return 0;
}
