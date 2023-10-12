#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int arr[5][5]={0};
	int i,j,k,n=1;
	int start=5/2,end=5/2;
	for(i=0;i<5;i++){
		for(j=start;j<=end;j++){
			arr[i][j]=n++;
		}
		if(i<5/2){
			start--;
			end++;
		}
		else{
			start++;end--;
		}
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[j][i]==0){
				printf("   ");
			}
			else{
				printf("%3d",arr[j][i]);
			}
		}
		printf("\n");
	}
	return 0;
}
