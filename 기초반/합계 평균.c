#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#
int main(){
	float n[5];
	float sum;
	int i,num;
	num=5;
	sum=0;
	printf("몇개의 실수의 평균을 구할건가요?");
	scanf("%d",&num); 
	printf("%d개의 실수를 각각 입력하세요\n",num);
	for(i=0;i<num;i++){
		scanf("%f",&n[i]);
		sum+=n[i];
	}
	printf("합계 : %g\n",sum);
	printf("총합 : %g",sum/num);
	return 0;
}
