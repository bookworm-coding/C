#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int a;
void dist_2d(int,int,int,int); 
int main(void){
	int x1,y1,x2,y2;
	printf("�� ���� ��ġ�� �Է��϶�: ");
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	dist_2d(x1,y1,x2,y2);
	return 0;
}
void dist_2d(int x1,int y1,int x2,int y2){
	a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	printf("�� �� ������ �Ÿ��� %d�̴�.",a);
}
