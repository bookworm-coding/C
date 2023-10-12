#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
struct location{
	int x,y;
}; 
int locate(int nx, int ny, int gx, int gy){
	int a,b;
	if(nx>gx){
		a=nx-gx;
	}
	else{
		a=gx-nx;
	}
	if(ny>gy){
		b=ny-gy;
	}
	else{
		b=gy-ny;
	}
	return a+b;
}
int main() {
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n;
	scanf("%d",&n);
	int i;
	int result=0;
	struct location l[n+1];
	l[0].x=0;
	l[0].y=0;
	for(i=1;i<=n;i++){
		scanf("%d %d", &l[i].x, &l[i].y);
		result+=locate(l[i].x, l[i].y, l[i-1].x, l[i-1].y);
	}
	printf("%d",result);
	return 0;
}
