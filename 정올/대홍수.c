#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#define M 20
int horse[M][M];
int n;
void calc(int sero, int garo){
	if(sero<0 || garo<0){
        return;
	}
    int temp=0;
    if(horse[sero+1][garo]==0){
        horse[sero+1][garo]=2;
        temp++;
        calc(sero+1, garo);
    }
    if(horse[sero-1][garo]==0){
        horse[sero-1][garo]=2;
        temp++;
        calc(sero-1, garo);
    }
    if(horse[sero][garo+1]==0){
        horse[sero][garo+1]=2;
        temp++;
        calc(sero, garo+1);
    }
    if(horse[sero][garo-1]==0){
        horse[sero][garo-1]=2;
        temp++;
        calc(sero, garo-1);
    }
    return;
}
int main(void){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int sero, garo;
    scanf("%d", &n);
    scanf("%d %d", &sero, &garo);//sero, garo;
    garo--;
    sero--;
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d", &horse[i][j]);
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<M;j++){
        	if(i>=n || j>=n){
        		horse[i][j]=1;
			}
        }
    }
    horse[sero][garo]=2;
    calc(sero, garo);
    int result=-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(horse[i][j]==2){
                result++;
            }
        }
    }
    printf("%d", result);
    return 0;
}
