#include "custom.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
int r_u(int o, int d){
	return (o+(5*d))/(d*10) * (d*10);
} 
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int i;
	scanf("%d",&i);
	printf("%d\n%d\n%d",r_u(i,1),r_u(i,10),r_u(i,100));
	return 0;
} 
