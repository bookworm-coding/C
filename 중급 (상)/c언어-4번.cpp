#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int calc(int p, int m, int f, int c){
	int coupona=m/p*c;
	int couponb=m/p*c;
	//f°¡ Áß¿ä
	int chickena=0, chickenb=0;
	int temp;
	while(couponb>=f){
		chickena+=coupona/f;
		chickenb+=couponb/f;
		coupona%=f;
		temp=couponb/f*c;
		couponb%=f;
		couponb+=temp;
	}
	return chickenb-chickena;
}
int main(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int t;
	scanf("%d", &t);
	int p, m, f, c;
	for(int i=0;i<t;i++){
		scanf("%d", &p);
		scanf("%d", &m);
		scanf("%d", &f);
		scanf("%d", &c);
		printf("%d\n", calc(p, m, f, c));
	}
	return 0;
}
