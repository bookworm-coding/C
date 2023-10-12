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
	int n;
	scanf("%d", &n);
	int input[n];
	int max=0;
	for(int i=0;i<n;i++){
		scanf("%d", &input[i]);
		if(input[i]>max){
			max=input[i];
		}
	}
	printf("%d", max);
	return 0;
}
