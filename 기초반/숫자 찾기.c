#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 10
int main(){
	int a[10];
	int x,high,low,mid,y=0,i=0;
	printf("10개의 숫자를 입력하시오\n");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("찾을 수를 입력하시오? \n");
	scanf("%d",&x);
	low=0;
	high=N-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==x){
			printf("%d는 당신이 %d번째 입력한 수 입니다.\n",a[mid],mid+1);
			y=1;
			break;
		}
		else if(a[mid]>x){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	if(y!=1){
		printf("찾을 수 없습니다.\n");
	}
	return 0;
}
