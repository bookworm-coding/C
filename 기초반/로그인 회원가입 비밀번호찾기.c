#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int i;
	char id[30];
	char pw[30];
	char phone[15];
	char iid[30];
	char ipw[30];
	char iphone[15];
	do{
		printf("1)ȸ������ 2)�α��� 3)���̵� ��й�ȣ ã�� 4)������\n��ȣ�� �Է��Ͻÿ�? ");
		scanf("%d",&i);
		if(i==1){
			printf("ȸ������\n");
			printf("���̵� = ");
			scanf("%s",id);
			printf("��й�ȣ = ");
			scanf("%s",pw);
			printf("��ȭ��ȣ = (-����)");
			scanf("%s",phone);
		}
		if(i==2){
			printf("�α���\n");
			printf("���̵� = ");
			scanf("%s",iid);
			printf("��й�ȣ = ");
			scanf("%s",ipw);
			if(strcmp(iid,id)==0 && strcmp(ipw,pw)==0){
				printf("�α��� �Ǿ����ϴ�\n");
			}
			else if(strcmp(iid,id)==0){
				printf("��й�ȣ�� Ʋ�Ƚ��ϴ�. �ٽ� �Է��Ͻÿ�!\n");
			}
			else if(strcmp(ipw,pw)==0){
				printf("���̵� Ʋ�Ƚ��ϴ�. �ٽ� �Է��Ͻÿ�!\n");
			}
			else{
				printf("��� Ʋ�Ƚ��ϴ� ȸ�������� �ϰų� ���̵�/��й�ȣ�� ã���ÿ�\n");
			}
		}
		if(i==3){
			printf("���̵� ��й�ȣ ã��\n");
			printf("��ȭ��ȣ : ");
			scanf("%s",iphone);
			if(strcmp(phone,iphone)==0){
				printf("���̵� : %s\n",id);
				printf("��й�ȣ : %s\n",pw);
			}
		}
	}while(i!=4);

	return 0;
}
