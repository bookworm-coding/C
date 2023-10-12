#include <cstdio>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#define _USE_MATH_DEFINES
#include <cstdbool>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector> 
using namespace std;
void calc(int n){
	printf("%d ", n);
	if(n>1){
		calc(n-1);
	}
	if(n>2){
		calc(n-2);
	}
	return;
}
int main(void) {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	calc(n);
	return 0;
}
