#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
char input[101];
void change(int a, int b){
	char temp[101];
	for(int i=a,j=0;i<=b;i++,j++){
		temp[j]=input[i];
	}
	strrev(temp);
	for(int i=a,j=0;i<=b;i++,j++){
		input[i]=temp[j];
	}
}
int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int s;
	scanf("%d", &s);
	scanf("%s",input);
	int n;
	scanf("%d", &n);
	int a, b;
	for(int i=0;i<n;i++){
		scanf("%d", &a);
		scanf("%d", &b);
		a--;
		b--;
		if(a>b){
			change(b, a);
		}
		else{
			change(a, b);
		}
		
	}
	printf("%s", input);
	return 0;
}
