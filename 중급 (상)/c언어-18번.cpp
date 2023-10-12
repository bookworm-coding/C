#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <stdbool.h>
#include <algorithm>
#include <cmath>
struct clock{
	int h, m;
	double angle;
};
bool compare(const clock &p1, const clock &p2){
	if(p1.angle>p2.angle){
		return true;
	}
	else if(p1.angle==p2.angle){
		if(p1.h>p2.h){
			return true;
		}
		else if(p1.h==p2.h){
			if(p1.m>p2.m){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
double change(double n){
	if(n<0){
		n*=-1.0;
	}
	if(n>360.0){
		n-=360.0;
	}
	if(n>180.0){
		n=360.0-n;
	}
	return n;
}
double calc(int h, int m){
	h%=12;
	double result=0.0;
	//시침:1시간에 30도, 1분에 0.5도
	//분침:1분에 6도
	double hour=0.0;
	double minute=0.0;
	hour=(double)h*30+(double)m*0.5;
	minute=(double)m*6;
	return change(hour-minute);
}

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	struct clock clock[5];
	for(int i=0;i<5;i++){
		scanf("%d:%d", &clock[i].h, &clock[i].m);
		clock[i].angle=calc(clock[i].h, clock[i].m);
	}
	std::sort(clock, clock+5, compare);
	printf("%02d:%02d", clock[2].h, clock[2].m);
	return 0;
}
