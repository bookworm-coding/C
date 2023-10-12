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
	int n;
	scanf("%d", &n);
	int result[n];
	int room[n];
	for(int i=0;i<n;i++){
		scanf("%d", &room[i]);
	}
	int num=1;
	for(int i=0;i<n;i++){
		if(room[i]==1){
			result[i]=num++;
		}
	}
	for(int i=0;i<n;i++){
		if(room[i]==2){
			result[i]=num++;
		}
	}
	for(int i=0;i<n;i++){
		if(room[i]==3){
			result[i]=num++;
		}
	}
	for(int i=0;i<n;i++){
		if(room[i]==4){
			result[i]=num++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ", result[i]);
	}
	return 0;
}
