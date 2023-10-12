#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int a[6][6]={0};
	int i,j,m,n;
	n=1;
	m=1;
	i=1;
	j=1;
	a[1][6]=1;
	a[6][5]=1;
	a[5][0]=1;
	do{
		a[i][j]=n++;
		switch(m){
			case 1 : j++;
						if(a[i][j+1]>0){
							m=2;
					  	}
					  	break;
			case 2 : i++;
						if(a[i+1][j]>0){
							m=3;
						}
						break;
			case 3 : j--;
						if(a[i][j-1]>0){
							m=4;
						}
						break;
			case 4 : i--;
						if(a[i-1][j]>0){
							m=1;
						}
						break;
		}
	}while(n<=25);
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
