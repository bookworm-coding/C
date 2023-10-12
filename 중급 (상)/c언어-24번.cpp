#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	scanf("%d", &n);
	int before=0;
	int beforebefore=1;
	for(int i=0;i<n;i++){
		int temp=before+beforebefore;
		beforebefore=before;
		before=temp;
	}
	printf("%d", before);
	return 0;
}
