#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int list[42];
	memset(list, -1, 42*sizeof(int));
	int temp;
	int result=0;
	for(int i=0;i<10;i++){
		scanf("%d", &temp);
		if(list[temp%42]==-1){
			list[temp%42]=temp%42;
			result++;
		}
	}
	printf("%d", result);
	return 0;
}
