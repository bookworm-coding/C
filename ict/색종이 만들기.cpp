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
int blue;
int white;
int input[128][128];
void calc(int start_x, int start_y, int width){
	int color=input[start_x][start_y];
	bool test=true;
	for(int i=0;i<width;i++){
		for(int j=0;j<width;j++){
			if(input[start_x+i][start_y+j]!=color){
				test=false;
				break;
			}
		}
	}
	if(test){
		if(color==0){
			white++;
			return;
		}
		else{
			blue++;
			return;
		}
	}
	calc(start_x, start_y, width/2);
	calc(start_x, start_y+width/2, width/2);
	calc(start_x+width/2, start_y, width/2);
	calc(start_x+width/2, start_y+width/2, width/2);
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &input[i][j]);
		}
	}
	calc(0, 0, n);
	printf("%d\n%d", white, blue);
	return 0;
}
