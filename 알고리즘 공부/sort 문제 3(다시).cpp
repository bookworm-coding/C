#include <cstdio>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#define _USE_MATH_DEFINES
#include <cstdbool>
#include <algorithm>
#include <cmath>
#include <random>
#include <stack>
#include <queue>
#include <vector> 
using namespace std;
struct num{
	int a, b;
	//a�� ������
	//b�� �Ҽ���
	//snum�� ��δ�
	//n[]�� ����+�Ҽ��θ� ����� 
	//data[]�� ����+�Ҽ���+�Ҽ��� char[]��
	double snum;
	int n[50];
	char data[50];
};
void change_from_n(struct num *data){
	
}
void change_from_ab(struct num *data){
	sprintf(data->data, "%d.%d", data->a, data->b);
	sscanf(data->data, "%lf", &data->snum);
	int ta, tb;
	ta=data->a;
	tb=data->b;
	data->n[0]=tb;
	int i=1;
	while(ta!=0){
		data->n[i]=ta%10;
		ta/=10;
		i++;
	}
	return;
}
int main(void) {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
	char input[50];
	gets(input);
	struct num get;
	sscanf(input, "%d.%d", &get.a, &get.b);
	change_from_ab(&get);
	vector<struct num> v;
	while(/*������ �� ����*/){
	}
	return 0;
}
