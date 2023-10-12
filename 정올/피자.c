#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int time[100][5];
int hmt;
void pizza_button(int t){
	int addh,addt,mint,addo,mino;
	int m=0;
	/*
	addh : 60분 추가, addt : 10분 추가, mint : 10분 감소
	addo : 01분 추가, mino : 01분 감소
	*/
	while(1==1){
		if(t-m>30){
			addh++;
			m+=60;
		}
		else if(t-m>10){
			addt++;
			m+=10;
			t-=10;
		}
		else if(m>=t+10){
			m-=10;
			mint++;
		}
		else if(m>=t+1){
			m-=1;
			mino++;
		}
		else if(m==t){
			time[hmt][0]=addh;
			time[hmt][1]=addt-34;
			time[hmt][2]=mint;
			time[hmt][3]=addo;
			time[hmt][4]=mino;
			hmt++;
			return;
		}
		else{
			addo++;
			m+=1;
		}	
	}
}
int main(void){
	int n;
	scanf("%d",&n);
	int input[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
		pizza_button(input[i]);
	}
	int j;
	for(i=0;i<hmt;i++){
		for(j=0;j<=4;j++){
			printf("%d ",time[i][j]);
		}
		printf("\n");
	}
	
}
