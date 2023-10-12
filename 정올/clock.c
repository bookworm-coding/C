#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
struct time{
	int h,m;
	float result;
};
struct angle{
	float hour, minute;
};
float calc(float h, float m){
	float result;
	if(h>=12){
		h-=12;
	}
	struct angle angle;
	angle.hour=30.0*h+0.5*m;
	angle.minute=6.0*m;
	result=angle.hour-angle.minute;
	if(result<0.0){
		result*=-1.0;
	}
	if(result>=180.0){
		result=360.0-result;
	}
	return result;
}
int main(void){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	struct time time[5];
	int i,j;
	float temp;
	for(i=0;i<5;i++){
		scanf("%d:%d", &time[i].h, &time[i].m);
		time[i].result=calc((float)time[i].h, (float)time[i].m);
	}
	float result[5];
	for(i=0;i<5;i++){
		result[i]=time[i].result;
	}
	for(i=0;i<4;i++) {
        for (j=0;j<4-i;j++) {
            if(result[j]>result[j+1]){
                temp = result[j];
                result[j] = result[j+1];
                result[j+1] = temp;
            }
        }
    }
    for(i=0;i<5;i++){
    	if(result[1]==result[2]){
    		if(result[2]==time[i].result){
    			printf("%02d:%02d\n", time[i+1].h, time[i+1].m);
    			break;
			}
		}
    	else if(result[2]==time[i].result){
    		printf("%02d:%02d\n", time[i].h, time[i].m);
    		break;
		}
	}
	return 0;
} 
