#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
int main(void){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	long long int boonmo, boonja;
	scanf("%lld", &boonja);
	scanf("%lld", &boonmo);
	int max;
	int a=1;
	if(boonmo<boonja){
		max=boonmo;
	}
	else{
		max=boonja;
	}
	while(a==1){
		a=0;
		for(int i=2;i<=max;i++){
			if(boonja%i==0 && boonmo%i==0){
				boonja/=i;
				boonmo/=i;
				a=1;
			}
		}
	}
	printf("%lld/%lld", boonja, boonmo);
	return 0;
}
