#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdbool.h>
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, u, d;
	int time=0;
	scanf("%d", &n);
	scanf("%d", &u);
	scanf("%d", &d);
	while(n>0){
		n-=u;
		time++;
		if(n<=0){
			break;
		}
		n+=d;
		time++;
	}
	printf("%d", time);
	return 0;
}
