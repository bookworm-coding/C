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
	printf("��� �Ǽ��� ����� ���Ұǰ���?");
	scanf("%d",&num); 
	printf("%d���� �Ǽ��� ���� �Է��ϼ���\n",num);
	for(i=0;i<num;i++){
		scanf("%f",&n[i]);
		sum+=n[i];
	}
	printf("�հ� : %g\n",sum);
	printf("���� : %g",sum/num);
	return 0;
}
