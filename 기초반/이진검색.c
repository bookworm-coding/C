#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 10
int main(){
	int a[]={2,3,5,9,14,19,28,55,72,99};
	int x,high,low,mid,y=0;
	printf("Ž���� data ? ");
	scanf("%d",&x);
	low=0;
	high=N-1;
	while(low<=high){
		mid=(low+high)/2;
		if(a[mid]==x){
			printf("%d�� %d��°�� �ֽ��ϴ�.\n",a[mid],mid+1);
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
		printf("ã�� �� �����ϴ�.\n");
	}
	return 0;
}
