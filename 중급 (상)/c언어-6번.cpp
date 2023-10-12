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
	long long int m, n;
	scanf("%lld", &m);
	scanf("%lld", &n);
	long long int result=1;
	for(long long int i=m;i<=n;i++){
		result*=i;
	}
	printf("%lld", result);
	return 0;
}
