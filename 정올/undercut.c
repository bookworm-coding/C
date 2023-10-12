#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
struct score{
	int a,b;
};
int A, B;
void calc(int a, int b){
	if(a==b){
		return;
	}
	else if(a==1 && b==2){
		A+=6;
		return;
	}
	else if(b==1 && a==2){
		B+=6;
		return;
	}
	else if((a+1)==b){
		A+=(a+b);
		return;
	}
	else if((b+1)==a){
		B+=(a+b);
		return;
	}
	else if(a>b){
		A+=a;
		return;
	}
	else if(b>a){
		B+=b;
		return;
	}
	return;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	scanf("%d",&n);
	struct score s[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&s[i].a);
	}
	for(i=0;i<n;i++){
		scanf("%d",&s[i].b);
	}
	for(i=0;i<n;i++){
		calc(s[i].a, s[i].b);
	}
	printf("%d %d",A,B);
	return 0;
} 
